import java.io.IOException; //Excepción si hay error durante entrada y salida de datos.
import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.
import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class App {
    public static Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.
    private static float[] Calificaciones = new float[10]; //Declara arreglo float estático de 10 calificaciones.

    //Procedimiento estático que despliega un menú de opciones para tratar los tipos de ordenamiento burbuja.
    private static void Menu() throws InterruptedException, IOException{
        int Op; //Variable para la opción a tomar.

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            //Despliega menú de opciones.
            System.out.println("Ordenamiento de burbuja y tipos\n");
            System.out.println("-Menú-\n1) Burbuja simple.\n2) Burbuja mejorada.\n3) Burbuja optimizada.\n4) Salir.");
            //Ingreso de datos a variables.
            System.out.print("Selecciona una opción: "); Op = lectura.nextInt();
            lectura.nextLine(); //Limpia buffer de entrada de datos.
    
            //Selectiva switch para saltar al procedimiento seleccionado.
            switch(Op){
                case 1:
                    BurbujaSimple(); //Llamada al procedimiento de ordenamiento burbuja simple.
                    break;
                case 2:
                BurbujaMejorada(); //Llamada al procedimiento de ordenamiento burbuja mejorada.
                    break;
                case 3:
                BurbujaOptimizada(); //Llamada al procedimiento de ordenamiento burbuja optimizada.
                    break;
                case 4:
                    lectura.close(); //Cierra el objeto Scanner.
                    System.exit(0); //Cierra el programa
                    break;
                default:
                    System.out.println("Selecciona una opción del menú mostrado. Presiona ENTER para continuar...");
                    lectura.nextLine(); //Limpia buffer de entrada de datos.
                    Menu(); //Llamada recursiva a Menu.
            }
        } catch(InputMismatchException e){
            System.out.println("Error de formato.");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            Menu(); //Llamada recursiva a Menu.
        }
    }

    //Procedimiento estático que ordena nombres con el método burbuja simple.
    private static void BurbujaSimple() throws InterruptedException, IOException{
        String[] Nombres = new String[10]; //Declara arreglo string para 10 nombres.
        String aux; //Variable auxiliar para el ordenamiento.
        int i, j; //Variables para los ciclos de ordenamiento.

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        System.out.println("Ordenamiento de burbuja simple\n");
        //Ingreso de datos al arreglo.
        System.out.println("Ingresa 10 nombres:");
        for (i = 0; i < 10; i++){
            System.out.printf("%s- ", i + 1); Nombres[i] = lectura.nextLine();
        }

        //Ordenamiento de burbuja simple ascendente.
        for (i = 0; i < 10; i++){ //Ciclo para repetir el ordenamiento el número de elementos del arreglo a ordenar.
            for (j = 0; j < 9; j++){ //Ciclo para comparar los elementos del arreglo uno a uno.
                if (Nombres[j].compareTo(Nombres[j + 1]) > 0){ //Compara el elemento con índice n con el n + 1,
                                                               //si no está ordenado alfabeticamente, ordena los elementos.
                    aux = Nombres[j];
                    Nombres[j] = Nombres[j + 1];
                    Nombres[j + 1] = aux;
                }
            }
        }

        //Despliegue de resultados.
        System.out.println("\nNombres ordenados:");
        for (i = 0; i < 10; i++){
            System.out.printf("%s - %s\n", i + 1, Nombres[i]);
        }

        System.out.print("\nPresione ENTER para regresar al menú...");
        System.in.read(); //Espera a que se presione ENTER para continuar.
        Menu(); //Llamada al procedimiento Menu.
    }

    //Procedimiento estático que ordena calificaciones con el método burbuja mejorada.
    private static void BurbujaMejorada() throws InterruptedException, IOException{
        int i, j; //Variables para los ciclos de ordenamiento.
        float aux; //Variable auxiliar para el ordenamiento.
        boolean bandera = true; //Variable auxiliar para volver más rápido el ordenamiento.

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            //Ingreso de datos al arreglo.
            System.out.println("Ordenamiento de burbuja mejorado\n");
            System.out.println("Ingresa 10 calificaciones:");
            for (i = 0; i < 10; i++){
                System.out.printf("%s- ", i + 1); Calificaciones[i] = lectura.nextFloat();
                lectura.nextLine(); //Limpia buffer de entrada de datos.
            }
    
            //Ordenamiento de burbuja mejorado ascendente.
            for (i = 0; (i < 9) && (bandera == true); i++){ //Ciclo para repetir el ordenamiento el número de elementos del arreglo a ordenar
                                                            //y si la variable bandera es true.
                bandera = false;
                for (j = 0; j < 10 - i - 1; j++){ //Ciclo para comparar los elementos del arreglo uno a uno.
                    if (Calificaciones[j] < Calificaciones[j + 1]){ //Compara el elemento con índice n con el n + 1,
                                                                    //si no está ordenado alfabeticamente, ordena los elementos.
                        bandera = true; //La variable auxiliar pasa a true.
                        aux = Calificaciones[j];
                        Calificaciones[j] = Calificaciones[j + 1];
                        Calificaciones[j + 1] = aux;
                    }
                }
            }
    
            //Despliegue de resultados.
            System.out.println("\nCalificaciones ordenados:");
            for (i = 0; i < 10; i++){
                System.out.printf("%s - %s\n", i + 1, Calificaciones[i]);
            }
    
            System.out.print("\nPresione ENTER para regresar al menú...");
            System.in.read(); //Espera a que se presione ENTER para continuar.
            Menu(); //Llamada al procedimiento Menu.          
        } catch(InputMismatchException e){
            System.out.println("Error de formato.");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            BurbujaMejorada();
        }
    }

    private static void BurbujaOptimizada() throws InterruptedException, IOException{
        String[] NombresMascotas = new String[10]; //Declara arreglo string para 10 nombres.
        String aux; //Variable auxiliar para el ordenamiento.
        boolean ordenado; //Variable auxiliar para volver más rápido el ordenamiento.
        int i, j; //Variables para los ciclos de ordenamiento.

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Ingreso de datos al arreglo.
        System.out.println("Ordenamiento de burbuja simple\n");
        System.out.println("Ingresa 10 nombres para mascotas:");
        for (i = 0; i < 10; i++){
            System.out.printf("%s- ", i + 1); NombresMascotas[i] = lectura.nextLine();
        }

        //Ordenamiento de burbuja optimizado descendente.
        i = 1;
        //Ciclo para repetir el ordenamiento el número de elementos del arreglo
        //a ordenar y si la variable ordenado es distinta a true, es decir, mientras el arreglo no esté ordenado.
        do{
            i++;
            ordenado = true;
            for (j = 0; j < 9; j++){ //Ciclo para comparar los elementos del arreglo uno a uno.
                if (NombresMascotas[j].compareTo(NombresMascotas[j + 1]) < 0){ //Compara el elemento con índice n con el n + 1,
                                                                               //si no está ordenado alfabeticamente, ordena los elementos.
                    ordenado = false; //La variable auxiliar pasa a false,
                    aux = NombresMascotas[j];
                    NombresMascotas[j] = NombresMascotas[j + 1];
                    NombresMascotas[j + 1] = aux;
                }
            }
        } while(i < 10 && ordenado != true);

        //Despliegue de resultados.
        System.out.println("\nNombres de mascotas ordenados:");
        for (i = 0; i < 10; i++){
            System.out.printf("%s - %s\n", i + 1, NombresMascotas[i]);
        }

        System.out.print("\nPresione ENTER para regresar al menú...");
        System.in.read(); //Espera a que se presione ENTER para continuar.
        Menu(); //Llamada al procedimiento Menu.
    }

    public static void main(String[] args) throws Exception {
        Menu(); //Llamada al procedimiento Menu.
    }
}
