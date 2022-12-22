#include <iostream> //Cabecera para entrada y salida de datos.
//#include <cstdio>
#include "Figuras.h" //Cabecera de clase Figuras.

//Procedimiento que dibuja un triángulo con asteriscos.
void Figuras::DibujarTriangulo() {
	short Altura, R, C, B;

	system("cls"); //Limpia la terminal.

	//Ingreso de valor a variable
	std::cout << "Altura del triángulo (número entero): "; std::cin >> Altura;
	if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		//Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		DibujarTriangulo(); //Llamada recursiva a DibujarTriangulo.
	}
	else
	{
		std::cout << "Triángulo:\n\n";
		//Dibuja el triángulo.
		for (R = 1; R <= Altura; R++) { //Bucle para la altura.
			for (B = 1; B <= (Altura - R); B++) { //Bucle para los espacios en blanco.
				std::cout << " ";
			}

			for (C = 1; C <= (R * 2) - 1; C++) { //Bucle para los asteriscos que conforman al triángulo.
				std::cout << "*";
			}
			std::cout << "\n";
		}

		system("pause"); //Pausa el flujo del programa.
	}
}

//Procedimiento que dibuja un triángulo con asteriscos.
void Figuras::DibujarRectangulo() {
	short Base, Altura, R, C;

	system("cls"); //Limpia la terminal.

	//Ingreso de datos a variables.
	std::cout << "Altura del rectángulo (número entero): "; std::cin >> Altura;
	std::cout << "Base del rectángulo (número entero): "; std::cin >> Base;

	if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		//Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		DibujarRectangulo(); //Llamada recursiva a DibujarRectangulo.
	}
	else
	{
		std::cout << "Rectángulo:\n\n";
		//Dibuja el rectángulo
		for (R = 1; R <= Altura; R++) { //Bucle para la altura
			for (C = 1; C <= Base; C++) { //Bucle para la anchura
				std::cout << "*  ";
			}
			std::cout << "\n";
		}

		system("pause"); //Pausa el flujo del programa.
	}
}

//Procedimiento que dibuja un triángulo con asteriscos.
void Figuras::DibujarCuadrado() {
	short Lado, R, C;

	system("cls"); //Limpia la term
	
	//Ingreso de dato a variable.
	std::cout << "Lado del cuadrado (número entero): "; std::cin >> Lado;

	if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		//Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		DibujarCuadrado(); //Llamada recursiva.
	}
	else
	{
		std::cout << "Cuadrado:\n\n";
		//Dibuja el cuadrado.
		for (R = 1; R <= Lado; R++) { //Bucle para la un lado
			for (C = 1; C <= Lado; C++) { //Bucle para un lado
				std::cout << "* ";
			}
			std::cout << "\n";
		}

		system("pause"); //Pausa el flujo del programa.
	}
}