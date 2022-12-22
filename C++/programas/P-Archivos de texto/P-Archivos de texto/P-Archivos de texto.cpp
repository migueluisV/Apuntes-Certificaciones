#include <iostream> //Cabecera para entrada y salida de datos.
#include <vector> //Cabecera para trabajar con vectores dinámicos.
#include <boost/filesystem.hpp> //Cabecera para trabajar con directorios y archivos.
#include "ArchivoTexto.h"; //Cabecera de clase ArchivoTexto.

std::vector<std::string> archivos; //Declara objeto vector global.

//Procedimiento que asigna lista de archivos a vector y lo despliega.
static void ListaArchivos(const std::string& a_carpeta)
{
	boost::filesystem::path p(a_carpeta); //Crea objeto boost::filesystem con la ruta de carpeta pasada por parámetro.

	//Si la ruta de carpeta existe y es un directorio...
	if (boost::filesystem::exists(p) && boost::filesystem::is_directory(p)) {
		//Si la ruta de carpeta está vacía...
		if (boost::filesystem::is_empty(p)) {
			std::cout << "No hay ficheros en la ruta.\n";
		}
		else {
			//Ciclo mejorado que ingresa cada archivo con extensión de la ruta de carpeta a vector.
			for (auto& x : boost::filesystem::directory_iterator(p)) {
				//cout << x.path() << "\n";
				archivos.push_back(boost::filesystem::basename(x) + boost::filesystem::extension(x));
			}
		}
	}
	else {
		std::cout << "No existe esa ruta.\n";
	}
}

//Procedimiento que despliega un menú con opciones para trabajar con archivos de texto.
static void Menu() {
	std::string Nombre;
	int Op, i = 0;
	bool encontrado = false;

	archivos.clear(); //Limpia el vector cada que Menu es llamado, para evitar repetición de elementos.
	ListaArchivos("..\\Archivos\\"); //Llamada a procedimiento que genera una lista con archivos de la ruta de carpeta, y los despliega.

	ArchivoTexto artxt; //Declara objeto ArchivoTexto.

	system("cls"); //Limpia la terminal.

	//Despliega menú de opciones.
	std::cout << "-Selecciona una opción del menú-\n\n";
	std::cout << "1) Crear archivo.\n2) Leer archivo.\n3) Salir del programa.\n\n";
	//Ingreso de valor a variable.
	std::cout << "Opción: "; std::cin >> Op;
	if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		//Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		Menu(); //Llamada recursiva al procedimiento Menu.
	}
	else
	{
		//Selectiva switch para saltar al método que seleccionó el usuario.
		switch (Op) {
			case 1:
				//Recibe el nombre que se le va a dar al archivo.
				std::cout << "\nEscribe el nombre del archivo (.txt únicamente): "; std::cin >> Nombre;
				//Si el usuario no agregó la extensión al nombre, se le agrega.
				if (Nombre.find(".txt") == std::string::npos)
					Nombre += ".txt";
				artxt.CrearArchivo(Nombre); //Llamada al método que crea el archivo y se escribe contenido en él.

				system("pause"); //Pausa el flujo del programa.
				Menu(); //Llamada recursiva al procedimiento Menu.
				break;
			case 2:
				//Despliega los elementos del vector, los archivos de la ruta de carpeta.
				std::cout << "\nArchivos contiene:\n";
				for (int i = 0; i < archivos.size(); i++) {
					std::cout << archivos[i] << "\n";
				}

				//Ingreso de archivo a leer.
				std::cout << "\nEscribe el nombre del archivo (.txt únicamente): "; std::cin >> Nombre;
				//Si el usuario no agregó la extensión al nombre, se le agrega.
				if (Nombre.find(".txt") == std::string::npos)
					Nombre += ".txt";

				//Mientras haya elementos en el vector archivos y no se haya encontrado el nombre a buscar, el ciclo continua.
				while (i < archivos.size() && encontrado == false) {
					if (Nombre.compare(archivos[i]) == 0) { //Se compara el nombre del archivo a buscar con los nombres de los elementos.
						encontrado = true; //Si se encontró, variable pasa a true.
						artxt.LeerArchivo(Nombre); //Llamada a método que leer el contenido de un archivo.
					}
					if (i == (archivos.size() - 1)) {
						std::cout << "\nEse archivo no existe, ingresa un nombre que si exista. ";
					}
					i++; //Incrementa contador.
				}

				system("pause"); //Pausa el flujo del programa.
				Menu(); //Llamada recursiva al procedimiento Menu.
				break;
			case 3:
				exit(-1); //Salida del programa
				break;
			default:
				std::cout << "Esa opcíon no está disponible. ";
				system("pause"); //Pausa el flujo del programa.
				Menu(); //Llamada recursiva a Menu.
		}
	}


}

int main()
{
	std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

	Menu(); //Llamada a procedimiento que despliega menú de opciones para trabajar con archivos de texto.
}