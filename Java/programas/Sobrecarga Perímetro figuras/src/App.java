import java.io.IOException; //Excepción si hay error durante entrada y salida de datos.
import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.
import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class App {
    static Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.

    //Procedimiento estático que ingresa valores para calcular perímetros de triángulos.
    static void ValoresPerimetro() throws InterruptedException, IOException{
        float l, altura, Base, l1, l2, l3;

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        System.out.println("-Ingresa valores-\n");
        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            //Ingreso de valores a variables.
            System.out.print("Ingrese un valor para calcular el perímetro de un triángulo equilátero: "); l = lectura.nextFloat();
            lectura.nextLine();
            System.out.print("Ingrese un valor para de base calcular el perímetro de un triángulo isóseles: "); Base = lectura.nextFloat();
            lectura.nextLine();
            System.out.print("Ingrese un valor para de altura calcular el perímetro de un triángulo isóseles: "); altura = lectura.nextFloat();
            lectura.nextLine();
            System.out.print("Ingrese un valor para calcular el perímetro de un triángulo escaleno: "); l1 = lectura.nextFloat();
            lectura.nextLine();
            System.out.print("Ingrese un valor para calcular el perímetro de un triángulo escaleno: "); l2 = lectura.nextFloat();
            lectura.nextLine();
            System.out.print("Ingrese un valor para calcular el perímetro de un triángulo escaleno: "); l3 = lectura.nextFloat();
            lectura.nextLine();
            lectura.close();//Cierra el objeto Scanner.

            //Declara objeto Triangulo, llama a su método sobrecargado para calcular perímetros y despliega resultados.
            Triangulo tri = new Triangulo();
            tri.Perimetro(l);
            tri.Perimetro(altura, Base);
            tri.Perimetro(l1, l2, l3);
            tri.Resultados();
        } catch(InputMismatchException e){
            System.out.println("Error de formato.");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            ValoresPerimetro(); //Llamada recursiva a ValoresPerimetro.
        }
    }

    public static void main(String[] args) throws Exception {
        ValoresPerimetro(); //Llamada a procedimiento para calcular perímetros de triángulos.
    }
}
