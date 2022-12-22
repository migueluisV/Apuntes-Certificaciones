#include "ArchivoTexto.h" //Cabecera de clase ArchivoTexto.
#include <fstream> //Biblioteca para trabajar con el control de archivos.
#include <string> //Biblioteca para tener métodos especializados de cadenas.

//Procedimiento que crea y escribe contenido en un archivo de texto.
void ArchivoTexto::CrearArchivo(std::string Nombre)
{
	std::ofstream Archivo; //Declara objeto ofstream de fstream.
	std::string linea; //Variable que recibe lo que se va a escribir en el archivo.

	system("cls"); //Limpia la terminal.

	Archivo.open("..\\Archivos\\" + Nombre); //Crea y abre el archivo en el directorio Archivos en la carpeta de esta solución.

	std::cout << "-Escribe el contenido del fichero. Finalice cada línea con un ENTER. Finalice la escritura escribiendo SALIR-\n\n";
	do {
		std::cin >> linea; //Se recibe valor a escribir en el archivo.
		if (linea != "SALIR") //Si se escribe SALIR en consola, se termina la escritura del archivo.
			Archivo << linea << "\n"; //Se agrega la variable linea al contenido del archivo.
	} while (linea != "SALIR");

	Archivo.close(); //Cierra el objeto ofstream.
}

//Procedimiento que lee el contenido de un archivo.
void ArchivoTexto::LeerArchivo(std::string Nombre)
{
	std::ifstream Archivo; //Declara objeto ifstream de fstream.
	std::string linea; //Variable que recibe línea a línea el contenido de un archivo y lo despliega.

	system("cls"); //Limpia la terminal.

	Archivo.open("..\\Archivos\\" + Nombre); //Crea y abre el archivo en el directorio Archivos en la carpeta de esta solución.

	std::cout << "Contenido de " << Nombre << "-\n\n";
	while (std::getline(Archivo, linea)) { //Mientras se obtengan líneas de texto del objeto ifstream, el ciclo continúa.
		std::cout << linea << "\n"; //Despliega el contenido del archivo de texto.
	}

	Archivo.close(); //Cierra el objeto ifstream.
}

//Destructor.
ArchivoTexto::~ArchivoTexto()
{
	//Despliega mensaje de destrucción de objeto ArchivoTexto.
	std::cout << "\n\nObjeto ArchivoTexto destruido.\n";
}