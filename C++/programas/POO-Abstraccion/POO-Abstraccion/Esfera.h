#include "Figuras.h" //Incluye cabecera de clase base.

//Cabecera de clase derivada de Figuras.
class Esfera : public Figuras
{
	//Atributos propios privados.
	private:
		double Radio;

	public:
		//Declara constructor y destructor público.
		Esfera(double radio); //Una forma de escribir los parámetros.
		~Esfera() {}; //Destructor.
		//Declara métodos de clase base.
		double CalcularVolumen();
		void DesplegarVolumen();
};
