#pragma once
//Cabecera de la clase.
class Triangulo
{
	public:
		float Perimetro(float l); //M?todo sobrecargado.
		float Perimetro(float base, float altura); //M?todo sobrecargado.
		float Perimetro(float l1, float l2, float l3); //M?todo sobrecargado.
		void Resultados(float p1, float p2, float p3); //M?todo que muestra resultados de calculos.
		~Triangulo(); //Destructor.
};

