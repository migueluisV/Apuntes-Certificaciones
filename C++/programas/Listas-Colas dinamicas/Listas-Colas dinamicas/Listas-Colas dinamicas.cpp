#include <iostream> //Cabecera para entrada y salida de datos.
#include "Cola_Nombres.h" //Cabecera de clase Cola_Nombres.
#include <queue> //Cabecera para trabajar con colas dinámicas Queue.

int main()
{
    //Declara objeto Queue para la cola.
    std::queue<std::string> Nombres;

    //Declara objeto Cola_Nombres.
    Cola_Nombres cn;

    //Llamada al método que despliega menú de opciones para trabajar con colas.
    cn.Menu(Nombres);
}