#include "Cola_Nombres.h" //Cabecera de clase Cola_Nombres.
#include <queue> //Cabecera para trabajar con colas dinámicas Queue.
#include <iostream> //Cabecera para entrada y salida de datos.

//Procedimiento que despliega un menú de opciones para manipular la cola recibida como parámetro.
void Cola_Nombres::Menu(std::queue<std::string> Nombres) {
	int Op; //Variable que recibe la opción escogida por el usuario.

	system("cls"); //Limpia la terminal.
	std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    //Despliega el menú de opciones.
	std::cout << "-Cola de nombres-\n\n";
	printf("Nombres registrados: %d\n", Nombres.size());
	std::cout << "\n-Menú-\n1) Insertar nombre.\n2) Eliminar nombre.\n3) Vaciar cola.\n4) Buscar nombre.\n5) Recorrer cola.\n6) Salir.\n";
	//Ingreso de valor a variable.
    std::cout << "Opción: "; std::cin >> Op;

    if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
    {
        std::cout << "Error de formato. ";
        system("pause"); //Pausa el flujo del programa.
        std::cin.clear(); //Limpia el buffer de cin.
        //Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        Menu(Nombres); //Llamada recursiva a Menu.
    }
    else
    {
        //Selectiva switch para saltar al método escogido por el usuario.
        switch (Op) {
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
            exit(-1); //Salida del programa
            break;
        default:
            std::cout << "Selecciona una opción del menú mostrado.";
            system("pause"); //Pausa el flujo del programa.
            Menu(Nombres); //Llamada recursiva a Menu.
        }
    }
}

//Procedimiento que recorre y despliega los elementos de una cola pasada por parámetro.
void Cola_Nombres::RecorrerNombres(std::queue<std::string> Nombres) {
    int i = 1; //Variable para la iteración de un ciclo.
    std::queue<std::string> temp = Nombres; //Cola temporal para recorrer la cola.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    //Si la cola está vacía, despliega mensaje.
    if (temp.size() == 0) {
        std::cout << "Cola vacía. ";
    } else {
        std::cout << "--Alumnos con sus promedios--\n\n";
        while (!temp.empty()) { //Mientras la cola no esté vacía...
            std::cout << i << " - " << temp.front() << ".\n"; //Despliega el elemento hasta enfrente de la cola.
            temp.pop(); //Elimina el elemento hasta enfrente de la cola y pasa al siguiente.
            i++; //Incrementa contador.
        }
    }

    system("pause"); //Pausa el flujo del programa.
    Menu(Nombres); //Llamada a Menu.
}

//Procedimiento que busca un nombre en la cola pasada por parámetro.
void Cola_Nombres::BuscarNombre(std::queue<std::string> Nombres) {
    std::string nombre; //Variable string que recibe el nombre a buscar.
    int Op; //Variable que recibe opción seleccionada por el usuario.
    bool encontrado = false; //Variable auxiliar para la búsqueda del elemento.
    std::queue<std::string> temp = Nombres; //Cola temporal para recorrer la cola.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    //Si la cola está vacía, despliega mensaje.
    if (Nombres.size() == 0) {
        std::cout << "Cola vacía. ";
    }
    else {
        std::cout << "Ingresa el nombre a buscar: "; std::cin >> nombre;
        while (!temp.empty()) { //Mientras la cola no esté vacía...
            if (temp.front().compare(nombre) == 0) { //Compara el elemento de hasta enfrente de la cola con el nombre a buscar.
                encontrado = true;
            }
            temp.pop(); //Elimina el elemento de hasta enfrente de la cola y pasa al siguiente.
        }

        //Si encontró o no encontró el elemento, despliega mensaje.
        if (encontrado)
            std::cout << "\nSe encontró el nombre. ";
        else
            std::cout << "\nNo se encontró el nombre. ";


        std::cout << "¿Desea buscar otro nombre? Si[1]: "; std::cin >> Op;
        if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
        {
            std::cout << "Error de formato. ";
            system("pause"); //Pausa el flujo del programa.
            std::cin.clear(); //Limpia el buffer de cin.
            //Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            Menu(Nombres); //Llamada a Menu.
        }
        else {
            //Dependiendo de la opción escogida por el usuario, se llama a método de la clase.
            if (Op == 1)
                BuscarNombre(Nombres);
            else
                Menu(Nombres);
        }
    }

    system("pause"); //Pausa el flujo del programa.
    Menu(Nombres); //Llamada a Menu.
}

//Procedimiento que elimina todos los elementos de la cola pasada por parámetro.
void Cola_Nombres::VaciarCola(std::queue<std::string> Nombres) {
    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    //Si la cola está vacía, despliega mensaje.
    if (Nombres.size() == 0) {
        std::cout << "Cola vacía. ";
    }
    else {
        //Mientras cola cola no esté vacía, se elimina el elemento al frente de la cola.
        while (!Nombres.empty()) {
            Nombres.pop();
        }

        std::cout << "Cola vaciada. ";
    }

    system("pause"); //Pausa el flujo del programa.
    Menu(Nombres); //Llamada a Menu.
}

//Procedimiento que elimina el elemento al frente de la cola pasada por parámetro.
void Cola_Nombres::EliminarNombre(std::queue<std::string> Nombres) {
    int Op; //Variable que recibe opción seleccionada por el usuario.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    //Si la cola está vacía, despliega mensaje.
    if (Nombres.size() == 0) {
        std::cout << "Cola vacía. ";
    }
    else {
        std::cout << "Se va a eliminar el primer nombre de la cola. ";
        system("pause"); //Pausa el flujo del programa.
        Nombres.pop(); //Elimina el elemento hasta enfrente de la cola.

        std::cout << "¿Desea buscar otro nombre? Si[1]: "; std::cin >> Op;
        if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
        {
            std::cout << "Error de formato. ";
            system("pause"); //Pausa el flujo del programa.
            std::cin.clear(); //Limpia el buffer de cin.
            //Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            Menu(Nombres); //Llamada a Menu.
        }
        else {
            //Dependiendo de la opción escogida por el usuario, se llama a método de la clase.
            if (Op == 1)
                EliminarNombre(Nombres);
            else
                Menu(Nombres);
        }
    }

    system("pause"); //Pausa el flujo del programa.
    Menu(Nombres); //Llamada a Menu.
}

//Procedimiento que agrega elementos a la cola pasada por parámetro.
void Cola_Nombres::AgregarNombre(std::queue<std::string> Nombres) {
    int Op; //Variable que recibe opción seleccionada por el usuario.
    std::string nombre; //Variable que recibe el nombre a ingresar a la cola.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.
    //Ingreso de valor a variable.
    std::cout << "Ingresa un nombre: "; std::cin >> nombre;
    Nombres.push(nombre); //Agrega elemento a la cola.
    std::cout << "Ingreado. ¿Desea seguir agregando alumnos? Si[1]: "; std::cin >> Op;

    if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
    {
        std::cout << "Error de formato. ";
        system("pause"); //Pausa el flujo del programa.
        std::cin.clear(); //Limpia el buffer de cin.
        //Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        Menu(Nombres); //Llamada a Menu.
    }
    else
    {
        //Dependiendo de la opción escogida por el usuario, se llama a método de la clase.
        if (Op == 1)
            AgregarNombre(Nombres);
        else
            Menu(Nombres);
    }
}