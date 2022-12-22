#include <iostream> //Cabecera para entrada y salida de datos.
//#include <cstdio>

//Procedimiento estático que recibe números, los guarda en un arreglo y determina cúal es mayor y menor en el momento.
static void IngresarNumeros(short* Nums, short cantNums) {
	//Declaración e inicialización de variables.
	int i = 0, NMayor = 0, NMenor = 0;
	
	//Ciclo para ingresar valores en arreglo, si el valor es incorrecto al tipo del arreglo, no incrementa el contador i.
	do {
		//Ingreso de valor a variable.
		printf("%d. Digita un número: ", (i + 1)); std::cin >> Nums[i];

		if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
		{
			std::cout << "Error de formato. ";
			system("pause"); //Pausa el flujo del programa.
			std::cin.clear(); //Limpia el buffer de cin.
			//Ignora el resto de caracteres ingresados n cin hasta el próximo salto de línea.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
		{
			//Inicialización de variables en la primer iteración del ciclo.
			if (i == 0) {
				//Inicializa valor mayor y menor.
				NMayor = Nums[i];
				NMenor = Nums[i];
			}

			if (Nums[i] > NMayor) { NMayor = Nums[i]; } //Va actualizando cual es el número mayor y menor.
			if (Nums[i] < NMenor) { NMenor = Nums[i]; }

			i++; //Incrementa contador.
		}
	} while (i < cantNums);

	system("cls");
	//Despliega los valores ingresados al arreglo.
	std::cout << "Los números ingresados fueron:\n\n";
	for (i = 0; i < cantNums; i++) {
		printf("%d - %d\n", (i + 1), Nums[i]);
	}
	//Despliega número mayor y menor.
	printf("\nEl número mayor es %d, y el menor es %d.", NMayor, NMenor);

	system("pause"); //Pausa el flujo del programa.
}

int main()
{
    short cantNums;

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

	//Ingreso de valor a variable.
    std::cout << "¿Cuántos elementos tendrá el arreglo?: "; std::cin >> cantNums;

	if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		//Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		main(); //Llamada recursiva a main.
	}
	else
	{
		short* Nums = new short[cantNums]; //Declara arreglo puntero dinámico.
		IngresarNumeros(Nums, cantNums); //Llamada a procedimiento para determinar número mayor y menor de un arreglo.
	}
}