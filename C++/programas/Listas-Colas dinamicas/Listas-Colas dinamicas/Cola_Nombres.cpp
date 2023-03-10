#include "Cola_Nombres.h" //Cabecera de clase Cola_Nombres.
#include <queue> //Cabecera para trabajar con colas din?micas Queue.
#include <iostream> //Cabecera para entrada y salida de datos.

//Procedimiento que despliega un men? de opciones para manipular la cola recibida como par?metro.
void Cola_Nombres::Menu(std::queue<std::string> Nombres) {
	int Op; //Variable que recibe la opci?n escogida por el usuario.

	system("cls"); //Limpia la terminal.
	std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.

    //Despliega el men? de opciones.
	std::cout << "-Cola de nombres-\n\n";
	printf("Nombres registrados: %d\n", Nombres.size());
	std::cout << "\n-Men?-\n1) Insertar nombre.\n2) Eliminar nombre.\n3) Vaciar cola.\n4) Buscar nombre.\n5) Recorrer cola.\n6) Salir.\n";
	//Ingreso de valor a variable.
    std::cout << "Opci?n: "; std::cin >> Op;

    if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
    {
        std::cout << "Error de formato. ";
        system("pause"); //Pausa el flujo del programa.
        std::cin.clear(); //Limpia el buffer de cin.
        //Ignora el resto de caracteres ingresados en cin hasta el pr?ximo salto de l?nea.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        Menu(Nombres); //Llamada recursiva a Menu.
    }
    else
    {
        //Selectiva switch para saltar al m?todo escogido por el usuario.
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
            std::cout << "Selecciona una opci?n del men? mostrado.";
            system("pause"); //Pausa el flujo del programa.
            Menu(Nombres); //Llamada recursiva a Menu.
        }
    }
}

//Procedimiento que recorre y despliega los elementos de una cola pasada por par?metro.
void Cola_Nombres::RecorrerNombres(std::queue<std::string> Nombres) {
    int i = 1; //Variable para la iteraci?n de un ciclo.
    std::queue<std::string> temp = Nombres; //Cola temporal para recorrer la cola.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.

    //Si la cola est? vac?a, despliega mensaje.
    if (temp.size() == 0) {
        std::cout << "Cola vac?a. ";
    } else {
        std::cout << "--Alumnos con sus promedios--\n\n";
        while (!temp.empty()) { //Mientras la cola no est? vac?a...
            std::cout << i << " - " << temp.front() << ".\n"; //Despliega el elemento hasta enfrente de la cola.
            temp.pop(); //Elimina el elemento hasta enfrente de la cola y pasa al siguiente.
            i++; //Incrementa contador.
        }
    }

    system("pause"); //Pausa el flujo del programa.
    Menu(Nombres); //Llamada a Menu.
}

//Procedimiento que busca un nombre en la cola pasada por par?metro.
void Cola_Nombres::BuscarNombre(std::queue<std::string> Nombres) {
    std::string nombre; //Variable string que recibe el nombre a buscar.
    int Op; //Variable que recibe opci?n seleccionada por el usuario.
    bool encontrado = false; //Variable auxiliar para la b?squeda del elemento.
    std::queue<std::string> temp = Nombres; //Cola temporal para recorrer la cola.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.

    //Si la cola est? vac?a, despliega mensaje.
    if (Nombres.size() == 0) {
        std::cout << "Cola vac?a. ";
    }
    else {
        std::cout << "Ingresa el nombre a buscar: "; std::cin >> nombre;
        while (!temp.empty()) { //Mientras la cola no est? vac?a...
            if (temp.front().compare(nombre) == 0) { //Compara el elemento de hasta enfrente de la cola con el nombre a buscar.
                encontrado = true;
            }
            temp.pop(); //Elimina el elemento de hasta enfrente de la cola y pasa al siguiente.
        }

        //Si encontr? o no encontr? el elemento, despliega mensaje.
        if (encontrado)
            std::cout << "\nSe encontr? el nombre. ";
        else
            std::cout << "\nNo se encontr? el nombre. ";


        std::cout << "?Desea buscar otro nombre? Si[1]: "; std::cin >> Op;
        if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
        {
            std::cout << "Error de formato. ";
            system("pause"); //Pausa el flujo del programa.
            std::cin.clear(); //Limpia el buffer de cin.
            //Ignora el resto de caracteres ingresados en cin hasta el pr?ximo salto de l?nea.
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            Menu(Nombres); //Llamada a Menu.
        }
        else {
            //Dependiendo de la opci?n escogida por el usuario, se llama a m?todo de la clase.
            if (Op == 1)
                BuscarNombre(Nombres);
            else
                Menu(Nombres);
        }
    }

    system("pause"); //Pausa el flujo del programa.
    Menu(Nombres); //Llamada a Menu.
}

//Procedimiento que elimina todos los elementos de la cola pasada por par?metro.
void Cola_Nombres::VaciarCola(std::queue<std::string> Nombres) {
    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.

    //Si la cola est? vac?a, despliega mensaje.
    if (Nombres.size() == 0) {
        std::cout << "Cola vac?a. ";
    }
    else {
        //Mientras cola cola no est? vac?a, se elimina el elemento al frente de la cola.
        while (!Nombres.empty()) {
            Nombres.pop();
        }

        std::cout << "Cola vaciada. ";
    }

    system("pause"); //Pausa el flujo del programa.
    Menu(Nombres); //Llamada a Menu.
}

//Procedimiento que elimina el elemento al frente de la cola pasada por par?metro.
void Cola_Nombres::EliminarNombre(std::queue<std::string> Nombres) {
    int Op; //Variable que recibe opci?n seleccionada por el usuario.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.

    //Si la cola est? vac?a, despliega mensaje.
    if (Nombres.size() == 0) {
        std::cout << "Cola vac?a. ";
    }
    else {
        std::cout << "Se va a eliminar el primer nombre de la cola. ";
        system("pause"); //Pausa el flujo del programa.
        Nombres.pop(); //Elimina el elemento hasta enfrente de la cola.

        std::cout << "?Desea buscar otro nombre? Si[1]: "; std::cin >> Op;
        if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
        {
            std::cout << "Error de formato. ";
            system("pause"); //Pausa el flujo del programa.
            std::cin.clear(); //Limpia el buffer de cin.
            //Ignora el resto de caracteres ingresados en cin hasta el pr?ximo salto de l?nea.
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            Menu(Nombres); //Llamada a Menu.
        }
        else {
            //Dependiendo de la opci?n escogida por el usuario, se llama a m?todo de la clase.
            if (Op == 1)
                EliminarNombre(Nombres);
            else
                Menu(Nombres);
        }
    }

    system("pause"); //Pausa el flujo del programa.
    Menu(Nombres); //Llamada a Menu.
}

//Procedimiento que agrega elementos a la cola pasada por par?metro.
void Cola_Nombres::AgregarNombre(std::queue<std::string> Nombres) {
    int Op; //Variable que recibe opci?n seleccionada por el usuario.
    std::string nombre; //Variable que recibe el nombre a ingresar a la cola.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.
    //Ingreso de valor a variable.
    std::cout << "Ingresa un nombre: "; std::cin >> nombre;
    Nombres.push(nombre); //Agrega elemento a la cola.
    std::cout << "Ingreado. ?Desea seguir agregando alumnos? Si[1]: "; std::cin >> Op;

    if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
    {
        std::cout << "Error de formato. ";
        system("pause"); //Pausa el flujo del programa.
        std::cin.clear(); //Limpia el buffer de cin.
        //Ignora el resto de caracteres ingresados en cin hasta el pr?ximo salto de l?nea.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        Menu(Nombres); //Llamada a Menu.
    }
    else
    {
        //Dependiendo de la opci?n escogida por el usuario, se llama a m?todo de la clase.
        if (Op == 1)
            AgregarNombre(Nombres);
        else
            Menu(Nombres);
    }
}