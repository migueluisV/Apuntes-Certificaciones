import java.io.IOException; //Excepción si hay error durante entrada y salida de datos.
import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.
import java.util.Stack; //Clase para trabajar con pilas dinámicas.
import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class Pila_Alumnos {
    public Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.
    
    //Procedimiento que despliega un menú con distintas opciones para realizar con una pila dinámica.
    public void Menu(Stack<Double> Prom, Stack<String> Alum) throws InterruptedException, IOException{
        int Op;

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        System.out.println("-Pila de alumnos con sus promedios-\n");
        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            System.out.printf("Alumnos registrados: %s\n", Alum.size());
            System.out.println("\n-Menú-\n1) Insertar alumno.\n2) Eliminar alumno.\n3) Vaciar pila.\n4) Buscar alumno.\n5) Recorrer pila.\n6) Salir.");
            System.out.print("Selecciona una opción: "); Op = lectura.nextInt();
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            //Selectiva switch para determinar qué método será llamado a partir del menú.
            switch(Op){
                case 1:
                    AgregarAlumno(Prom, Alum); //Llamada al procedimiento que agrega elementos a las pilas Prom y Alum.
                    break;
                case 2:
                    EliminarAlumno(Prom, Alum); //Llamada al procedimiento que elimina elementos a las pilas Prom y Alum.
                    break;
                case 3:
                    VaciarPila(Prom, Alum); //Llamada al procedimiento que vacía las pilas Prom y Alum.
                    break;
                case 4:
                    BuscarAlumno(Prom, Alum); //Llamada al procedimiento que busca elementos a las pilas Prom y Alum.
                    break;
                case 5:
                    RecorrerAlumnos(Prom, Alum); //Llamada al procedimiento que recorre los elementos a las pilas Prom y Alum.
                    break;
                case 6:
                    lectura.close(); //Cierra el objeto Scanner.
                    System.exit(0); //Cierra el programa.
                    break;
                default:
                    System.out.println("Selecciona una opción del menú mostrado.");
                    lectura.nextLine(); //Limpia buffer de entrada de datos.
                    Menu(Prom, Alum); //Llamada recursiva a Menu.
            }
        } catch(InputMismatchException e){
            System.out.println("Error de formato.");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            Menu(Prom, Alum); //Llamada recursiva a Menu.
        }
    }

    //Procedimiento que agrega un elemento a una pila dinámica.
    public void AgregarAlumno(Stack<Double> Prom, Stack<String> Alum) throws InterruptedException, IOException{
        int Op;
        String nombre;
        double promedio;

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.
        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            System.out.print("Ingresa un nombre: "); nombre = lectura.nextLine();
            System.out.print("Ingresa un promedio: "); promedio = lectura.nextDouble();
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            
            Alum.push(nombre); //Agrega elemento String a la pila.
            Prom.addElement(promedio); //Agrega un objeto a la pila.
            System.out.print("\nIngresado. ¿Desea seguir agregando alumnos? Si[1]: "); Op = lectura.nextInt();
            lectura.nextLine(); //Limpia buffer de entrada de datos.

            //Si se decidió agregar otro elemento.
            if (Op == 1)
                AgregarAlumno(Prom, Alum); //Llamada recursiva a AgregarAlumno.
            else
                Menu(Prom, Alum); //Llamada a Menu.
        } catch(InputMismatchException e){
            System.out.println("Error de formato.");
            lectura.nextLine(); //Limpia buffer de entrada de datos.
            AgregarAlumno(Prom, Alum); //Llamada recursiva a AgregarAlumno.
        }
    }

    //Procedimiento que elimina un elemento a una pila dinámica.
    public void EliminarAlumno(Stack<Double> Prom, Stack<String> Alum) throws InterruptedException, IOException{
        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Si el tamaño de la pila es 0, despliega mensaje que está vacía.
        if (Alum.size() == 0){
            System.out.print("Pila vacia. Presione ENTER para continuar...");
            System.in.read(); //Espera a que se presione ENTER para continuar.
            Menu(Prom, Alum); //Llamada a Menu.
        } else{
            //Despliega mensaje de qué elementos de la pila serán borrados (tope).
            System.out.printf("El alumno %s con promedio %s fue elimniado. Presiona ENTER para regresar al menú...", Alum.peek(), Prom.peek());
            Alum.pop(); //Elimina el objeto en la cima de la pila.
            Prom.pop(); //Elimina el objeto en la cima de la pila.
            System.in.read(); //Espera a que se presione ENTER para continuar.
            Menu(Prom, Alum); //Llamada a Menu.
        }
    }

    //Procedimiento que borra todos los elementos de una pila dinámica.
    public void VaciarPila(Stack<Double> Prom, Stack<String> Alum) throws InterruptedException, IOException{
        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Si el tamaño de la pila es 0, despliega mensaje que está vacía.
        if (Alum.size() == 0){
            System.out.print("Pila vacia. Presione ENTER para continuar...");
            System.in.read(); //Espera a que se presione ENTER para continuar.
            Menu(Prom, Alum); //Llamada a Menu.
        } else{
            Alum.clear(); //Limpia la pila.
            Prom.clear(); //Limpia la pila.
            //Despliega mensaje de que la pila fue vaciada.
            System.out.print("Las pilas Alumnos y Promedios fueron vaciadas. Presiona ENTER para regresar al menú...");
            System.in.read(); //Espera a que se presione ENTER para continuar.
            Menu(Prom, Alum); //Llamada a Menu.
        }
    }

    //Procedimiento que busca un elemento de una pila dinámica.
    public void BuscarAlumno(Stack<Double> Prom, Stack<String> Alum) throws InterruptedException, IOException{
        String nombre;

        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Si el tamaño de la pila es 0, despliega mensaje que está vacía.
        if (Alum.size() == 0){
            System.out.print("Pila vacia. Presione ENTER para continuar...");
            System.in.read(); //Espera a que se presione ENTER para continuar.
            Menu(Prom, Alum); //Llamada a Menu.
        } else{
            System.out.print("Ingresa el nombre a buscar: "); nombre = lectura.nextLine(); //Recibe nombre a buscar en la pila.
            if (Alum.contains(nombre) == true){ //Busca el nombre en la pila, regresa true si lo encontró.
                //Despliega un mensaje diciendo si encontró el nombre y en qué posición lo halló.
                System.out.printf("Se encontró el alumno, tiene promedio de %s.", Prom.elementAt(Alum.indexOf(nombre)));
                System.out.print("\nPresione ENTER para regresar al menú...");
                System.in.read(); //Espera a que se presione ENTER para continuar.
                Menu(Prom, Alum); //Llamada a Menu.
            } else
                System.out.print("No se encontró el alumno. Presione ENTER para regresar al menú...");
            System.in.read(); //Espera a que se presione ENTER para continuar.
            Menu(Prom, Alum); //Llamada a Menu.
        }
    }

    //Procedimiento que recorre los elementos de una pila dinámica.
    public void RecorrerAlumnos(Stack<Double> Prom, Stack<String> Alum) throws InterruptedException, IOException{
        int i;
        
        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

        //Si el tamaño de la pila es 0, despliega mensaje que está vacía.
        if (Alum.size() == 0){
            System.out.print("Pila vacia. Presione ENTER para continuar...");
            System.in.read(); //Espera a que se presione ENTER para continuar.
            Menu(Prom, Alum); //Llamada a Menu.
        } else{
            System.out.println("---Alumnos con sus promedios---\n");
            for(i = (Alum.size() - 1); i >= 0; i--){ //Despliega todos los elementos de las dos pilas.
                System.out.printf("%s - %s\n", Alum.elementAt(i), Prom.elementAt(i));
            }
        }
        System.out.print("\nPresione ENTER para regresar al menú...");
        System.in.read(); //Espera a que se presione ENTER para continuar.
        Menu(Prom, Alum); //Llamada a Menu.
    }
}