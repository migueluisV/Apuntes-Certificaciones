import java.io.IOException; //Excepción si hay error durante entrada y salida de datos.
import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.
import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida

public class DiasYMeses {
    private int Anios, Dias, Semanas, Meses; //Atributos privados.
    Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.

    //Procedimiento que da comienzo al programa.
    public void Iniciar() throws InterruptedException, IOException{
        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.
        
        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable
        try{
            System.out.printf("Ingresa un número entero para trabajarlo como días: "); Dias = lectura.nextInt();
    
            Calculo(); //Llamada al método que asigna valores a los atributos privados.
        } catch (InputMismatchException e){
            System.out.println("Error de formato.");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            Iniciar(); //Llamada recursiva a Iniciar.
        }
    }

    //Función que calcula valores para los atributos de la clase, relacionados con los años, meses y días transcurridos
    //en n días.
    private void Calculo(){
        Anios = Dias / 365;
        Meses = Dias / 30;
        Semanas = (Dias % 30) / 7;
    }

    //Procedimiento que despliega los atributos de la clase.
    public void Despliegue(){
        System.out.printf("%s días son: %s años, %s meses, %s semanas y %s días.", Dias, Anios, Meses, Semanas, (Dias % 30) % 7);
    }
}
