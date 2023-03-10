#define _USE_MATH_DEFINES //Define el uso de constantes matem?ticas.
#include "Cilindro.h" //Cabecera de clase Cilindro.
#include <math.h> //Cabecera para trabajar con funciones matem?ticas.
#include <iostream> //Cabecera para entrada y salida de datos.

//Inicializaci?n de atributos por medio del constructor.
Cilindro::Cilindro(double radio, double altura) { //Una forma de inicializar el constructor.
	Radio = radio;
	Altura = altura;
}

//Declaraci?n de m?todos abstractos en clase derivada. Regresa el volumen de un cil?ndro.
double Cilindro::CalcularVolumen() {
	return M_PI * pow(Radio, 2) * Altura;
}

//Declaraci?n de m?todos abstractos en clase derivada. Despliega datos de un cil?ndro.
void Cilindro::DesplegarVolumen() {
	std::cout << "\n--Datos del cil?ndro--\n\n";
	std::cout << "La medida del radio del cil?ndro es: " << Radio << "u.\n";
	std::cout << "La medida de la altura del cil?ndro es: " << Altura << "u.\n";
	std::cout << "El volumen del cil?ndro es: " << CalcularVolumen() << "u^3.\n";
}