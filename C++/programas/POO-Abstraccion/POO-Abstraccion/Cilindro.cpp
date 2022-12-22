#define _USE_MATH_DEFINES //Define el uso de constantes matemáticas.
#include "Cilindro.h" //Cabecera de clase Cilindro.
#include <math.h> //Cabecera para trabajar con funciones matemáticas.
#include <iostream> //Cabecera para entrada y salida de datos.

//Inicialización de atributos por medio del constructor.
Cilindro::Cilindro(double radio, double altura) { //Una forma de inicializar el constructor.
	Radio = radio;
	Altura = altura;
}

//Declaración de métodos abstractos en clase derivada. Regresa el volumen de un cilíndro.
double Cilindro::CalcularVolumen() {
	return M_PI * pow(Radio, 2) * Altura;
}

//Declaración de métodos abstractos en clase derivada. Despliega datos de un cilíndro.
void Cilindro::DesplegarVolumen() {
	std::cout << "\n--Datos del cilíndro--\n\n";
	std::cout << "La medida del radio del cilíndro es: " << Radio << "u.\n";
	std::cout << "La medida de la altura del cilíndro es: " << Altura << "u.\n";
	std::cout << "El volumen del cilíndro es: " << CalcularVolumen() << "u^3.\n";
}