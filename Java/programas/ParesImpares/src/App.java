import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.
import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class App {
    static Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.

    //Procedimiento estático para recibir un número, determinar si es par o impar, y desplegarlo.
    public static void ParImpar(){
        int Num;

        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            System.out.println("Ingresa un número: "); Num = lectura.nextInt();
            lectura.close(); //Cierra el objeto Scanner.

            if ((Num % 2) == 0){ //Determina si el número ingresado es par o impar por medio del operador modulo y lo despliega.
                System.out.printf("%s es par.", Num);
            } else{
                System.out.printf("%s es impar.", Num);
            }
        } catch(InputMismatchException e){
            System.out.println("Error de formato.");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            ParImpar(); //Llamada recursiva a ParImpar.
        }
    }

    public static void main(String[] args) throws Exception {
        ParImpar(); //Llamada al procedimiento que determina si un número es par o impar.
    }
}
