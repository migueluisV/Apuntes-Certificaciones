#include <iostream> //Cabecera para entrada y salida de datos.
//#include <cstdio>

//Funci?n est?tica que regresa texto en caso de que n?mero, pasado como par?metro, sea par o impar.
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

	std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.

	//Ciclo que solicita un n?mero y despliega si es par o impar, termina cuando el usuario indique que ya no quiere seguir ingresando n?meros.
	do {
		system("cls"); //Limpia la terminal.

		//Ingreso de valor a variable.
		std::cout << "Ingresa un n?mero: "; std::cin >> Num;

		if (std::cin.fail()) //Si se ingres? un tipo de dato incorrecto en la variable.
		{
			std::cout << "Error de formato. ";
			system("pause"); //Pausa el flujo del programa.
			std::cin.clear(); //Limpia el buffer de cin.
			//Ignora el resto de caracteres ingresados en cin hasta el pr?ximo salto de l?nea.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			Op = 1; //Contin?a el ciclo.
		}
		else {
			//Despliegue de resultado.
			std::cout << "El n?mero ingresado " + ParImpar(Num) + "\n";
			
			//Pregunta si desea continuar el ciclo.
			std::cout << "\n?Desea ingresar otro n?mero? Si[1]: "; std::cin >> Op;
		}
	} while (Op == 1);
}