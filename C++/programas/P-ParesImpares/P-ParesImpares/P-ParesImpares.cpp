#include <iostream> //Cabecera para entrada y salida de datos.
//#include <cstdio>

//Función estática que regresa texto en caso de que número, pasado como parámetro, sea par o impar.
static std::string ParImpar(int Num) {
	if ((Num % 2) == 0)
		return "es par.";
	else
		return "es impar.";
}

int main()
{
	int Num;
	short Op;

	std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

	//Ciclo que solicita un número y despliega si es par o impar, termina cuando el usuario indique que ya no quiere seguir ingresando números.
	do {
		system("cls"); //Limpia la terminal.

		//Ingreso de valor a variable.
		std::cout << "Ingresa un número: "; std::cin >> Num;

		if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
		{
			std::cout << "Error de formato. ";
			system("pause"); //Pausa el flujo del programa.
			std::cin.clear(); //Limpia el buffer de cin.
			//Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			Op = 1; //Continúa el ciclo.
		}
		else {
			//Despliegue de resultado.
			std::cout << "El número ingresado " + ParImpar(Num) + "\n";
			
			//Pregunta si desea continuar el ciclo.
			std::cout << "\n¿Desea ingresar otro número? Si[1]: "; std::cin >> Op;
		}
	} while (Op == 1);
}