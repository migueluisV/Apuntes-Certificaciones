#include <iostream> //Cabecera para entrada y salida de datos.
#include <string> //Biblioteca para tener funciones especializadas para cadenas.
#include "NumeroALetra.h" //Cabecera de clase NumeroALetra.

int main()
{
	int numero, Op; //Variables auxiliares.
	std::string Numero; //Variable string que recibir? los valores de las funciones de la clase NumeroALetra.

	std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.
	system("cls"); //Limpia la terminal.

	//Ingreso de valor a variable.
	std::cout << "Ingresa un n?mero entero menor a 1000: "; std::cin >> numero;

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
		if (numero > 999) { //Soluci?n solo soporta n?meros de tres d?gitos.
			std::cout << "\nN?mero no disponible para pasar a texto. ";
			system("pause"); //Pausa el flujo del programa.
			main(); //Llamada recursiva a main.
		}
		else {
			Numero = std::to_string(numero); //Convierte entero ingresado a cadena.

			NumeroALetra num; //Declara objeto NumeroALetra.
			//Llamada a la funci?nq que regresa el nombre del n?mero ingresado en el despliegue de resultados.
			std::cout << "\nEl n?mero " << numero << " escrito es: " << num.NumLetra(Numero) << ".\n\n";

			//Ingreso de valor a variable.
			std::cout << "?Desea ingresar otro n?mero? Si[1]: "; std::cin >> Op;
			if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
			{
				std::cout << "Error de formato. ";
				system("pause"); //Pausa el flujo del programa.
				std::cin.clear(); //Limpia el buffer de cin.
				//Ignora el resto de caracteres ingresados en cin hasta el pr?ximo salto de l?nea.
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				exit(-1); //Salida del programa
			}
			else {
				if (Op == 1)
					main(); //Llamada recursiva a main.
				else
					exit(-1); //Salida del programa
			}
		}
	}
}