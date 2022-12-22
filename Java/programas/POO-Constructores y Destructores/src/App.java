import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class App {
    public static void main(String[] args) throws Exception {
        Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.
        float Base, Altura;

        //Ingresa datos a variables para un triángulo.
        System.out.println("-Datos del triángulo-\n");
        System.out.printf("Ingresa base del triángulo: "); Base = lectura.nextFloat();
        System.out.printf("Ingresa altura del triángulo: "); Altura = lectura.nextFloat();

        Triangulo t = new Triangulo(Base, Altura); //Declara objeto Triangulo pasándole las variables Base y Altura como parámetros.
        t.Area(); t.Perimetro();
        t.Resultado(); //Llamada a los métodos de cálculo de área y perímetro y despliegue de resultados.

        System.out.print("Presiona ENTER para continuar...");
        System.in.read(); //Espera a que se presione ENTER para continuar.
        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Ingresa datos a variables para un rectángulo.
        System.out.println("-Datos del rectángulo-\n");
        System.out.printf("Ingresa base del recángulo: "); Base = lectura.nextFloat();
        System.out.printf("Ingresa altura del recángulo: "); Altura = lectura.nextFloat();
        lectura.close(); //Cierra el objeto Scanner.

        Rectangulo r = new Rectangulo(Base, Altura); //Declara objeto Rectangulo pasándole las variables Base y Altura como parámetro.
        r.Area(); r.Perimetro();
        r.Resultado(); //Llamada a los métodos de cálculos de área y perímetro y despliegue de resultados.
    }
}
