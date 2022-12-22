import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class App {
    public static void main(String[] args) throws Exception {
        Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.
        String nombre;

        //Las siguientes líneas de código piden que se ingrese un nombre para ciertos tipos de animales,
        //entre ellos, un mamífero, un ave, un pez y un reptil, se declaran objetos de dichos animales pasándoles
        //el nombre ingresado como parámetro y se llama a su método Desplazarse.
        System.out.println("-Nombres para animales-\n");
        System.out.printf("Ingresa el nombre para un mamifero: "); nombre = lectura.nextLine();
        Mamifero m = new Mamifero(nombre);
        m.Desplazarse();
        System.out.println("\nPresiona ENTER para continuar...");
        System.in.read(); //Espera a que se presione ENTER para continuar.

        lectura.nextLine(); //Limpia buffer de entrada de datos.

        System.out.println("-Nombres para animales-\n");
        System.out.printf("Ingresa el nombre para un ave: "); nombre = lectura.nextLine();
        Ave a = new Ave(nombre);
        a.Desplazarse();
        System.out.println("\nPresiona ENTER para continuar...");
        System.in.read(); //Espera a que se presione ENTER para continuar.

        lectura.nextLine(); //Limpia buffer de entrada de datos.

        System.out.println("-Nombres para animales-\n");
        System.out.printf("Ingresa el nombre para un pez: "); nombre = lectura.nextLine();
        Pez p = new Pez(nombre);
        p.Desplazarse();
        System.out.println("\nPresiona ENTER para continuar...");
        System.in.read(); //Espera a que se presione ENTER para continuar.

        lectura.nextLine(); //Limpia buffer de entrada de datos.

        System.out.println("-Nombres para animales-\n");
        System.out.printf("Ingresa el nombre para un reptil: "); nombre = lectura.nextLine();
        Reptil r = new Reptil(nombre);
        r.Desplazarse();

        lectura.close(); //Cierra el objeto Scanner.
    }
}
