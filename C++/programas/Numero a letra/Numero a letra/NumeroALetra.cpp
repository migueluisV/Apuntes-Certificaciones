#include <iostream> //Cabecera para entrada y salida de datos.
//#include <string>
#include "NumeroALetra.h" //Cabecera de clase NumeroALetra.

//Función que recorre el arreglo Unidades para encontrar el nombre del número ingresado.
std::string NumeroALetra::BuscarUnidad(std::string num) {
    int i = 0;
    int TamUnidades = sizeof(Unidades) / sizeof(Unidades[0]); //Variable auxiliar que recibe la cantidad de elementos del arreglo.
    std::string Num = ""; //Variable string que será regresada por la función.
    bool encontrado = false; //Variable auxiliar para encontrar el número.

    //Ciclo que recorre el arreglo Unidades.
    while (i < TamUnidades && !encontrado) {
        if (Unidades[i][0].compare(num) == 0) {
            Num += Unidades[i][1]; //Asigna el nombre del número a la variable string que será regresada.
            encontrado = true;
        }
        i++; //incrementa contador.
    }

    return Num;
}

//Función que busca el nombre de un número que no sea 10, 11, 12, 13, 20, 30, 40, es decir,
//un número compuesto por una decena y una unidad.
std::string NumeroALetra::DecenaIrregular(std::string num) {
    std::string Num = "", aux; //Variable string que será regresada por la función y auxiliar.

    aux = num.substr(0, 1) + "0"; //Inicialización de aux que busca la decena del número irregular.
    //Caso especial: si el número está entre 20 y 29, el nombre del número es "veinti..." y no "veinte y...".
    //Primero mira si el número a buscar es distinto de 20.
    if (BuscarDecenas(aux).compare("Veinte") != 0)
        Num += BuscarDecenas(aux) + " y ";
    else
        Num += "Veinti ";
    aux = num.substr(1, 2); //aux pasa a valor de la unidad del número irregular.
    Num += BuscarUnidad(aux); //Llamada a la función que recorre el arreglo Unidades para terminar de componer el número irregular.

    return Num;
}

//Función que recorre el arreglo UnidadesConCero, Decena y Decenas para encontrar el nombre del número de dos dígitos ingresado.
std::string NumeroALetra::BuscarDecenas(std::string num) {
    int i = 0;
    int TamUnidadesCero = sizeof(UnidadesConCero) / sizeof(UnidadesConCero[0]); //Variable auxiliar que recibe la cantidad de elementos del arreglo.
    int TamDecena = sizeof(Decena) / sizeof(Decena[0]); //Variable auxiliar que recibe la cantidad de elementos del arreglo.
    std::string Num = ""; //Variable string que será regresada por la función.
    bool encontrado = false; //Variable auxiliar para encontrar el número.

    //Se recorre el arreglo UnidadesConCero para encontrar el número con dos dígitos.
    while (i < TamUnidadesCero && !encontrado) {
        if (UnidadesConCero[i][0].compare(num) == 0) {
            Num += UnidadesConCero[i][1]; //Asigna el nombre del número a la variable string que será regresada.
            encontrado = true; //Variable pasa a true.
        }
        i++; //Incrementa contador.
    }
    i = 0;

    //Se recorre los arreglos Decena y Decenas para encontrar el número con dos dígitos.
    while (i < TamDecena && !encontrado) {
        if (Decena[i][0].compare(num) == 0) {
            Num += Decena[i][1]; //Asigna el nombre del número a la variable string que será regresada.
            encontrado = true; //Variable pasa a true.
        }
        else if (Decenas[i][0].compare(num) == 0) {
            Num += Decenas[i][1]; //Asigna el nombre del número a la variable string que será regresada.
            encontrado = true; //Variable pasa a true.
        }
        i++; //Incrementa contador.
    }

    return Num;
}

//Función que recorre el arreglo Centenas para encontrar el nombre del número ingresado.
std::string NumeroALetra::BuscarCentenas(std::string num) {
    int i = 0;
    int TamCentena = sizeof(Centena) / sizeof(Centena[0]); //Variable auxiliar que recibe la cantidad de elementos del arreglo.
    std::string Num = ""; //Variable string que será regresada por la función.
    bool encontrado = false; //Variable auxiliar para encontrar el número.

    //Se recorre los arreglos Centenas para encontrar el número con tres dígitos.
    while (i < TamCentena && !encontrado) {
        if (Centena[i][0].compare(num) == 0) {
            Num += Centena[i][1]; //Asigna el nombre del número a la variable string que será regresada.
            encontrado = true; //Variable pasa a true.
        }
        i++; //Incrementa contador.
    }

    return Num;
}

//Función que busca el nombre de un número que no sea 100, 110, 111, 113, 200, 300, 400, es decir,
//un número compuesto por una centena, decena y una unidad.
std::string NumeroALetra::CentenaIrregular(std::string num)
{
    std::string Num, aux; //Variable string que será regresada por la función y auxiliar.

    aux = num.substr(0, 1) + "00"; //Inicialización de aux que busca la centena del número irregular.
    //Caso especial: si el número está entre 100 y 109, el nombre del número es "cien..." y no "ciento y...".
    //Primero mira si el número a buscar es distinto de 100.
    if (BuscarCentenas(aux).compare("Cien") != 0)
        Num += BuscarCentenas(aux) + " ";
    else
        Num += "Ciento ";
    aux = num.substr(1, 3); //aux pasa a valor de la decena del número irregular.
    //Llamada a la función que recorre el arreglo Decenas o DecenaIrregular para terminar de componer el número irregular.
    if (BuscarDecenas(aux).compare("") != 0)
        Num += BuscarDecenas(aux);
    else
        Num += DecenaIrregular(aux);

    return Num;
}

//Función que construye y devuelve el nombre de un número.
std::string NumeroALetra::NumLetra(std::string num) {
    std::string Num, aux; //Variable string que será regresada por la función y auxiliar.

    //Condicionales que saltan a un método que regresará el nombre del número, dependiendo del largo del número ingresado (cadena).
    if (num.length() == 1)
        Num = BuscarUnidad(num);
    else if (num.length() == 2) {
        Num = BuscarDecenas(num);
        //Si no se encontró el número en los arreglos de decenas, se manda a llamar a la función DecenaIrregular.
        if (Num == "")
            Num = DecenaIrregular(num);
    }
    else 
    {
        Num = BuscarCentenas(num);
        //Si no se encontró el número en el arreglo de centenas, se manda a llamar a la función CentenaIrregular.
        if (Num == "")
            Num = CentenaIrregular(num);
    }

    return Num;
}