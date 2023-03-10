#include <iostream> //Cabecera para entrada y salida de datos.
//#include <cstdio>

//Procedimiento est?tico que calcula los componentes de un n?mero entero que representa la edad de alguien y los despliega.
static void Despliegue(short Edad) {
	short Dias, Meses;

	//Componentes de la edad de alguien.
	Dias = Edad * 365;
	Meses = Edad * 12;

	//Despliegue de resultados.
	printf("Has vivido %d a?os, que son %d meses o %d d?as.", Edad, Meses, Dias);
}

int main()
{
    short Edad;

	system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.

	//Ingreso de dato a la variable.
    std::cout << "Ingresa una edad: "; std::cin >> Edad;

	if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. Presiona cualquier tecla para continuar...\n";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		//Ignora el resto de caracteres ingresados cin hasta el pr?ximo salto de l?nea.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		main(); //Llamada recursiva a main.
	}
	else
		Despliegue(Edad); //Llamada a procedimiento que despliega componentes de una edad.
}