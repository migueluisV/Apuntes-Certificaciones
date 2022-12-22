#include <iostream> //Cabecera para entrada y salida de datos.
//#include <cstdio>

//Función estática que regresa la cantidad de días transcurridos en n años.
static int DiasVividos(short Edad) {
    return Edad * 365;
}

//Procedimiento estático que recibe una cantidad de años vivios, y despliega la cantidad de días en esos años.
static void IngresoEdad() {
	short Edad;

	system("cls"); //Limpia la terminal.

	std::cout << "Ingresa tu edad: "; std::cin >> Edad;

	if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato.\n";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		//Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		IngresoEdad(); //Llamada recursiva a IngresoEdad.
	}
	else
		//Utilización de "printf", para imprimir cadenas con un formato dado por variables.
		printf("Has vivido %d d%cas.", DiasVividos(Edad), char(161));
}

int main()
{
    IngresoEdad(); //Llamada a procedimientoq ue recibe una edad y despliega los días dentro de esa edad.
}