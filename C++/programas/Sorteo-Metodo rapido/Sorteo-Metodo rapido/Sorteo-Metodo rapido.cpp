#include <iostream> //Cabecera para entrada y salida de datos.
#include <vector> //Cabecera para trabajar con vectores especialidados.


static std::vector<int> Numeros; //Declaración de vector estático entero.

//Procedimiento estático que recibe los valores a ordenar con el método rápido.
static void ValoresArreglo() {
    int Tam, LimI, LimS, i;

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

	std::cout << "-Valores para generar un arreglo-\n\n";
	//Bloque try-catch para excepciones de formato de variables.
	try {
		//Ingreso de datos a variables.
		std::cout << "¿De qué tamaño quiere el arreglo (número entero)?: "; std::cin >> Tam;
		if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
			throw 1;
		std::cout << "Ingresa el límite inferior de valores a ingresar en arreglo (número entero): "; std::cin >> LimI;
		if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
			throw 1;
		std::cout << "Ingresa el límite superior de valores a ingresar en arreglo (número entero): "; std::cin >> LimS;
		if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
			throw 1;

		//Ingreso de valores aleatorios al vector dentro de un determinado rango.
		for (i = 0; i < Tam; i++) {
			Numeros.push_back(LimI + (rand() % LimS));
		}
	}
	catch (int x) {
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		//Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		ValoresArreglo(); //Llamada recursiva a ValoresArreglo.
	}
}

//Procedimiento que ordena elementos de un arreglo con el método rápido.
static void SorteoRapido(int p, int u) {
	//Declaración e inicialización de variables.
	int i = p, j = u, central = (p + u) / 2, aux, pivote = Numeros[central];

	//Ordenamiento rápido.
	//Ciclo que ordena los elementos del arreglo mientras i sea menor igual que j.
	do {
		while (Numeros[i] < pivote) { i++; } //Incrementa el contador siempre y cuando el elemento en las primeras posiciones sea menor al elemento central.
		while (Numeros[j] > pivote) { j--; } //Decrementa el contador siempre y cuando el elemento en las últimas posiciones sea mayor al elemento central.
		if (i <= j) { //Ordena los elementos
			aux = Numeros[i];
			Numeros[i] = Numeros[j];
			Numeros[j] = aux;
			i++; //Incrementa contador.
			j--; //Decrementa contador.
		}
	} while (i <= j);

	//Condición de salida para procedimiento recursivo.
	if (p < j)
		SorteoRapido(p, j);
	if (i < u)
		SorteoRapido(i, u);
}

static void Despliegue() {
	int i;

	//Despliegue de resultados.
	for (i = 0; i < Numeros.size(); i++) {
		printf("%d - %d\n", i + 1, Numeros[i]);
	}
}

int main()
{
	int i;

	//Establece parámetros para declarar un arreglo y rango de números enteros que estarán dentro de este arreglo.
	ValoresArreglo();

	std::cout << "-Números enteros generados aleatoriamente-\n\n";
	//Despliegue de resultados sin ordenar.
	Despliegue();

	//Llama al procedimiento que ordena los números.
	SorteoRapido(0, Numeros.size() - 1);

	std::cout << "-\nNúmeros enteros generados aleatoriamente ordenados-\n\n";
	//Despliegue de resultados ya ordenados.
	Despliegue();
}