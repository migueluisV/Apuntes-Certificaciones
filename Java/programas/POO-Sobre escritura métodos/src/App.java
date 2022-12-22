import java.io.IOException; //Excepción si hay error durante entrada y salida de datos.
import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.
import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class App {
    private static Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.

    //Procedimiento estático que ingresa valores de radio y altura para calcular un área.
    public static void ValoresArea(double r, double a) throws InterruptedException, IOException{
        double radio = 0, altura = 0;

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        System.out.println("-Valores para calcular áreas de figuras-\n");
        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            //Ingreso de datos a variables.
            System.out.printf("Ingresa un valor para radio: "); radio = lectura.nextDouble();
            System.out.printf("Ingresa un valor para altura: "); altura = lectura.nextDouble();
        } catch (InputMismatchException e){
            System.out.println("Error de formato.");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            ValoresArea(radio, altura); //Llamada recursiva a ValoresArea.
        }

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Las siguientes líneas de código indican que se declaran objetos de las clases Circulo, Esfera y Cilindro, a todas
        //ellas se les pasa como parámetro el radio y la altura (depende la figura), y se llama al método ImprimirArea.
        Circulo circulo = new Circulo(radio);
        circulo.ImprimirArea();

        Esfera esfera = new Esfera(radio);
        esfera.ImprimirArea();

        Cilindro cilindro = new Cilindro(radio, altura);
        cilindro.ImprimirArea();
    }

    public static void main(String[] args) throws Exception {
        ValoresArea(0, 0); //Llamada a método que ingresa valores para calcular un área.
    }
}
