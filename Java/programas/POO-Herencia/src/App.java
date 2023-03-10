import java.io.IOException; //Excepción si hay error durante entrada y salida de datos.
import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.
import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class App {
    static Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.

    static void IngresoDatos(String uni, String dir, String tel, String nom, String carrera, int semestre, int nc) throws InterruptedException, IOException{
        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            //Ingresa valores a variables tipo entero.
            System.out.printf("Ingresa el número de control del alumno: "); nc = lectura.nextInt();
            System.out.printf("Ingresa el semestre del alumno: "); semestre = lectura.nextByte();          
            lectura.close(); //Cierra el objeto Scanner.

            new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

            //Declara objeto Alumno y se le pasan como parámetros los parámetros del método actual.
            Alumno al = new Alumno(nom, carrera, nc, semestre, uni, dir, tel);
            al.DesplegarAlumno(); //Llamada al método que despliega la información del alumno.
        } catch(InputMismatchException e){
            System.out.println("Error de formato");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            IngresoDatos(uni, dir, tel, nom, carrera, semestre, nc); //Llamada recursiva a IngresoDatos.
        }
    }

    public static void main(String[] args) throws Exception {
        String uni, dir, tel, nom, carrera;

        //Ingreso de datos a variables.
        System.out.println("-Datos de la universidad-\n");
        System.out.printf("Ingresa el nombre de la universidad: "); uni = lectura.nextLine();
        System.out.printf("Ingresa la dirección de la universidad: "); dir = lectura.nextLine();
        System.out.printf("Ingresa el número de teléfono de la universidad: "); tel = lectura.nextLine();
        System.out.println("\n-Datos del alumno-\n");
        System.out.printf("Ingresa el nombre del alumno: "); nom = lectura.nextLine();
        System.out.printf("Ingresa la carrera del alumno: "); carrera = lectura.nextLine();
        IngresoDatos(uni, dir, tel, nom, carrera, 0, 0); //Llamada a procedimiento para ingresar datos tipo entero a variables restantes.
    }
}
