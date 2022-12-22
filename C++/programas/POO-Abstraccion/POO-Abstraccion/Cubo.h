#include "Figuras.h" //Incluye cabecera de clase base.

//Cabecera de clase derivada de Figuras.
class Cubo : public Figuras
{
	//Atributos propios privados.
	private:
		double Lado;

	public:
		//Declara constructor y destructor público.
		Cubo(double); //Alternativa de cómo escribir los parámetros.
		~Cubo() {}; //Destructor.
		//Métodos abstractos.
		double CalcularVolumen();
		void DesplegarVolumen();
};
