#pragma once
#include "Figuras.h" //Cabecera de clase padre Figuras.

//Cabecera de clase derivada de Figuras.
class Triangulo : public Figuras
{
	public:
		Triangulo(float, float); //Constructor.
		~Triangulo();			  //Destructor.
		//Declaración de métodos heredados de clase base.
		float Area();
		float Perimetro();
		void Resultado();
};

