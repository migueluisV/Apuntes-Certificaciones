#include <iostream> //Cabecera para entrada y salida de datos.
#include "Rectangulo.h" //Cabecera de clase Rectangulo.
#include "Triangulo.h" //Cabecera de clase Triangulo

int main()
{
    float Base, Altura;

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.

    //Bloque try-catch para atrapar errores de formato en asignaci?n de valores a variables.
    try {
        //Ingreso de datos a variables.
        std::cout << "-Datos del tri?ngulo-\n";
        std::cout << "Ingresa base del tri?ngulo: "; std::cin >> Base;
        if (std::cin.fail()) throw 1; //Si se ingres? un tipo de dato incorrecto en la variable.
        std::cout << "Ingresa altura del tri?ngulo: "; std::cin >> Altura;
        if (std::cin.fail()) throw 1;//Si se ingres? un tipo de dato incorrecto en la variable.

        Triangulo t(Base, Altura); //Crea objeto Triangulo
        t.Area(); t.Perimetro();
        t.Resultado(); //Llama a los m?todos abstractos de la clase base con el comportamiento de la clase derivada

        system("pause"); //Pausa el flujo del programa.

        //Ingreso de datos a variables.
        std::cout << "\n\n-Datos del rect?ngulo-\n";
        std::cout << "Ingresa base del rect?ngulo: "; std::cin >> Base;
        if (std::cin.fail()) throw 1;//Si se ingres? un tipo de dato incorrecto en la variable.
        std::cout << "Ingresa altura del rect?ngulo: "; std::cin >> Altura;
        if (std::cin.fail()) throw 1;//Si se ingres? un tipo de dato incorrecto en la variable.

        Rectangulo r(Base, Altura); //Crea objeto Rectangulo
        r.Area(); r.Perimetro();
        r.Resultado(); //Llama a los m?todos abstractos de la clase base con el comportamiento de la clase derivada
    }
    catch (int x) {
        std::cout << "Error de formato. ";
        system("pause"); //Pausa el flujo del programa.
        std::cin.clear(); //Limpia el buffer de cin.
        //Ignora el resto de caracteres ingresados en cin hasta el pr?ximo salto de l?nea.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        main(); //Llamada recursiva a main.
    }
}