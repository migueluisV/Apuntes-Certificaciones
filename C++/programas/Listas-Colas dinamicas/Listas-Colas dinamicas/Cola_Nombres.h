#pragma once
#include <queue> //Cabecera para trabajar con colas din?micas Queue.
#include <iostream> //Cabecera para entrada y salida de datos.

class Cola_Nombres {
	//M?todos que despliega men? de opciones para manipular la cola.
	public:
		void Menu(std::queue<std::string> Nombres);

	//M?todos que manipulan a la cola.
	private:
		void RecorrerNombres(std::queue<std::string> Nombres);
		void BuscarNombre(std::queue<std::string> Nombres);
		void VaciarCola(std::queue<std::string> Nombres);
		void EliminarNombre(std::queue<std::string> Nombres);
		void AgregarNombre(std::queue<std::string> Nombres);
};

