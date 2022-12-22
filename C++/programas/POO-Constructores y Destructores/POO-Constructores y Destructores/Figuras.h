#pragma once
//Cabecera de clase padre Figuras.
class Figuras
{
	//Sin constructor.

	//Atributos protegidos de la clase padre.
	protected:
		float Base, Altura, a, p;

	//Métodos abstractos de la clase padre para clases derivadas.
	public:
		~Figuras(); //Destructor.
		virtual float Area() = 0;
		virtual float Perimetro() = 0;
		virtual void Resultado() {};
};

