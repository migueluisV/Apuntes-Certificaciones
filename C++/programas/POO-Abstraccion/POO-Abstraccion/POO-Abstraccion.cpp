#include <iostream> //Cabecera para entrada y salida de datos.
//Agrega cabeceras de clases derivadas a este archivo .cpp.
#include "Cilindro.h"
#include "Cono.h"
#include "Cubo.h"
#include "Esfera.h"

//Procedimiento est?tico
static void ValoresVolumen() {
    double radio, altura, lado;

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.

    std::cout << "-Valores para calcular volmen de figuras-\n\n";
    //Bloque try-catch para excepciones de formato de variables.
    try {
        //Ingreso de datos a variables.
        std::cout << "Ingresa un valor para el radio: "; std::cin >> radio;
        if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
            throw 1;
        std::cout << "Ingresa un valor para la altura: "; std::cin >> altura;
        if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
            throw 1;
        std::cout << "Ingresa un valor para un lado: "; std::cin >> lado;
        if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
            throw 1;

        system("cls"); //Limpia la terminal.

        //Crea objetos de las clases, y llama a su m?todo virtual proveniente de clase base. 
        Cono cono(radio, altura);
        cono.DesplegarVolumen();

        Esfera esfera(radio);
        esfera.DesplegarVolumen();

        Cilindro cilindro(radio, altura);
        cilindro.DesplegarVolumen();

        Cubo cubo(lado);
        cubo.DesplegarVolumen();
    }
    catch (int x) {
        std::cout << "Error de formato. ";
        system("pause"); //Pausa el flujo del programa.
        std::cin.clear(); //Limpia el buffer de cin.
        //Ignora el resto de caracteres ingresados en cin hasta el pr?ximo salto de l?nea.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        ValoresVolumen(); //Llamada recursiva a ValoresVolumen.
    }
}

int main()
{
    ValoresVolumen(); //Llamada al procedimiento que recibe valores para calcular volumen de figuras.
}