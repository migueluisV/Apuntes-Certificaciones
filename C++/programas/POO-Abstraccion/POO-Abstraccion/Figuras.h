#pragma once

//Cabecera de clase base.
class Figuras
{
	public:
		//Métodos abstractos, definidos pero sin cuerpo.
		virtual double CalcularVolumen() = 0;
		virtual void DesplegarVolumen() {};
};