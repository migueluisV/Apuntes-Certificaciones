#define _USE_MATH_DEFINES //Define el uso de constantes matemáticas.
#include "Esfera.h" //Cabecera de clase Esfera.
#include <math.h> //Cabecera para trabajar con funciones matemáticas.
#include <iostream> //Cabecera para entrada y salida de datos.

//Inicialización de atributos por medio del constructor.
Esfera::Esfera(double radio) { //Una forma de inicializar el constructor.
	Radio = radio;
}

//Declaración de métodos abstractos en clase derivada. Regresa volumen de una esfera.
double Esfera::CalcularVolumen() {
	return (4 * M_PI * pow(Radio, 3)) / 3;
}

//Declaración de métodos abstractos en clase derivada. Despliefa datos de una esfera.
void Esfera::DesplegarVolumen() {
	std::cout << "\n--Datos del esfera--\n\n";
	std::cout << "La medida del radio de la esfera es: " << Radio << "u.\n";
	std::cout << "El volumen de la esfera es: " << CalcularVolumen() << "u^3.\n";
}