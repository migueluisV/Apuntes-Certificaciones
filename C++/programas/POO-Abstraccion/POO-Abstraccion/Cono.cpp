#define _USE_MATH_DEFINES //Define el uso de constantes matemáticas.
#include "Cono.h" //Cabecera de clase Cono.
#include <math.h> //Cabecera para trabajar con funciones matemáticas.
#include <iostream> //Cabecera para entrada y salida de datos.

//Inicialización de atributos por medio del constructor.
Cono::Cono(double radio, double altura) : Radio(radio), Altura(altura){} //Forma alternativa de declarar un constructor.

//Declaración de métodos abstractos en clase derivada. Regresa el volumen de un Cono.
double Cono::CalcularVolumen() {
	return (M_PI * pow(Radio, 2) * Altura) / 3;
}

//Declaración de métodos abstractos en clase derivada. Despliega datos de un cono.
void Cono::DesplegarVolumen() {
	std::cout << "--Datos del cono--\n\n";
	std::cout << "La medida del radio del cono es: " << Radio << "u.\n";
	std::cout << "La medida de la altura del cono es: " << Altura << "u.\n";
	std::cout << "El volumen del cono es: " << CalcularVolumen() << "u^3.\n";
}