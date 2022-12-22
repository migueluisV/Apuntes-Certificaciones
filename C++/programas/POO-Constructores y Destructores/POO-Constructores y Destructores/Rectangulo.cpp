#include "Rectangulo.h" //Cabecera de clase Rectangulo.
#include <iostream> //Cabecera para entrada y salida de datos.

Rectangulo::Rectangulo(float base, float altura) { //Inicialización de atributos protegidos por medio de constructor.
	Base = base;
	Altura = altura;
}

Rectangulo::~Rectangulo() { //Despliega un mensaje por eliminación de objeto.
	std::cout << "\nSe ha eliminado el objeto Rectangulo.\n";
}

//Función que rgresa el área de un rectángulo.
float Rectangulo::Area() {
	return a = Base * Altura;
}

//Función que regresa el perímetro de un rectángulo.
float Rectangulo::Perimetro() {
	return p = (Base + Altura) * 2;
}

//Procedimiento que despliega información de un rectángulo.
void Rectangulo::Resultado() {
	std::cout << "\n--Datos del rectángulo--\n\n";
	std::cout << "Base del rectángulo: " << Base << "u.\n";
	std::cout << "Altura del rectángulo: " << Altura << "u.\n";
	std::cout << "Área del rectángulo: " << a << "u^2.\n";
	std::cout << "Perímetro del rectángulo: " << p << "u.\n\n";
}