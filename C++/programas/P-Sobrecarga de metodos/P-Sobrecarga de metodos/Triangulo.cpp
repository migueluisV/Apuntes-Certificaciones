#include <iostream> //Cabecera para entrada y salida de datos.
#include "Triangulo.h" //Incluye cabecera de la clase.

//Funci?n sobrecargada.
float Triangulo::Perimetro(float l)
{
    //Regresa el per?metro de un tri?ngulo equil?tero.
    return l * 3;
}

float Triangulo::Perimetro(float base, float altura)
{
    //Regresa el per?metro de un tri?ngulo is?seles.
    return (altura * 2) + base;
}

float Triangulo::Perimetro(float l1, float l2, float l3)
{
    //Regresa el per?metro de un tri?ngulo escaleno.
    return l1 + l2 + l3;
}

//Procedmiento que despliega los resultados obtenidos.
void Triangulo::Resultados(float p1, float p2, float p3)
{
    //Despliega resultado de calculos de per?metros.
    std::cout << "\n--Resultados--\n\n";
    std::cout << "Per?metro del tri?ngulo equil?tero: " << p1 << "u.\n";
    std::cout << "Per?metro del tri?ngulo is?seles: " << p2 << "u.\n";
    std::cout << "Per?metro del tri?ngulo escaleno: " << p3 << "u.";
}

Triangulo::~Triangulo()
{
    //Despliega mensaje de objeto destruido.
    std::cout << "\n\nObjeto Triangulo destruido.\n";
}
