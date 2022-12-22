import java.io.IOException; //Excepción si hay error durante entrada y salida de datos.
import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.
import java.util.Iterator;
import java.util.Queue; //Clase para trabajar con colas dinámicas.
import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class Cola_Nombres{
    public Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.

    //Método que despliega un menú para realizar acciones con la cola pasada como argumento de parámetro.
    public void Menu(Queue<String> Nombres) throws InterruptedException, IOException{
        int Op;

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        System.out.println("-Cola de nombres-\n");
        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            System.out.printf("Nombres registrados: %s\n", Nombres.size());
            System.out.println("\n-Menú-\n1) Insertar nombre.\n2) Eliminar nombre.\n3) Vaciar cola.\n4) Buscar nombre.\n5) Recorrer cola.\n6) Salir.");
            System.out.print("Selecciona una opción: "); Op = lectura.nextInt();
            lectura.nextLine(); //Limpia buffer de entrada de datos.
    
            //Selectiva switch para la opción ingresada en el menú.
            switch(Op){
                case 1:
                    AgregarNombre(Nombres);
                    break;
                case 2:
                    EliminarNombre(Nombres);
                    break;
                case 3:
                    VaciarCola(Nombres);
                    break;
                case 4:
                    BuscarNombre(Nombres);
                    break;
                case 5:
                    RecorrerNombres(Nombres);
                    break;
                case 6:
                    lectura.close(); //Cierra el objeto Scanner.
                    System.exit(0); //Cierra el programa.
                    break;
                default:
                    System.out.println("Selecciona una opción del menú mostrado.");
                    lectura.nextLine(); //Limpia buffer de entrada de datos.
                    Menu(Nombres); //Llamada recursiva a Menu.
            }
        } catch(InputMismatchException e){
            System.out.println("Error de formato.");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            Menu(Nombres); //Llamada recursiva a Menu.
        }
    }

    //Procedimiento que recorrde y despliega todos los elementos de la cola pasada como argumento de parámetro.
    private void RecorrerNombres(Queue<String> nombres) throws InterruptedException, IOException {
        int i;
        Iterator<String> n = nombres.iterator(); //Declara objeto Iterator tipo string para el método iterator()
                                                 //de la cola pasada como parámetro.
        
        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Si la cola está vacía, lo despliega y llama a Menu.
        if (nombres.size() == 0){
            System.out.print("Pila vacia. Presione ENTER para continuar...");
        } else{
            System.out.println("---Alumnos con sus promedios---\n");
            for(i = 0; i < nombres.size(); i++){ //Desplega los elementos de la cola.
                System.out.printf("%s - %s\n", i + 1, n.next());
            }
        }
        System.out.print("\nPresione ENTER para regresar al menú...");
        System.in.read(); //Espera a que se presione ENTER para continuar.
        Menu(nombres); //Llamada a Menu.
    }

    //Procedimiento que busca y despliega un elemento de la cola pasada como argumento de parámetro.
    private void BuscarNombre(Queue<String> nombres) throws InterruptedException, IOException {
        String nombre; //Cadena que recibe el nombre a buscar.

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Si la cola está vacía, lo despliega y llama a Menu.
        if (nombres.size() == 0){
            System.out.print("Pila vacia. Presione ENTER para continuar...");
        } else{
            System.out.print("Ingresa el nombre a buscar: "); nombre = lectura.nextLine(); //Solicita nombre a buscar.
            if (nombres.contains(nombre) == true) //Verifica si la cola contiene el nombre a buscar y lo despliega.
                System.out.println("Se encontró el nombre.");
            else
                System.out.print("No se encontró el alumno");
            System.out.print("\nPresione ENTER para regresar al menú...");
        }
        System.in.read(); //Espera a que se presione ENTER para continuar.
        Menu(nombres); //Llamada a Menu.
    }

    //Procedimiento que vacía la cola pasada como argumento de parámetro.
    private void VaciarCola(Queue<String> nombres) throws InterruptedException, IOException {
        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Si la cola está vacía, lo despliega y llama a Menu.
        if (nombres.size() == 0){
            System.out.print("Cola vacia. Presione ENTER para continuar...");
        } else{
            nombres.clear(); //Limpia la cola.
            System.out.print("La cola Nombres fue vaciada. Presiona ENTER para regresar al menú...");
        }
        System.in.read(); //Espera a que se presione ENTER para continuar.
        Menu(nombres); //Llamada a Menu.
    }

    //Procedimiento que busca y elimina un elemento de la cola pasada como argumento de parámetro.
    private void EliminarNombre(Queue<String> nombres) throws InterruptedException, IOException {
        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Si la cola está vacía, lo despliega y llama a Menu.
        if (nombres.size() == 0){
            System.out.print("Cola vacia. Presione ENTER para continuar...");
        } else{
            System.out.printf("El nombre %s fue eliminado. Presiona ENTER para regresar al menú...", nombres.poll()); //Elimina el objeto en la cima de la cola.
        }
        System.in.read(); //Espera a que se presione ENTER para continuar.
        Menu(nombres);
    }

    //Procedimiento que agrega un elemento de la cola pasada como argumento de parámetro.
    private void AgregarNombre(Queue<String> nombres) throws InterruptedException, IOException {
        int Op;
        String nombre; //Cadena que recibe el nombre a agregar.

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            System.out.print("Ingresa un nombre: "); nombre = lectura.nextLine();
            
            nombres.add(nombre); //Agrega elemento String a la cola.
            System.out.print("\nIngresado. ¿Desea seguir agregando alumnos? Si[1]: "); Op = lectura.nextInt();
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            
            //Si se desea agregar otro elemento, hace una llamada recursiva a AgregarNombre, sino, llama a Menu.
            if (Op == 1)
                AgregarNombre(nombres);
            else
                Menu(nombres);
        } catch(InputMismatchException e){
            System.out.println("Error de formato.");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            AgregarNombre(nombres); //Llamada recursiva a AgregarNombre.
        }
    }
}