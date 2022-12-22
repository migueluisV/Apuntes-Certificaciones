#pragma once
//Cabecera de la clase.
class Triangulo
{
	public:
		float Perimetro(float l); //Método sobrecargado.
		float Perimetro(float base, float altura); //Método sobrecargado.
		float Perimetro(float l1, float l2, float l3); //Método sobrecargado.
		void Resultados(float p1, float p2, float p3); //Método que muestra resultados de calculos.
		~Triangulo(); //Destructor.
};

