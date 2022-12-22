import java.io.IOException; //Excepción si hay error durante entrada y salida de datos.
import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.
import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class App {
    static Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.

    //Procedimiento estático que despliega un menú con opciones para dibujar figuras geométricas.
    static void Menu() throws InterruptedException, IOException, InputMismatchException{
        Figuras figura = new Figuras(); //Declara objeto Figuras.
        byte Op;

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            //Despliega menú.
            System.out.println("Selecciona una opción del menú:\n");
            System.out.println("1) Dibujar triángulo.\n2) Dibujar rectángulo.\n3) Dibujar cuadrado.\n4) Salir.");
            System.out.printf("Opción: "); Op = lectura.nextByte();
            lectura.nextLine(); //Limpia buffer de entrada de datos.

            //Selectiva switch para llamar a método de Figuras.
            switch(Op){
                case 1:
                    figura.DibujarTriangulo();
                    Menu();
                    break;
                case 2:
                    figura.DibujarRectangulo();
                    Menu();
                    break;
                case 3:
                    figura.DibujarCuadrado();
                    Menu();
                    break;
                case 4:
                    lectura.close(); //Cierra el objeto Scanner.
                    System.exit(0); //Salida del programa.
                break;
                default:
                    System.out.print("Ingresa un valor del menú proporcionado. Presiona ENTER para continuar.");
                    System.in.read(); //Espera a que se presione ENTER para continuar.
                    Menu(); //Llamada recursiva a Menu.
            }
        } catch(InputMismatchException e){
            System.out.print("Error de formato.\n");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            Menu(); //Llamada recursiva a Menu.
        }
    }

    public static void main(String[] args) throws Exception {
        Menu(); //Llamada al procedimiento para desplegar menú de opciones.
    }
}
