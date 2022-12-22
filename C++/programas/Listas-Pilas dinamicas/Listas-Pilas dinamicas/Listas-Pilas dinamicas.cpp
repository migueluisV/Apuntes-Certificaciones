#include <stack> //Cabecera para trabajar con pilas dinámicas.
#include <iostream> //Cabecera para entrada y salida de datos.
#include "Pila_Alumnos.h"; //Cabecera de la clase Pila_Alumnos.

int main()
{
    //Declara pilas double y string.
    std::stack<double> Promedios;
    std::stack<std::string> Alumnos;

    //Declara objeto Pila_Alumnos.
    Pila_Alumnos pa;

    //Llamada al método que despliega un menú de opciones para trabajar con pilas.
    pa.Menu(Promedios, Alumnos);
}