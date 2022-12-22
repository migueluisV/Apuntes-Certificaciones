#include <iostream> //Cabecera para entrada y salida de datos.

//Clase base.
class Animal {
    public:
        //Destructor.
        ~Animal() {
            std::cout << "\nObjeto Animal destruido.\n";
        }
        //Método a sobre escribir.
        void Desplazarse() {};
};

//Clase derivada de Animal
class Ave : Animal {
    //Atributo privado de la clase.
    private:
        std::string Nombre;

    public:
        Ave(std::string nom) : Nombre(nom) {}; //Constructor que inicializa el atributo de la clase.
        ~Ave() { //Destructor.
            std::cout << "\nObjeto Ave destruido.\n";
        }

        void Desplazarse() { //Método sobre escrito de la clase base.
            std::cout << "Hola, mi nombre es " << Nombre << " y me desplazo volando.\n";
        }
};

//Clase derivada de Animal.
class Mamifero : Animal {
    //Atributo privado de la clase.
    private:
        std::string Nombre;

    public:
        Mamifero(std::string nom) : Nombre(nom) {}; //Constructor que inicializa el atributo de la clase.
        ~Mamifero() { //Destructor.
            std::cout << "\nObjeto Mamifero destruido.\n";
        }

        void Desplazarse() { //Método sobre escrito de la clase base.
            std::cout << "\nHola, mi nombre es " << Nombre << " y me desplazo caminando.\n";
        }
};

//Clase derivada de Animal.
class Pez : Animal {
    //Atributo privado de la clase.
    private:
        std::string Nombre;

    public:
        Pez(std::string nom) : Nombre(nom) {}; //Constructor que inicializa el atributo de la clase.
        ~Pez() { //Destructor.
            std::cout << "\nObjeto Pez destruido.\n";
        }

        void Desplazarse() { //Método sobre escrito de la clase base.
            std::cout << "Hola, mi nombre es " << Nombre << " y me desplazo nadando.\n";
        }
};

//Clase derivada de Animal.
class Reptil : Animal {
    //Atributo privado de la clase.
    private:
        std::string Nombre;

    public:
        Reptil(std::string nom) : Nombre(nom) {}; //Constructor que inicializa el atributo de la clase.
        ~Reptil() { //Destructor.
            std::cout << "\nObjeto Reptil destruido.\n";
        }

        void Desplazarse() { //Método sobre escrito de la clase base.
            std::cout << "Hola, mi nombre es " << Nombre << " y me desplazo arrastrándome.\n";
        }
};

int main()
{
    std::string nm, na, nr, np;

    //Ingreso de valores a variables.
    std::cout << "-Nombres de animales-\n\n";
    std::cout << "Nombre para un mamifero: "; std::cin >> nm;
    std::cout << "Nombre para un ave: "; std::cin >> na;
    std::cout << "Nombre para un reptil: "; std::cin >> nr;
    std::cout << "Nombre para un pez: "; std::cin >> np;

    //Declaración de objetos y llamada a sus métodos.
    Mamifero ma(nm);
    ma.Desplazarse();

    Ave av(na);
    av.Desplazarse();

    Reptil rp(nr);
    rp.Desplazarse();

    Pez p(np);
    p.Desplazarse();
}