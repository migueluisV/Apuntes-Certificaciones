#include "CaliAl.h" //Cabecera de clase CaliAl.
#include <iostream> //Cabecera para entrada y salida de datos.

//Método que ingresa elementos a los arreglos.
void CaliAl::IngresoDatos(float cal[], std::string nom[], int cont)
{
	int i;

	if (cont == 5) //Condición para salir del método recursivo.
	{
		Prom = AcumCali / 5; //Asignación de valor a variable.
		for (i = 0; i < 5; i++) //Clasificación de datos ingresados.
		{
			if (cal[i] > CaliMax)
				CaliMax = cal[i]; //Asignación de valor a variable.
		}

		CaliMen = CaliMax; //Asignación de valor a variable.
		for (i = 0; i < 5; i++)
		{
			if (cal[i] < CaliMen)
				CaliMen = cal[i]; //Asignación de valor a variable.
		}

		Despliegue(cal, nom); //Llamada a método que despliega elementos del arreglo y datos característicos.
	}
	else
	{
		//Ingreso de dato a variable.
		std::cout << (cont + 1) << ". Ingresa una calificaci" << char(162) << "n: "; std::cin >> cal[cont];
		if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
		{
			std::cout << "Error de formato.\n";
			system("pause");
			std::cin.clear(); //Limpia el buffer de cin.
			//Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			IngresoDatos(cal, nom, cont); //Llamada recursiva a IngresoDatos.
		}
		else
		{
			//Ingreso de dato a variable.
			std::cout << (cont + 1) << ". Ingresa un nombre: "; std::cin >> nom[cont];

			//Clasificación de datos ingresados.
			AcumCali += cal[cont];
			if (cal[cont] > 0.0 && cal[cont] <= 10.0)
			{
				CalVali++;
				if (cal[cont] > 6.0 && cal[cont] <= 10.0)
					CaliApro++;
				else if (cal[cont] <= 6.0 && cal[cont] > 0.0)
					CaliRepro++;
			}
			else
				CalInvali++;

			cont++; //Incrementa contador.
			IngresoDatos(cal, nom, cont); //Llamada recursiva a IngresoDatos.
		}
	}
}

//Método que despliega los elementos de los arreglos.
void CaliAl::Despliegue(float cal[], std::string nom[])
{
	int i;

	//Despliegue de elementos del arreglo.
	std::cout << "\nLos alumnos ingresados son:\n\n";
	for (i = 0; i < 5; i++)
	{
		std::cout << (i + 1) << " - " << nom[i] << ", con calificaci" << char(162) << "n de " << cal[i] << ".\n";
	}

	//Despliegue de datos característicos del arreglo.
	std::cout << "Hubo un total de " << CalVali << " calificaciones v" << char(160) << "lidas y " << CalInvali << " inv" << char(160) << "lidas.\n";
	std::cout << "Hubo un total de " << CaliApro << " calificaciones aprobatorias y " << CaliRepro << " reprobatorias.\n";
	std::cout << "La calificaci" << char(162) << "n mayor fue " << CaliMax << " y la menor es " << CaliMen << ".\n";
	std::cout << "El promedio es de " << Prom << ".";
}