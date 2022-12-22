import java.io.IOException; //Excepción si hay error durante entrada y salida de datos.
import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.
import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class App {
    private static Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.

    //Procedimiento estático que recibe valores para calcular volumenes de figuras.
    static void ValoresVolumen(double r, double a, double l) throws InterruptedException, IOException {
        double radio = 0, altura = 0, lado = 0;

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        System.out.println("-Valores para calcular volumen de figuras-\n");
        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            System.out.printf("Ingresa un valor para radio: "); radio = lectura.nextDouble();
            System.out.printf("Ingresa un valor para altura: "); altura = lectura.nextDouble();
            System.out.printf("Ingresa un valor para un lado: "); lado = lectura.nextDouble();

            new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

             //Declara e inicializa los distintos objetos de las distintas clases y llama a los métodos que imprime información.
            Cono cono = new Cono(radio, altura);
            cono.DesplegarVolumen();

                Esfera esfera = new Esfera(radio);
            esfera.DesplegarVolumen();

            Cilindro cilindro = new Cilindro(radio, altura);
            cilindro.DesplegarVolumen();

            Cubo cubo = new Cubo(lado);
            cubo.DesplegarVolumen();
        } catch (InputMismatchException e){
            System.out.println("Error de formato.");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            ValoresVolumen(radio, altura, lado); //Llamada recursiva a ValoresVolumen.
        }
    }
    public static void main(String[] args) throws Exception {
        ValoresVolumen(0, 0, 0); //Llamada al procedimiento que recibe valores para calcular volumenes.
    }
}