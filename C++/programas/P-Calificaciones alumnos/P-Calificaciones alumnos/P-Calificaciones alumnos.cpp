#include "CaliAl.h" //Cabecera de clase CaliAl.
#include <iostream> //Cabecera para entrada y salida de datos.

int main()
{
    float Calificaciones[5]; //Declara arreglo float de 5 elementos.
    std::string Nombres[5]; //Declara arreglo string de 5 elementos.

    CaliAl ca; //Declara objeto CaliAl.
    ca.IngresoDatos(Calificaciones, Nombres, 0); //Llamada al método que ingresa nombres a los arreglos.
}