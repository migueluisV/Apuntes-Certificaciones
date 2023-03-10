#include <iostream> //Cabecera para entrada y salida de datos.
//#include <cstdio>

//Procedimiento est?tico que recibe n?meros, los guarda en un arreglo y determina c?al es mayor y menor en el momento.
static void IngresarNumeros(short* Nums, short cantNums) {
	//Declaraci?n e inicializaci?n de variables.
	int i = 0, NMayor = 0, NMenor = 0;
	
	//Ciclo para ingresar valores en arreglo, si el valor es incorrecto al tipo del arreglo, no incrementa el contador i.
	do {
		//Ingreso de valor a variable.
		printf("%d. Digita un n?mero: ", (i + 1)); std::cin >> Nums[i];

		if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
		{
			std::cout << "Error de formato. ";
			system("pause"); //Pausa el flujo del programa.
			std::cin.clear(); //Limpia el buffer de cin.
			//Ignora el resto de caracteres ingresados n cin hasta el pr?ximo salto de l?nea.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
		{
			//Inicializaci?n de variables en la primer iteraci?n del ciclo.
			if (i == 0) {
				//Inicializa valor mayor y menor.
				NMayor = Nums[i];
				NMenor = Nums[i];
			}

			if (Nums[i] > NMayor) { NMayor = Nums[i]; } //Va actualizando cual es el n?mero mayor y menor.
			if (Nums[i] < NMenor) { NMenor = Nums[i]; }

			i++; //Incrementa contador.
		}
	} while (i < cantNums);

	system("cls");
	//Despliega los valores ingresados al arreglo.
	std::cout << "Los n?meros ingresados fueron:\n\n";
	for (i = 0; i < cantNums; i++) {
		printf("%d - %d\n", (i + 1), Nums[i]);
	}
	//Despliega n?mero mayor y menor.
	printf("\nEl n?mero mayor es %d, y el menor es %d.", NMayor, NMenor);

	system("pause"); //Pausa el flujo del programa.
}

int main()
{
    short cantNums;

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.

	//Ingreso de valor a variable.
    std::cout << "?Cu?ntos elementos tendr? el arreglo?: "; std::cin >> cantNums;

	if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		//Ignora el resto de caracteres ingresados en cin hasta el pr?ximo salto de l?nea.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		main(); //Llamada recursiva a main.
	}
	else
	{
		short* Nums = new short[cantNums]; //Declara arreglo puntero din?mico.
		IngresarNumeros(Nums, cantNums); //Llamada a procedimiento para determinar n?mero mayor y menor de un arreglo.
	}
}