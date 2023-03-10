#pragma once
#include "Figuras.h" //Cabecera de clase padre Figuras.

//Cabecera de clase derivada de Figuras.
class Rectangulo : public Figuras
{
	public:
		Rectangulo(float, float); //Constructor.
		~Rectangulo();			  //Destructor.
		//Declaraci?n de m?todos heredados de clase base.
		float Area();
		float Perimetro();
		void Resultado();
};