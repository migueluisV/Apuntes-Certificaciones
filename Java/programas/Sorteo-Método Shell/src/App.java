import java.io.IOException; //Excepción si hay error durante entrada y salida de datos.
import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.
import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class App {
    public static Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.

    private static void IngresoSueldos(float[] Sueldos, int pos) throws InterruptedException, IOException{
        //Declaración e inicialización de variables.
        int salto = Sueldos.length / 2, cont, i;
        float aux;
        boolean bandera;

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            //Ingreso de datos a arreglo.
            System.out.println("-Ordenamiento Shell-\n");
            System.out.println("Ingresa 10 salarios:");
            while (pos < Sueldos.length){
                System.out.printf("%s- ", pos + 1); Sueldos[pos] = lectura.nextFloat();
                pos++; //Incrementa contador.
            }

            new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

            //Ordenamiento Shell ascendente.
            while (salto > 0){
                bandera = true; //Variable comienza en true.
                while (bandera != false){ //Entra al ciclo.
                    bandera = false; //Variable vuelve a false.
                    cont = 1; //Se inicializa el contador en 1.
                    while (cont <= (Sueldos.length - salto)){ //Mientras el contador sea menor a la mitad de la longitud del arreglo...
                        if (Sueldos[cont - 1] > Sueldos[(cont - 1) + salto]){ //Si el primer elemento es mayor al elemento a la mitad de la posición del arreglo,
                                                                              //se intercambian valores.
                            aux = Sueldos[(cont - 1) + salto];
                            Sueldos[(cont - 1) + salto] = Sueldos[cont - 1];
                            Sueldos[cont - 1] = aux;
                            bandera = true; //Variable vuelve a true.
                        }
                        cont++; //Incrementa contador.
                    }
                }
                salto /= 2;
            }

            //Despliegue de resultados.
            System.out.println("---Sueldos ordenados por el método Shell---\n");
            for (i = 0; i < Sueldos.length; i++){
                System.out.printf("%s - %s\n", i + 1, Sueldos[i]);
            }
        } catch(InputMismatchException e){
            System.out.println("Error de formato.");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            IngresoSueldos(Sueldos, pos); //Llamada recursiva a IngresoSueldos.
        }
    }

    public static void main(String[] args) throws Exception {
        float[] Sueldos = new float[10]; //Declara arreglo float de 10 elementos.
        IngresoSueldos(Sueldos, 0); //Llamada al procedimiento que ingresa los sueldos para luego ordenarlos.
    }
}
