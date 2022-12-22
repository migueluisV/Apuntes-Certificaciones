#pragma once
#include <iostream> //Cabecera para entrada y salida de datos.

class CaliAl
{
	//Atributos y método privado.
	private:
		short CalVali = 0, CalInvali = 0, CaliApro = 0, CaliRepro = 0;
		float Prom, AcumCali = 0, CaliMax = 0, CaliMen;
		//Método que despliega los elementos de los arreglos.
		void Despliegue(float cal[], std::string nom[]);

	public:
		//Método que ingresa elementos a los arreglos.
		void IngresoDatos(float cal[], std::string nom[], int cont);
};