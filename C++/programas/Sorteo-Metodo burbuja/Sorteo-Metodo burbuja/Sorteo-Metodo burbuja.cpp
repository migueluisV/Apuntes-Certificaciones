#include <iostream> //Cabecera para entrada y salida de datos.

//Procedimiento estático que ordena nombres con el método burbuja simple.
static void BurbujaSimple() {
	std::string Nombres[10]; //Declara arreglo string de 10 elementos.
	std::string aux; //Variable auxiliar para el ordenamiento.
	int i, j; //Variables para los ciclos de ordenamiento.

	system("cls"); //Limpia la terminal.

	std::cout << "Ordenamiento de burbuja simple\n\n";
	std::cout << "Ingresa 10 nombres:\n";
	//Ingreso de datos al arreglo.
	for (i = 0; i < 10; i++) {
		printf("%d- ", (i + 1)); std::cin >> Nombres[i];
	}

	//Ordenamiento de burbuja simple descendente.
	for (i = 0; i < 10; i++) { //Ciclo para repetir el ordenamiento el número de elementos del arreglo a ordenar.
		for (j = 0; j < 9; j++) { //Ciclo para comaprar los elementos del arreglo uno a uno.
			//Compara el elemento con índice n con el n + 1, si no está ordenado alfabéticamente, ordena los elementos.
			if (Nombres[j].compare(Nombres[j + 1]) < 0) {
				aux = Nombres[j];
				Nombres[j] = Nombres[j + 1];
				Nombres[j + 1] = aux;
			}
		}
	}

	//Despliegue de resultados
	std::cout << "\nNombres ordenados descendentemente:\n";
	for (i = 0; i < 10; i++) {
		printf("%d - %s\n", (i + 1), Nombres[i].c_str());
	}

	system("pause"); //Pausa el flujo del programa.;
}

//Procedimiento estático que ordena calificaciones con el método burbuja mejorada.
static void BurbujaMejorada() {
	int i, j, cont = 0; //Variables para los ciclos de ordenamiento.
	float aux; //Variable auxiliar para el ordenamiento.
	bool bandera = true; //Variable auxiliar para volver más rápido el ordenamiento.
	float Calificaciones[10]; //Declara arreglo float de 10 elementos.

	system("cls"); //Limpia la terminal.

	std::cout << "Ordenamiento de burbuja simple\n\n";
	std::cout << "Ingresa 10 números:\n";

	//Ciclo que ingresa los datos a ordenar en el arreglo.
	do {
		//Ingreso de datos al arreglo.
		printf("%d- ", cont + 1); std::cin >> Calificaciones[cont];

		if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
		{
			std::cout << "Error de formato. ";
			system("pause"); //Pausa el flujo del programa.
			std::cin.clear(); //Limpia el buffer de cin.
			//Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
			cont++; //Incrementa contador.
	} while (cont <= 9);

	//Ordenamiento de burbuja mejorado descendente.
	//Ciclo para repetir el ordenamiento el número de elementos del arreglo a ordena y si la variable bandera es true.
	for (i = 0; (i < 9) && (bandera == true); i++) {
		bandera = false;
		for (j = 0; j < 10 - i - 1; j++) { //Ciclo para comparar los elementos del arreglo uno a uno.
			 //Compara el elemento con índice n con el n + 1, si no está ordenado alfabeticamente, ordena los elementos.
			if (Calificaciones[j] < Calificaciones[j + 1]) {
				bandera = true; //La variable pasa a true.
				aux = Calificaciones[j];
				Calificaciones[j] = Calificaciones[j + 1];
				Calificaciones[j + 1] = aux;
			}
		}
	}

	//Despliegue de resultados
	std::cout << "\nNúmeros ordenados descendentemente:\n";
	for (i = 0; i < 10; i++) {
		printf("%d - %f\n", (i + 1), Calificaciones[i]);
	}

	system("pause"); //Pausa el flujo del programa.
}

//Procedimiento estático que ordena nombres con el método burbuja optimizada.
static void BurbujaOptimizada() {
	std::string NombresMascotas[10]; //Declara arreglo string de 10 elementos.
	std::string aux; //Variable auxiliar para el ordenamiento.
	bool ordenado; //Variable auxiliar para volver más rápido el ordenamiento.
	int i, j; //Variables para los ciclos de ordenamiento.

	system("cls"); //Limpia la terminal.

	std::cout << "Ordenamiento de burbuja optimizado\n\n";
	std::cout << "Ingresa 10 nombres para mascotas:\n";
	//Ingreso de datos a arreglo.
	for (i = 0; i < 10; i++) {
		printf("%d- ", (i + 1)); std::cin >> NombresMascotas[i];
	}

	//Ordenamiento de burbuja optimizado ascendente.
	i = 1;
	//Ciclo para repetir el ordenamiento el número de elementos del arreglo
		//a ordenar y si la variable ordenado es distinta a true, es decir, mientras el arreglo no esté ordenado.
	do {
		i++;
		ordenado = true;
		for (j = 0; j < 9; j++) { //Ciclo para comparar los elementos del arreglo uno a uno.
			//Compara el elemento con índice n con el n + 1, si no está ordenado alfabeticamente, ordena los elementos.
			if (NombresMascotas[j].compare(NombresMascotas[j + 1]) > 0) {
				ordenado = false; //La variable auxiliar pasa a false.
				aux = NombresMascotas[j];
				NombresMascotas[j] = NombresMascotas[j + 1];
				NombresMascotas[j + 1] = aux;
			}
		}
	} while (i < 10 && ordenado != true);

	//Despliegue de resultados
	std::cout << "\nNombres ordenados ascendentemente:\n";
	for (i = 0; i < 10; i++) {
		printf("%d - %s\n", (i + 1), NombresMascotas[i].c_str());
	}

	system("pause"); //Pausa el flujo del programa.;
}

int main()
{
    int Op;

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

	//Despliega menú de opciones para seleccionar el tipo de ordenamiento de burbuja.
    std::cout << "Ordenamiento de burbuja y sus tipos\n\n";
    std::cout << "-Menú-\n1) Burbuja simple.\n2) Burbuja mejorada.\n3) Burbuja optimizada.\n4) Salir.\n";
    std::cout << "Selecciona una opción: "; std::cin >> Op;

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
		//Selectiva switch para saltar al procedimiento seleccionado.
		switch (Op) {
			case 1:
				BurbujaSimple();
				break;
			case 2:
				BurbujaMejorada();
				break;
			case 3:
				BurbujaOptimizada();
				break;
			case 4:
				exit(-1); //Salida del programa
				break;
			default:
				std::cout << "Selecciona una opción del menú mostrado. ";
				system("pause"); //Pausa el flujo del programa.
				main(); //Llamada recursiva a main.
		}
	}
}