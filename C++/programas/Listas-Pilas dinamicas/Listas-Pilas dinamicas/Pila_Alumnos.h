#include <stack> //Cabecera para trabajar con pilas dinámicas.
#include <iostream> //Cabecera para entrada y salida de datos.

#pragma once
class Pila_Alumnos
{
	public:
		//Declara método que despliega un menú de opciones para trabajar con pilas.
		void Menu(std::stack<double> Prom, std::stack<std::string> Alum);

	private:
		//Declara métodos privados que son las acciones disponibles para hacer con pilas.
		void AgregarAlumnos(std::stack<double> Prom, std::stack<std::string> Alum);
		void EliminarAlumno(std::stack<double> Prom, std::stack<std::string> Alum);
		void VaciarPila(std::stack<double> Prom, std::stack<std::string> Alum);
		void BuscarAlumno(std::stack<double> Prom, std::stack<std::string> Alum);
		void RecorrerAlumno(std::stack<double> Prom, std::stack<std::string> Alum);
};