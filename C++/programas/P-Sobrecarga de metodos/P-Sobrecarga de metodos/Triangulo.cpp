#include <iostream> //Cabecera para entrada y salida de datos.
#include "Triangulo.h" //Incluye cabecera de la clase.

//Función sobrecargada.
float Triangulo::Perimetro(float l)
{
    //Regresa el perímetro de un triángulo equilátero.
    return l * 3;
}

float Triangulo::Perimetro(float base, float altura)
{
    //Regresa el perímetro de un triángulo isóseles.
    return (altura * 2) + base;
}

float Triangulo::Perimetro(float l1, float l2, float l3)
{
    //Regresa el perímetro de un triángulo escaleno.
    return l1 + l2 + l3;
}

//Procedmiento que despliega los resultados obtenidos.
void Triangulo::Resultados(float p1, float p2, float p3)
{
    //Despliega resultado de calculos de perímetros.
    std::cout << "\n--Resultados--\n\n";
    std::cout << "Perímetro del triángulo equilátero: " << p1 << "u.\n";
    std::cout << "Perímetro del triángulo isóseles: " << p2 << "u.\n";
    std::cout << "Perímetro del triángulo escaleno: " << p3 << "u.";
}

Triangulo::~Triangulo()
{
    //Despliega mensaje de objeto destruido.
    std::cout << "\n\nObjeto Triangulo destruido.\n";
}
