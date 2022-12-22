#include <iostream> //Cabecera para entrada y salida de datos.

//Forma habitual de declarar una clase en el archivo principal de la solución.
class Escuela {
    //Atributos privados de la clase base.
    private:
        std::string Uni, Dir, Tel;

    public:
        //Constructor que asigna valores a los atributos de la clase.
        Escuela(std::string uni, std::string dir, std::string tel) {
            Uni = uni;
            Dir = dir;
            Tel = tel;
        }

        //Destructor.
        ~Escuela() {
            std::cout << "\nObjeto Escuela eliminado.\n";
        }

        //Método heredado a clases derivadas. Despliega contenido de los atributos.
        void DesplegarEscuela() {
            std::cout << "--Datos de la universidad--\n\n";
            std::cout << "Nombre: " << Uni << ".\n";
            std::cout << "Dirección: " << Dir << ".\n";
            std::cout << "Teléfono: " << Tel << ".\n";
        }
};

//Clase derivada de Escuela.
class Alumno : Escuela {
    //Atributos privados de la clase base.
    private:
        std::string Nom, Carrera, NControl, Semestre;

    public:
        //Constructor que asigna valores a los atributos de la clase y recibe atributos de la clase base.
        Alumno(std::string nom, std::string carr, std::string nc, std::string sem, std::string uni, std::string dir, std::string tel) : Escuela(uni, dir, tel) {
            Nom = nom;
            Carrera = carr;
            NControl = nc;
            Semestre = sem;
        }

        //Destructor.
        ~Alumno() {
            std::cout << "\nObjeto Alumno eliminado.\n";
        }

        //Método propio de la clase. Despliega contenido de los atributos.
        void DesplegarAlumno() {
            DesplegarEscuela(); //Llamada al método heredado de la clase base.
            std::cout << "\n--Datos del alumno--\n\n";
            std::cout << "Nombre: " << Nom << ".\n";
            std::cout << "Número de control: " << NControl << ".\n";
            std::cout << "Carrera: " << Carrera << ".\n";
            std::cout << "Semestre: " << Semestre << ".\n";
        }
};

int main()
{
    std::string nom, carr, nc, sem, uni, dir, tel;

    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    //Asignación de valores a las variables.
    std::cout << "Ingreso de datos:\n\n";
    std::cout << "Nombre de tu universidad: "; std::cin >> uni;
    std::cout << "Dirección de tu universidad: "; std::cin >> dir;
    std::cout << "Número de teléfono de tu universidad: "; std::cin >> tel;
    std::cout << "Nombre del alumno: "; std::cin >> nom;
    std::cout << "Número de control del alumno: "; std::cin >> nc;
    std::cout << "Carrera que cursa del alumno: "; std::cin >> carr;
    std::cout << "Semestre que cursa el alumno: "; std::cin >> sem;

    Alumno al(nom, carr, nc, sem, uni, dir, tel); //Declara objeto Alumno.
    al.DesplegarAlumno(); //Llama al método de la clase Alumno.
}