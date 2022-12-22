#include <iostream> //Cabecera para entrada y salida de datos.
#include "Triangulo.h" //Incluye cabecera de la clase Triangulo.

//Procedimiento estático que recibe los valores para calcular perímetros de triángulos.
static void Valores() {
    float l, Base, Altura, l1, l2, l3, p1, p2, p3;
    
    system("cls"); //Limpia la terminal.

    std::cout << "-Ingresa valores-\n\n";
    //Bloque try-catch para excepciones de formato de variables.
    try {
        //Ingreso de valores a variables.
        std::cout << "Ingresa un valor para calcular el perímetro de un triángulo equilátero: "; std::cin >> l;
        if (std::cin.fail()) throw 1; //Si se ingresó un tipo de dato incorrecto en la variable.
        std::cout << "Ingresa un valor de base para calcular el perímetro de un triángulo isóseles: "; std::cin >> Base;
        if (std::cin.fail()) throw 1; //Si se ingresó un tipo de dato incorrecto en la variable.
        std::cout << "Ingresa un valor de altura para calcular el perímetro de un triángulo isóseles: "; std::cin >> Altura;
        if (std::cin.fail()) throw 1; //Si se ingresó un tipo de dato incorrecto en la variable.
        std::cout << "Ingresa un valor para calcular el perímetro de un triángulo escaleno: "; std::cin >> l1;
        if (std::cin.fail()) throw 1; //Si se ingresó un tipo de dato incorrecto en la variable.
        std::cout << "Ingresa un valor para calcular el perímetro de un triángulo escaleno: "; std::cin >> l2;
        if (std::cin.fail()) throw 1; //Si se ingresó un tipo de dato incorrecto en la variable.
        std::cout << "Ingresa un valor para calcular el perímetro de un triángulo escaleno: "; std::cin >> l3;
        if (std::cin.fail()) throw 1; //Si se ingresó un tipo de dato incorrecto en la variable.

        Triangulo tri; //Declara objeto Triangulo.
        p1 = tri.Perimetro(l);
        p2 = tri.Perimetro(Base, Altura);
        p3 = tri.Perimetro(l1, l2, l3); //Llamada al método sobrecargado para asignar calculo de périmetro a variables.
        tri.Resultados(p1, p2, p3); //Llamada al método que despliega resultados.
    }
    catch (int x) {
        std::cout << "Error de formato. ";
        system("pause"); //Pausa el flujo del programa.
        std::cin.clear(); //Limpia el buffer de cin.
        //Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        Valores(); //Llamada recursiva a Valores.
    }
}

int main()
{
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    Valores(); //Llamada a procedimiento que ingresa valores para calcular perímetros.
}