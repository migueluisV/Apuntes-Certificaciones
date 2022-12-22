#include <iostream> //Cabecera para entrada y salida de datos.
#include <string> //Biblioteca para tener funciones especializadas para cadenas.
#include "NumeroALetra.h" //Cabecera de clase NumeroALetra.

int main()
{
	int numero, Op; //Variables auxiliares.
	std::string Numero; //Variable string que recibirá los valores de las funciones de la clase NumeroALetra.

	std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.
	system("cls"); //Limpia la terminal.

	//Ingreso de valor a variable.
	std::cout << "Ingresa un número entero menor a 1000: "; std::cin >> numero;

	if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		//Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		main(); //Llamada recursiva a main.
	}
	else
	{
		if (numero > 999) { //Solución solo soporta números de tres dígitos.
			std::cout << "\nNúmero no disponible para pasar a texto. ";
			system("pause"); //Pausa el flujo del programa.
			main(); //Llamada recursiva a main.
		}
		else {
			Numero = std::to_string(numero); //Convierte entero ingresado a cadena.

			NumeroALetra num; //Declara objeto NumeroALetra.
			//Llamada a la funciónq que regresa el nombre del número ingresado en el despliegue de resultados.
			std::cout << "\nEl número " << numero << " escrito es: " << num.NumLetra(Numero) << ".\n\n";

			//Ingreso de valor a variable.
			std::cout << "¿Desea ingresar otro número? Si[1]: "; std::cin >> Op;
			if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
			{
				std::cout << "Error de formato. ";
				system("pause"); //Pausa el flujo del programa.
				std::cin.clear(); //Limpia el buffer de cin.
				//Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
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