import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.
import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class App {
    static Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.

    //Procedimiento estático que recibe un valor entero para edad y despliega sus componentes.
    static void IngresoEdad(){
        int Edad, Meses, Dias;

        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            System.out.printf("Ingresa una edad: "); Edad = lectura.nextInt();
            lectura.close(); //Cierra el objeto Scanner.
    
             //Calcula componentes de la edad.
            Dias = Edad * 365;
            Meses = Edad * 12;
    
            //Despliega componentes.
            System.out.println("Has vivido " + Edad + " años, o " + Meses + " meses, o " + Dias + " días.");
        } catch (InputMismatchException e){
            System.out.println("Error de formato.");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            IngresoEdad(); //Llamada recursiva a IngresoEdad.
        }
    }

    public static void main(String[] args) throws Exception {
        IngresoEdad(); //Llamada al procedimiento que da comienzo al programa.
    }
}