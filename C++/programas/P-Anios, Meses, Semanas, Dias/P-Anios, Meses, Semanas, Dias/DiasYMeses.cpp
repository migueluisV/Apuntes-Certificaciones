#include "DiasYMeses.h" //Cabecera de clase DiasYMeses.
#include <iostream> //Cabecera para entrada y salida de datos.

//Procedimiento que calcula las semanas, meses y años de un número que representa días.
void DiasYMeses::Calculo()
{
	Anios = Dias / 365;
	Meses = Dias / 30;
	Semanas = (Dias % 30) / 7;
}

//Procedimiento que recibe un número entero que representa días.
void DiasYMeses::Iniciar()
{
	system("cls");

	std::cout << "Ingresa un número entero para trabajarlo como días: "; std::cin >> Dias;

	if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato.\n";
		system("pause");
		std::cin.clear(); //Limpia el buffer de cin.
		//Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		Iniciar(); //Llamada recursiva a Iniciar.
	}
	else
		Calculo(); //Llamada a procedimiento que calcula componentes de un número que representa días/
}

//Procedimiento que despliega los años, meses y semanas de una cantidad de días transcurridos.
void DiasYMeses::Despliegue()
{
	std::cout << Dias << " días son: " << Anios << " años, " << Meses << " meses, " << Semanas << " semanas y " << (Dias % 30 / 7) << " días.";
}