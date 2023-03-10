#include "Figuras.h" //Incluye cabecera de clase base.

//Cabecera de clase derivada de Figuras.
class Esfera : public Figuras
{
	//Atributos propios privados.
	private:
		double Radio;

	public:
		//Declara constructor y destructor p?blico.
		Esfera(double radio); //Una forma de escribir los par?metros.
		~Esfera() {}; //Destructor.
		//Declara m?todos de clase base.
		double CalcularVolumen();
		void DesplegarVolumen();
};
