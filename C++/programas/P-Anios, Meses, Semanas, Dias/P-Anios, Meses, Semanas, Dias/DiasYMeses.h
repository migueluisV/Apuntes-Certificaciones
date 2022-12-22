#ifndef DiasYMeses_h
#define DiasYMeses_h //Clave de preprocesamiento en caso de que la clase ya exista.

//Cabecera de clase DiasYMeses.
class DiasYMeses
{
	//Atributos y método privado.
	private:
		int Anios, Dias, Semanas, Meses;
		void Calculo();

	public:
		void Iniciar();
		void Despliegue();
};

#endif