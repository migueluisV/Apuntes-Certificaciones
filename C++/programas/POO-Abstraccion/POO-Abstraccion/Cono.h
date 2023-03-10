#include "Figuras.h" //Incluye cabecera de clase base.

//Cabecera de clase derivada de Figuras.
class Cono : public Figuras
{
	//Atributos propios privados.
	private:
		double Radio, Altura;

	public:
		//Declara constructor y destructor p?blico.
		Cono(double, double); //Alternativa de c?mo escribir los par?metros.
		~Cono() {}; //Destructor.
		//M?todos abstractos
		double CalcularVolumen();
		void DesplegarVolumen();
};
