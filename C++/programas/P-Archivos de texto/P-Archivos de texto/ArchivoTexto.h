#include <iostream> //Cabecera para entrada y salida de datos.

#pragma once
class ArchivoTexto
{
	public:
		//M?todos para crear y leer un archivo de texto.
		void CrearArchivo(std::string Nombre);
		void LeerArchivo(std::string Nombre);
		~ArchivoTexto(); //Destructor.
};