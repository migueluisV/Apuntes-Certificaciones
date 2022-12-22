#define _USE_MATH_DEFINES //Define el uso de constantes matemáticas.
#include "Cubo.h" //Cabecera para trabajar con funciones matemáticas.
#include <iostream> //Cabecera para entrada y salida de datos.

//Inicialización de atributos por medio del constructor.
Cubo::Cubo(double lado) : Lado(lado){} //Forma alternativa de declarar un constructor.

//Declaración de métodos abstractos en clase derivada. Regresa el volumen de un cubo.
double Cubo::CalcularVolumen() { 
	return pow(Lado, 3);
}

//Declaración de métodos abstractos en clase derivada. Despliega datos de un cubo.
void Cubo::DesplegarVolumen() {
	std::cout << "\n--Datos del cubo--\n\n";
	std::cout << "La medida del lado del cubo es: " << Lado << "u.\n";
	std::cout << "El volumen del cubo es: " << CalcularVolumen() << "u^3.\n";
}