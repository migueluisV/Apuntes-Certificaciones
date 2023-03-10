#include <iostream> //Cabecera para entrada y salida de datos.
//#include <string>
#include "NumeroALetra.h" //Cabecera de clase NumeroALetra.

//Funci?n que recorre el arreglo Unidades para encontrar el nombre del n?mero ingresado.
std::string NumeroALetra::BuscarUnidad(std::string num) {
    int i = 0;
    int TamUnidades = sizeof(Unidades) / sizeof(Unidades[0]); //Variable auxiliar que recibe la cantidad de elementos del arreglo.
    std::string Num = ""; //Variable string que ser? regresada por la funci?n.
    bool encontrado = false; //Variable auxiliar para encontrar el n?mero.

    //Ciclo que recorre el arreglo Unidades.
    while (i < TamUnidades && !encontrado) {
        if (Unidades[i][0].compare(num) == 0) {
            Num += Unidades[i][1]; //Asigna el nombre del n?mero a la variable string que ser? regresada.
            encontrado = true;
        }
        i++; //incrementa contador.
    }

    return Num;
}

//Funci?n que busca el nombre de un n?mero que no sea 10, 11, 12, 13, 20, 30, 40, es decir,
//un n?mero compuesto por una decena y una unidad.
std::string NumeroALetra::DecenaIrregular(std::string num) {
    std::string Num = "", aux; //Variable string que ser? regresada por la funci?n y auxiliar.

    aux = num.substr(0, 1) + "0"; //Inicializaci?n de aux que busca la decena del n?mero irregular.
    //Caso especial: si el n?mero est? entre 20 y 29, el nombre del n?mero es "veinti..." y no "veinte y...".
    //Primero mira si el n?mero a buscar es distinto de 20.
    if (BuscarDecenas(aux).compare("Veinte") != 0)
        Num += BuscarDecenas(aux) + " y ";
    else
        Num += "Veinti ";
    aux = num.substr(1, 2); //aux pasa a valor de la unidad del n?mero irregular.
    Num += BuscarUnidad(aux); //Llamada a la funci?n que recorre el arreglo Unidades para terminar de componer el n?mero irregular.

    return Num;
}

//Funci?n que recorre el arreglo UnidadesConCero, Decena y Decenas para encontrar el nombre del n?mero de dos d?gitos ingresado.
std::string NumeroALetra::BuscarDecenas(std::string num) {
    int i = 0;
    int TamUnidadesCero = sizeof(UnidadesConCero) / sizeof(UnidadesConCero[0]); //Variable auxiliar que recibe la cantidad de elementos del arreglo.
    int TamDecena = sizeof(Decena) / sizeof(Decena[0]); //Variable auxiliar que recibe la cantidad de elementos del arreglo.
    std::string Num = ""; //Variable string que ser? regresada por la funci?n.
    bool encontrado = false; //Variable auxiliar para encontrar el n?mero.

    //Se recorre el arreglo UnidadesConCero para encontrar el n?mero con dos d?gitos.
    while (i < TamUnidadesCero && !encontrado) {
        if (UnidadesConCero[i][0].compare(num) == 0) {
            Num += UnidadesConCero[i][1]; //Asigna el nombre del n?mero a la variable string que ser? regresada.
            encontrado = true; //Variable pasa a true.
        }
        i++; //Incrementa contador.
    }
    i = 0;

    //Se recorre los arreglos Decena y Decenas para encontrar el n?mero con dos d?gitos.
    while (i < TamDecena && !encontrado) {
        if (Decena[i][0].compare(num) == 0) {
            Num += Decena[i][1]; //Asigna el nombre del n?mero a la variable string que ser? regresada.
            encontrado = true; //Variable pasa a true.
        }
        else if (Decenas[i][0].compare(num) == 0) {
            Num += Decenas[i][1]; //Asigna el nombre del n?mero a la variable string que ser? regresada.
            encontrado = true; //Variable pasa a true.
        }
        i++; //Incrementa contador.
    }

    return Num;
}

//Funci?n que recorre el arreglo Centenas para encontrar el nombre del n?mero ingresado.
std::string NumeroALetra::BuscarCentenas(std::string num) {
    int i = 0;
    int TamCentena = sizeof(Centena) / sizeof(Centena[0]); //Variable auxiliar que recibe la cantidad de elementos del arreglo.
    std::string Num = ""; //Variable string que ser? regresada por la funci?n.
    bool encontrado = false; //Variable auxiliar para encontrar el n?mero.

    //Se recorre los arreglos Centenas para encontrar el n?mero con tres d?gitos.
    while (i < TamCentena && !encontrado) {
        if (Centena[i][0].compare(num) == 0) {
            Num += Centena[i][1]; //Asigna el nombre del n?mero a la variable string que ser? regresada.
            encontrado = true; //Variable pasa a true.
        }
        i++; //Incrementa contador.
    }

    return Num;
}

//Funci?n que busca el nombre de un n?mero que no sea 100, 110, 111, 113, 200, 300, 400, es decir,
//un n?mero compuesto por una centena, decena y una unidad.
std::string NumeroALetra::CentenaIrregular(std::string num)
{
    std::string Num, aux; //Variable string que ser? regresada por la funci?n y auxiliar.

    aux = num.substr(0, 1) + "00"; //Inicializaci?n de aux que busca la centena del n?mero irregular.
    //Caso especial: si el n?mero est? entre 100 y 109, el nombre del n?mero es "cien..." y no "ciento y...".
    //Primero mira si el n?mero a buscar es distinto de 100.
    if (BuscarCentenas(aux).compare("Cien") != 0)
        Num += BuscarCentenas(aux) + " ";
    else
        Num += "Ciento ";
    aux = num.substr(1, 3); //aux pasa a valor de la decena del n?mero irregular.
    //Llamada a la funci?n que recorre el arreglo Decenas o DecenaIrregular para terminar de componer el n?mero irregular.
    if (BuscarDecenas(aux).compare("") != 0)
        Num += BuscarDecenas(aux);
    else
        Num += DecenaIrregular(aux);

    return Num;
}

//Funci?n que construye y devuelve el nombre de un n?mero.
std::string NumeroALetra::NumLetra(std::string num) {
    std::string Num, aux; //Variable string que ser? regresada por la funci?n y auxiliar.

    //Condicionales que saltan a un m?todo que regresar? el nombre del n?mero, dependiendo del largo del n?mero ingresado (cadena).
    if (num.length() == 1)
        Num = BuscarUnidad(num);
    else if (num.length() == 2) {
        Num = BuscarDecenas(num);
        //Si no se encontr? el n?mero en los arreglos de decenas, se manda a llamar a la funci?n DecenaIrregular.
        if (Num == "")
            Num = DecenaIrregular(num);
    }
    else 
    {
        Num = BuscarCentenas(num);
        //Si no se encontr? el n?mero en el arreglo de centenas, se manda a llamar a la funci?n CentenaIrregular.
        if (Num == "")
            Num = CentenaIrregular(num);
    }

    return Num;
}