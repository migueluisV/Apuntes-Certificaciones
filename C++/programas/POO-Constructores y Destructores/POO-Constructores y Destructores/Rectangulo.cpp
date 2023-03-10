#include "Rectangulo.h" //Cabecera de clase Rectangulo.
#include <iostream> //Cabecera para entrada y salida de datos.

Rectangulo::Rectangulo(float base, float altura) { //Inicializaci?n de atributos protegidos por medio de constructor.
	Base = base;
	Altura = altura;
}

Rectangulo::~Rectangulo() { //Despliega un mensaje por eliminaci?n de objeto.
	std::cout << "\nSe ha eliminado el objeto Rectangulo.\n";
}

//Funci?n que rgresa el ?rea de un rect?ngulo.
float Rectangulo::Area() {
	return a = Base * Altura;
}

//Funci?n que regresa el per?metro de un rect?ngulo.
float Rectangulo::Perimetro() {
	return p = (Base + Altura) * 2;
}

//Procedimiento que despliega informaci?n de un rect?ngulo.
void Rectangulo::Resultado() {
	std::cout << "\n--Datos del rect?ngulo--\n\n";
	std::cout << "Base del rect?ngulo: " << Base << "u.\n";
	std::cout << "Altura del rect?ngulo: " << Altura << "u.\n";
	std::cout << "?rea del rect?ngulo: " << a << "u^2.\n";
	std::cout << "Per?metro del rect?ngulo: " << p << "u.\n\n";
}