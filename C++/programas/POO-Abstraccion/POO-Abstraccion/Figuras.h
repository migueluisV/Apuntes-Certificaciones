#pragma once

//Cabecera de clase base.
class Figuras
{
	public:
		//M?todos abstractos, definidos pero sin cuerpo.
		virtual double CalcularVolumen() = 0;
		virtual void DesplegarVolumen() {};
};