#include "Triangulo.h" //Cabecera de clase Triangulo
#include <iostream> //Cabecera para entrada y salida de datos.

Triangulo::Triangulo(float base, float altura) { //Inicialización de atributos protegidos por medio de constructor.
	Base = base;
	Altura = altura;
}

Triangulo::~Triangulo() { //Despliega un mensaje por eliminación de objeto.
	std::cout << "\nSe ha eliminado el objeto Triangulo.\n";
}

//Función que regresa el área de un triángulo.
float Triangulo::Area() {
	return a = (Base * Altura) / 2;
}

//Función que regresa el perímetro de un triángulo.
float Triangulo::Perimetro() {
	if (Base != Altura)
		return p = (Altura * 2) + Base;
	return p = Base * 3;
}

//Procedimiento que despliega información de un triángulo.
void Triangulo::Resultado() {
	std::cout << "\n--Datos del triángulo--\n\n";
	std::cout << "Base del triángulo: " << Base << "u.\n";
	std::cout << "Altura del triángulo: " << Altura << "u.\n";
	std::cout << "Área del triángulo: " << a << "u^2.\n";
	std::cout << "Perímetro del triángulo: " << p << "u.\n\n";
}