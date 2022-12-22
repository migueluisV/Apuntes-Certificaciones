#include "Figuras.h" //Incluye cabecera de clase base.

//Cabecera de clase derivada de Figuras.
class Cono : public Figuras
{
	//Atributos propios privados.
	private:
		double Radio, Altura;

	public:
		//Declara constructor y destructor público.
		Cono(double, double); //Alternativa de cómo escribir los parámetros.
		~Cono() {}; //Destructor.
		//Métodos abstractos
		double CalcularVolumen();
		void DesplegarVolumen();
};
