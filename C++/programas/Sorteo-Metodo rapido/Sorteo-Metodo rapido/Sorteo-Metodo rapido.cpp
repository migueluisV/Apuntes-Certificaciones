#include <iostream> //Cabecera para entrada y salida de datos.
#include <vector> //Cabecera para trabajar con vectores especialidados.


static std::vector<int> Numeros; //Declaraci?n de vector est?tico entero.

//Procedimiento est?tico que recibe los valores a ordenar con el m?todo r?pido.
static void ValoresArreglo() {
    int Tam, LimI, LimS, i;

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.

	std::cout << "-Valores para generar un arreglo-\n\n";
	//Bloque try-catch para excepciones de formato de variables.
	try {
		//Ingreso de datos a variables.
		std::cout << "?De qu? tama?o quiere el arreglo (n?mero entero)?: "; std::cin >> Tam;
		if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
			throw 1;
		std::cout << "Ingresa el l?mite inferior de valores a ingresar en arreglo (n?mero entero): "; std::cin >> LimI;
		if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
			throw 1;
		std::cout << "Ingresa el l?mite superior de valores a ingresar en arreglo (n?mero entero): "; std::cin >> LimS;
		if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
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
		//Ignora el resto de caracteres ingresados en cin hasta el pr?ximo salto de l?nea.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		ValoresArreglo(); //Llamada recursiva a ValoresArreglo.
	}
}

//Procedimiento que ordena elementos de un arreglo con el m?todo r?pido.
static void SorteoRapido(int p, int u) {
	//Declaraci?n e inicializaci?n de variables.
	int i = p, j = u, central = (p + u) / 2, aux, pivote = Numeros[central];

	//Ordenamiento r?pido.
	//Ciclo que ordena los elementos del arreglo mientras i sea menor igual que j.
	do {
		while (Numeros[i] < pivote) { i++; } //Incrementa el contador siempre y cuando el elemento en las primeras posiciones sea menor al elemento central.
		while (Numeros[j] > pivote) { j--; } //Decrementa el contador siempre y cuando el elemento en las ?ltimas posiciones sea mayor al elemento central.
		if (i <= j) { //Ordena los elementos
			aux = Numeros[i];
			Numeros[i] = Numeros[j];
			Numeros[j] = aux;
			i++; //Incrementa contador.
			j--; //Decrementa contador.
		}
	} while (i <= j);

	//Condici?n de salida para procedimiento recursivo.
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

	//Establece par?metros para declarar un arreglo y rango de n?meros enteros que estar?n dentro de este arreglo.
	ValoresArreglo();

	std::cout << "-N?meros enteros generados aleatoriamente-\n\n";
	//Despliegue de resultados sin ordenar.
	Despliegue();

	//Llama al procedimiento que ordena los n?meros.
	SorteoRapido(0, Numeros.size() - 1);

	std::cout << "-\nN?meros enteros generados aleatoriamente ordenados-\n\n";
	//Despliegue de resultados ya ordenados.
	Despliegue();
}