#include "Figuras.h" //Incluye cabecera de clase base.

//Cabecera de clase derivada de Figuras.
class Cilindro : public Figuras
{
	//Atributos propios privados.
	private:
		double Radio, Altura;

	public:
		Cilindro(double radio, double altura); //Una forma de escribir los parámetros.
		~Cilindro() {}; //Destructor
		//Métodos abstractos.
		double CalcularVolumen();
		void DesplegarVolumen();
};
