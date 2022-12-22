import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.
import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class App {
    static Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.

    //Procedimiento estático que recibe la edad e imprime la cantidad de días vividos.
    static void IngresoEdad(){
        int Edad;

        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            System.out.printf("Registra una edad: "); Edad = lectura.nextInt();
            lectura.close(); //Cierra el objeto Scanner.
            Edad *= 365; //Calcula días vividos a partir de la edad.

            System.out.println("Has vivido " + Edad + " días"); //Despliega resultado.
        } catch (InputMismatchException e){
            System.out.println("Error de formato.");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            IngresoEdad(); //Llamada recursiva a IngresoEdad.
        }
    }

    public static void main(String[] args) throws Exception {
        IngresoEdad(); //Llamada a IngresoEdad.
    }
}