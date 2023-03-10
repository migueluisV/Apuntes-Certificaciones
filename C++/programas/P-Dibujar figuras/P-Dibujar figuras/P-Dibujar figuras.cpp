#include <iostream> //Cabecera para entrada y salida de datos.
#include "Figuras.h" //Cabecera de clase Figuras.

int main()
{
    short Op;
    Figuras figura; //Declaraci?n de objeto Figuras.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.

    //Despliega men?.
    std::cout << "Selecciona una opci?n del men?:\n\n";
    std::cout << "1) Dibujar tri?ngulo.\n2) Dibujar rect?ngulo.\n3) Dibujar cuadrado.\n4) Salir.\n";
    //Ingreso de dato a variable.
    std::cout << "Opci?n: "; std::cin >> Op;

	if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
        //Ignora el resto de caracteres ingresados en cin hasta el pr?ximo salto de l?nea.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		main(); //Llamada recursiva a main.
	}
	else
	{
        //Selectiva switch para llamar al m?todo seleccionado.
		switch (Op) {
            case 1:
                figura.DibujarTriangulo();
                break;
            case 2:
                figura.DibujarRectangulo();
                break;
            case 3:
                figura.DibujarCuadrado();
                break;
            case 4:
                exit(-1); //Salida del programa.
                break;
            default:
                std::cout << "Opci?n no v?lida. ";
                system("pause"); //Pausa el flujo del programa.
                main(); //Llamada recursiva a main.
		}
	}
}