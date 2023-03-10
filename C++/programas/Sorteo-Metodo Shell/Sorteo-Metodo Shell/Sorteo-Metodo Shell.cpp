#include <iostream> //Cabecera para entrada y salida de datos.
#include <vector> //Cabecera para trabajar con vectores especialidados.

//Procedimiento est?tico que recibe sueldos, para luego ordenarlos por el m?todo Shell.
static void IngresoSueldo(std::vector<float> S, int cant) {
    //Declaraci?n e inicializaci?n de variables.
	int salto = cant / 2, i = 0, cont;
    float aux, Val;
    bool bandera;

	system("cls"); //Limpia la terminal.

	std::cout << "-Ordenamiento Shell-\n\n";
	std::cout << "Ingresa " << cant << " salarios:\n";
	while (i < cant) { //Mientras el contador sea menor a la cantidad total de elementos del vector, se repite el ciclo.
		//Ingreso de datos a variable.
		printf("%d- ", i + 1); std::cin >> Val;
		
		if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
		{
			std::cout << "Error de formato. ";
			system("pause"); //Pausa el flujo del programa.
			std::cin.clear(); //Limpia el buffer de cin.
			//Ignora el resto de caracteres ingresados en cin hasta el pr?ximo salto de l?nea.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
		{
			S.push_back(Val); //Agrega elemento al vector din?mico.
			i++; //Incrementa contador del ciclo while.
		}
	}

	//Ordenamiento Shell ascendente.
	while (salto > 0) {
		bandera = true; //Variable comienza en true.
		while (bandera != false) { //Entra al ciclo.
			bandera = false; //Variable vuelve a false.
			cont = 1; //Se inicializa el contador en 1.
			while (cont <= (S.size() - salto)) {// Mientras el contador sea menor a la longitud del arreglo...
				//Si el primer elemento es mayor al elemento a la mitad de la posici?n de arreglo, se intercambian valores.
				if (S[cont - 1] > S[(cont - 1) + salto]) {
					aux = S[(cont - 1) + salto];
					S[(cont - 1) + salto] = S[cont - 1];
					S[cont - 1] = aux;
					bandera = true; //Variable vuelve a true.
				}
				cont++; //Incrementa contador.
			}
		}
		salto /= 2;
	}

	system("cls"); //Limpia la terminal.

	//Despliegue de resultados.
	std::cout << "--Sueldos ordenados por el m?todo Shell--\n\n";
	for (i = 0; i < cant; i++) {
		std::cout << i + 1 << " - " << S[i] << "\n";
	}
}

int main()
{
    int cant;

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.

    std::cout << "?Cu?ntos elementos va a ingresar a la lista de sueldos?: "; std::cin >> cant; //Cantidad de elementos para el vector din?mico.

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
		std::vector<float> Sueldos; //Declara vector din?mico a partir de la cabecera "vector".
		IngresoSueldo(Sueldos, cant); //Llamada al procedimiento que recibir? los valores a ordenar.
	}
}