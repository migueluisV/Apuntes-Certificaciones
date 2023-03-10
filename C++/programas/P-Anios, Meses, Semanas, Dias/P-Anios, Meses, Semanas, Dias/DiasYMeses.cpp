#include "DiasYMeses.h" //Cabecera de clase DiasYMeses.
#include <iostream> //Cabecera para entrada y salida de datos.

//Procedimiento que calcula las semanas, meses y a?os de un n?mero que representa d?as.
void DiasYMeses::Calculo()
{
	Anios = Dias / 365;
	Meses = Dias / 30;
	Semanas = (Dias % 30) / 7;
}

//Procedimiento que recibe un n?mero entero que representa d?as.
void DiasYMeses::Iniciar()
{
	system("cls");

	std::cout << "Ingresa un n?mero entero para trabajarlo como d?as: "; std::cin >> Dias;

	if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato.\n";
		system("pause");
		std::cin.clear(); //Limpia el buffer de cin.
		//Ignora el resto de caracteres ingresados en cin hasta el pr?ximo salto de l?nea.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		Iniciar(); //Llamada recursiva a Iniciar.
	}
	else
		Calculo(); //Llamada a procedimiento que calcula componentes de un n?mero que representa d?as/
}

//Procedimiento que despliega los a?os, meses y semanas de una cantidad de d?as transcurridos.
void DiasYMeses::Despliegue()
{
	std::cout << Dias << " d?as son: " << Anios << " a?os, " << Meses << " meses, " << Semanas << " semanas y " << (Dias % 30 / 7) << " d?as.";
}