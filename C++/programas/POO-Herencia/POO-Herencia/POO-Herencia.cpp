#include <iostream> //Cabecera para entrada y salida de datos.

//Forma habitual de declarar una clase en el archivo principal de la soluci?n.
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

        //M?todo heredado a clases derivadas. Despliega contenido de los atributos.
        void DesplegarEscuela() {
            std::cout << "--Datos de la universidad--\n\n";
            std::cout << "Nombre: " << Uni << ".\n";
            std::cout << "Direcci?n: " << Dir << ".\n";
            std::cout << "Tel?fono: " << Tel << ".\n";
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

        //M?todo propio de la clase. Despliega contenido de los atributos.
        void DesplegarAlumno() {
            DesplegarEscuela(); //Llamada al m?todo heredado de la clase base.
            std::cout << "\n--Datos del alumno--\n\n";
            std::cout << "Nombre: " << Nom << ".\n";
            std::cout << "N?mero de control: " << NControl << ".\n";
            std::cout << "Carrera: " << Carrera << ".\n";
            std::cout << "Semestre: " << Semestre << ".\n";
        }
};

int main()
{
    std::string nom, carr, nc, sem, uni, dir, tel;

    std::locale::global(std::locale("spanish")); //Instrucci?n para utilizar caracteres en espa?ol.

    //Asignaci?n de valores a las variables.
    std::cout << "Ingreso de datos:\n\n";
    std::cout << "Nombre de tu universidad: "; std::cin >> uni;
    std::cout << "Direcci?n de tu universidad: "; std::cin >> dir;
    std::cout << "N?mero de tel?fono de tu universidad: "; std::cin >> tel;
    std::cout << "Nombre del alumno: "; std::cin >> nom;
    std::cout << "N?mero de control del alumno: "; std::cin >> nc;
    std::cout << "Carrera que cursa del alumno: "; std::cin >> carr;
    std::cout << "Semestre que cursa el alumno: "; std::cin >> sem;

    Alumno al(nom, carr, nc, sem, uni, dir, tel); //Declara objeto Alumno.
    al.DesplegarAlumno(); //Llama al m?todo de la clase Alumno.
}