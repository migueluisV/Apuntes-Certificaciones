import java.io.IOException; //Excepción si hay error durante entrada y salida de datos.
import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.
import java.util.Random; //Clase para trabajar con un generador de números aleatorios. 
import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class App {
    private static int[]Numeros; //Declara arreglo estático entero sin inicializar.
    public static Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.

    //Procedimiento estático que inicializa el arreglo estático con la cantidad de elementos que quiera el usuario, y le agrega valores.
    private static void ValoresArreglo() throws InterruptedException, IOException{
        Random aleatorio = new Random(); //Declara un objeto Random para generar números aleatorios.
        int Tam, LimI, LimS, i;

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        System.out.println("-Valores para generar un arreglo-\n");
        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            System.out.print("¿De que tamaño quiere el arreglo? (número entero): "); Tam = lectura.nextInt();
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            System.out.print("Ingresa el límite inferior de valores a ingresar en el arreglo (número entero): "); LimI = lectura.nextInt();
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            System.out.print("Ingresa el límite superior de valores a ingresar en el arreglo (número entero): "); LimS = lectura.nextInt();
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            Numeros = new int[Tam]; //Inicializa el arreglo estático con la cantidad de elementos que el usuario desee.

            lectura.close(); //Cierra el objeto Scanner.

            for (i = 0; i < Numeros.length; i++){
                Numeros[i] = aleatorio.nextInt(LimS - LimI + 1) + LimI; //Asigna un valor entero generado entre un rango al arreglo.
            }
        } catch(InputMismatchException e){
            System.out.println("Error de formato.");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            ValoresArreglo(); //Llamada recursiva a ValoresArreglo.
        }
    }

    //Procedimiento estático que ordena un arreglo con el ordenamiento rápido utilizando recursividad.
    private static void SorteoRapido(int[] Nums, int p, int u){
        //Declaración e incialización de variables.
        int i = p, j = u, central = (p + u) / 2, aux, pivote = Nums[central];

        //Ordenamiento rápido.
        //Ciclo que ordena los elementos del arreglo mientras i sea menor igual que j.
        do{
            while (Nums[i] < pivote) {i++;} //Incrementa el contador siempre y cuando el elemento en las primeras posiciones sea menor al elemento central.
            while (Nums[j] > pivote) {j--;} //Decrementa el contador siempre y cuando el elemento en las últimas posiciones sea mayor al elemento central.
            if (i <= j){ //Ordena los elementos
                aux = Nums[i];
                Nums[i] = Nums[j];
                Nums[j] = aux;
                i++; //Incrementa contador.
                j--; //Decrementa contador.
            }
        } while(i <= j);

        //Condición de salida para procedimiento recursivo.
        if (p < j)
            SorteoRapido(Nums, p, j);
        if (i < u)
            SorteoRapido(Nums, i, u);
    }

    public static void main(String[] args) throws Exception {
        int i;

        //Establece parámetros para declarar un arreglo y rango de números enteros que estarán dentro de este arreglo.
        ValoresArreglo();

        //Despliegue de resultados sin ordenar.
        System.out.println("-Números enteros generados aleatoriamente-\n");
        for (i = 0; i < Numeros.length; i++){
            System.out.printf("%s - %s\n", i + 1, Numeros[i]);
        }

        //Llamada al procedimiento que ordena los números.
        SorteoRapido(Numeros, 0, Numeros.length - 1);

        //Despliegue de resultados ordenados.
        System.out.println("-\nNúmeros enteros generados aleatoriamente ordenados-\n");
        for (i = 0; i < Numeros.length; i++){
            System.out.printf("%s - %s\n", i + 1, Numeros[i]);
        }
    }
}
