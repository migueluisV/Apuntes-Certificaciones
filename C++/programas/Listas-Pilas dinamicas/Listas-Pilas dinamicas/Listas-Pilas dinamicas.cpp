#include <stack> //Cabecera para trabajar con pilas din?micas.
#include <iostream> //Cabecera para entrada y salida de datos.
#include "Pila_Alumnos.h"; //Cabecera de la clase Pila_Alumnos.

int main()
{
    //Declara pilas double y string.
    std::stack<double> Promedios;
    std::stack<std::string> Alumnos;

    //Declara objeto Pila_Alumnos.
    Pila_Alumnos pa;

    //Llamada al m?todo que despliega un men? de opciones para trabajar con pilas.
    pa.Menu(Promedios, Alumnos);
}