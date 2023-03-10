#include "Figuras.h" //Incluye cabecera de clase base.

//Cabecera de clase derivada de Figuras.
class Cubo : public Figuras
{
	//Atributos propios privados.
	private:
		double Lado;

	public:
		//Declara constructor y destructor p?blico.
		Cubo(double); //Alternativa de c?mo escribir los par?metros.
		~Cubo() {}; //Destructor.
		//M?todos abstractos.
		double CalcularVolumen();
		void DesplegarVolumen();
};
