#include <stack> //Cabecera para trabajar con pilas dinámicas.
#include <iostream> //Cabecera para entrada y salida de datos.
#include "Pila_Alumnos.h" //Cabecera de la clase Pila_Alumnos.

//Procedimiento que despliega menú de opciones para trabajar con las pilas.
void Pila_Alumnos::Menu(std::stack<double> Prom, std::stack<std::string> Alum) {
    int Op; //Variable que recibe la opción escogida por el usuario.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    std::cout << "-Pila de alumnos y sus promedios-\n\n";

    //Despliega el menú de opciones.
    printf("Nombres registrados: %d.\n", Alum.size());
    std::cout << "\n-Menú-\n1) Insertar alumno.\n2) Eliminar alumno.\n3) Vaciar pila.\n4) Buscar alumno.\n5) Recorrer pila.\n6) Salir.\n";
    //Ingreso de valor a variable.
    std::cout << "Opción: "; std::cin >> Op;

    if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
    {
        std::cout << "Error de formato. ";
        system("pause"); //Pausa el flujo del programa.
        std::cin.clear(); //Limpia el buffer de cin.
        //Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        Menu(Prom, Alum); //Llamada recursiva a Menu.
    }
    else
    {
        //Selectiva switch para saltar al método escogido por el usuario.
        switch (Op) {
            case 1:
                AgregarAlumnos(Prom, Alum);
                break;
            case 2:
                EliminarAlumno(Prom, Alum);
                break;
            case 3:
                VaciarPila(Prom, Alum);
                break;
            case 4:
                BuscarAlumno(Prom, Alum);
                break;
            case 5:
                RecorrerAlumno(Prom, Alum);
                break;
            case 6:
                exit(-1); //Salida del programa
                break;
            default:
                std::cout << "Selecciona una opción del menú mostrado.";
                system("pause"); //Pausa el flujo del programa.
                Menu(Prom, Alum); //Llamada recursiva a Menu.
        }
    }
}

//Procedimiento que ingresa valores al tope de la pila.
void Pila_Alumnos::AgregarAlumnos(std::stack<double> Prom, std::stack<std::string> Alum) {
    std::string nombre; //Variable que recibe nombre para la pila string.
    double promedio; //Variable que recibe un promedio para la pila double.
    int Op; //Variable que recibe la opción escogida por el usuario.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    std::cout << "--Inserción de alumnos con sus promedios--\n\n";
    //Ingreso de valores a variables.
    std::cout << "Ingresa un nombre: "; std::cin >> nombre;
    std::cout << "Ingresa un promedio: "; std::cin >> promedio;

    if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
    {
        std::cout << "Error de formato. ";
        system("pause"); //Pausa el flujo del programa.
        std::cin.clear(); //Limpia el buffer de cin.
        //Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        Menu(Prom, Alum); //Llamada a Menu.
    }
    else
    {
        Alum.push(nombre); //Agrega elemento a la pila.
        Prom.push(promedio); //Agrega elemento a la pila.

        //Ingreso de valor a variable.
        std::cout << "\nIngresado. ¿Desea seguir agregando alumnos? Si[1]: "; std::cin >> Op;
        if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
        {
            std::cout << "Error de formato. ";
            system("pause"); //Pausa el flujo del programa.
            std::cin.clear(); //Limpia el buffer de cin.
            //Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            Menu(Prom, Alum); //Llamada a Menu.
        }
        else
        {
            //Según la opción escogida, se salta a un método de la clase.
            if (Op == 1)
                AgregarAlumnos(Prom, Alum);
            else
                Menu(Prom, Alum);
        }
    }
}

//Procedimiento que elimina el elemento tope de la pila.
void Pila_Alumnos::EliminarAlumno(std::stack<double> Prom, std::stack<std::string> Alum) {
    int Op; //Variable que recibe la opción escogida por el usuario.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    //Si la pila está vacía...
    if (Alum.empty()) {
        std::cout << "Pila vacía. ";
        system("pause"); //Pausa el flujo del programa.
        Menu(Prom, Alum); //Llamada a Menu.
    }
    else {
        std::cout << "--Eliminar un alumno--\n\n";
        //Despliega mensaje con los elementos a eliminar.
        std::cout << "El alumno " << Alum.top() << " con promedio " << Prom.top() << " fue eliminado. ";
        system("pause"); //Pausa el flujo del programa.
        Alum.pop(); //Elimina el último elemento ingresado.
        Prom.pop(); //Elimina el último elemento ingresado.
        //Ingreso de valor a variable.
        std::cout << "¿Desea eliminar otro ? Si[1] : "; std::cin >> Op;
        if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
        {
            std::cout << "Error de formato. ";
            system("pause"); //Pausa el flujo del programa.
            std::cin.clear(); //Limpia el buffer de cin.
            //Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            Menu(Prom, Alum); //Llamada a Menu.
        }
        else
        {
            //Según la opción escogida, se salta a un método de la clase.
            if (Op == 1)
                EliminarAlumno(Prom, Alum);
            else
                Menu(Prom, Alum);
        }
    }
}

//Procedimiento que vacía los elementos de las pilas.
void Pila_Alumnos::VaciarPila(std::stack<double> Prom, std::stack<std::string> Alum) {
    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    //Si la pila está vacía...
    if (Alum.empty())
        std::cout << "Pila vacía. ";
    else {
        //Mientras la pila no esté vacía, se van eliminando los elementos tope de la pila.
        while (!Alum.empty()) {
            Alum.pop(); //Elimina el último elemento ingresado.
            Prom.pop(); //Elimina el último elemento ingresado.
        }
        std::cout << "Pila vaciada. ";
    }

    system("pause"); //Pausa el flujo del programa.
    Menu(Prom, Alum); //Llamada a Menu.
}

//Procedimiento que busca el nombre de un alumno en la pila.
void Pila_Alumnos::BuscarAlumno(std::stack<double> Prom, std::stack<std::string> Alum) {
    std::stack<double> t_prom = Prom;
    std::stack<std::string> t_alum = Alum; //Pilas dinámicas adicionales para buscar.
    std::string alum; //Variable auxiliar para buscar el nombre.
    double prom; //Variable auxiliar que recibe el promedio del nombre encontrado.
    bool encontrado = false; //Variable auxiliar para la búsqueda del nombre.
    int Op; //Variable que recibe la opción escogida por el usuario.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    //Si la pila está vacía...
    if (t_alum.empty()) {
        std::cout << "Pila vacía. ";
        system("pause"); //Pausa el flujo del programa.
        Menu(Prom, Alum); //Llamada a Menu.
    }
    else {
        std::cout << "--Búsqueda de alumno--\n\n";
        //Ingreso de valor a variable.
        std::cout << "Ingresa el alumno a buscar: "; std::cin >> alum;
        //Mientras la pila no esté vacía...
        while (!t_alum.empty()) {
            //Busca al alumno en la pila trabajando ambas pilas de alumnos y promedios.
            //Si encuentra al alumno, almacena también el promedio de una variable adicional.
            if (t_alum.top().compare(alum) == 0) {
                encontrado = true;
                prom = t_prom.top();
            }
            t_alum.pop(); //Elimina el último elemento ingresado.
            t_prom.pop(); //Elimina el último elemento ingresado.
        }

        //Si encontró un nombre, lo despliega
        if (encontrado)
            std::cout << "Se encontró al alumno. Tiene promedio de " << prom << ". ";
        else
            std::cout << "No se encontró el alumno. ";

        std::cout << "¿Desea buscar otro? Si[1]: "; std::cin >> Op;
        if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
        {
            std::cout << "Error de formato. ";
            system("pause"); //Pausa el flujo del programa.
            std::cin.clear(); //Limpia el buffer de cin.
            //Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            Menu(Prom, Alum); //Llamada a Menu.
        }
        else
        {
            //Según la opción escogida, se salta a un método de la clase.
            if (Op == 1)
                BuscarAlumno(Prom, Alum);
            else
                Menu(Prom, Alum);
        }

    }
}

//Procedimiento que recorre y despliega los elementos de la pila.
void Pila_Alumnos::RecorrerAlumno(std::stack<double> Prom, std::stack<std::string> Alum) {
    std::stack<double> t_prom = Prom;
    std::stack<std::string> t_alum = Alum; //Pilas dinámicas adicionales para buscar.
    int i = 1; //Variable para las iteraciones del ciclo.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    //Si la pila está vacía, despliega mensaje.
    if (t_alum.empty())
        std::cout << "Pila vacía. ";
    else {
        std::cout << "--Pilas de alumnos con sus promedios--\n\n";
        //Mientras el ciclo no esté vacío, despliega los elementos de las pilas.
        while (!t_alum.empty()) {
            std::cout << i << " - " << t_alum.top() << " con promedio " << t_prom.top() << ".\n";
            t_alum.pop();
            t_prom.pop();
            i++; //Incrementa contador.
        }

        std::cout << "\n";
    }

    system("pause"); //Pausa el flujo del programa.
    Menu(Prom, Alum); //Llamada a Menu.
}