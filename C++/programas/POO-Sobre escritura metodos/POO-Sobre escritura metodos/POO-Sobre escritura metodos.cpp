#define _USE_MATH_DEFINES //Establece ciertos valores matemáticos constantes, como PI.
#include <math.h> //Cabecera para trabajar con funciones matemáticas.
#include <iostream> //Cabecera para entrada y salida de datos.

//Cabecera clase base.
class Areas {
    //Atributos protegidos.
    protected:
        double Radio;

    public:
        Areas(double radio); //Constructor.
        ~Areas(); //Destructor.
        //Métodos a sobre escribir, declarados pero sin cuerpo.
        double CalcularArea() {};
        void ImprimirArea() {};
};

//Cuerpo de constructor y destructor de clase base.
Areas::Areas(double radio) : Radio(radio) {};
Areas::~Areas() { std::cout << "\nObjeto Areas destruido.\n"; }

//Cabecera clase derivada de Areas.
class Cilindro : Areas {
    //Atributos protegidos.
    protected:
        double Altura;

    public:
        Cilindro(double radio, double altura); //Constructor.
        ~Cilindro(); //Destructor.
        //Métodos a sobre escribir.
        double CalcularArea();
        void ImprimirArea();
};

//Cuerpo de constructor y destructor de clase derivada.
Cilindro::Cilindro(double radio, double altura) : Areas(radio) { Altura = altura; }
Cilindro::~Cilindro() { std::cout << "\nObjeto Cilindro destruido.\n"; }

//Métodos sobre escritos.
double Cilindro::CalcularArea() {
    return 2 * M_PI * Radio * (Altura + Radio);
}

void Cilindro::ImprimirArea() {
    std::cout << "\n--Información del cilíndro--\n\n";
    std::cout << "El valor del radio es: " << Radio << "u.\n";
    std::cout << "El valor del área del cilíndro es: " << CalcularArea() << "u^2.\n";
}

//Cabecera clase derivada de Areas.
class Circulo : Areas {
    public:
        Circulo(double radio); //Constructor.
        ~Circulo(); //Destructor.
        double CalcularArea();
        void ImprimirArea();
};

//Cuerpo de constructor y destructor de clase derivada.
Circulo::Circulo(double radio) : Areas(radio) {};
Circulo::~Circulo() { std::cout << "\nObjeto Circulo destruido.\n"; }

//Métodos sobre escritos.
double Circulo::CalcularArea() {
    return M_PI * pow(Radio, 2);
}

void Circulo::ImprimirArea() {
    std::cout << "\n--Información del círculo--\n\n";
    std::cout << "El valor del radio es: " << Radio << "u.\n";
    std::cout << "El valor del área del círculo es: " << CalcularArea() << "u^2.\n";
}

//Cabecera clase derivada de Areas
class Esfera : Areas {
    public:
        Esfera(double radio); //Constructor.
        ~Esfera(); //Destructor
        double CalcularArea();
        void ImprimirArea();
};

//Cuerpo de constructor y destructor de clase derivada.
Esfera::Esfera(double radio) : Areas(radio) {};
Esfera::~Esfera() { std::cout << "\nObjeto Esfera destruido.\n"; }

//Métodos sobre escritos.
double Esfera::CalcularArea() {
    return 4 * M_PI * pow(Radio, 2);
}

void Esfera::ImprimirArea() {
    std::cout << "\n--Información de la esfera--\n\n";
    std::cout << "El valor del radio es: " << Radio << "u.\n";
    std::cout << "El valor del área de la esfera es: " << CalcularArea() << "u^2.\n";
}

int main()
{
    double radio, altura;

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    std::cout << "-Valores para calcular áreas de figuras\n\n-";
    //Bloque try-catch para excepciones de formato de variables.
    try {
        //Ingreso de valores a variables.
        std::cout << "Ingresa un valor para radio: "; std::cin >> radio;
        if (std::cin.fail()) throw 1; //Si se ingresó un tipo de dato incorrecto en la variable.
        std::cout << "Ingresa un valor para altura: "; std::cin >> altura;
        if (std::cin.fail()) throw 1; //Si se ingresó un tipo de dato incorrecto en la variable.

        //Declaración e inicialización de objetos Cilindro, Circulo y Esfera.
        Cilindro cil(radio, altura);
        Circulo cir(radio);
        Esfera es(radio);

        //Llamada a los métodos sobre escritos.
        cil.ImprimirArea();
        cir.ImprimirArea();
        es.ImprimirArea();
    }
    catch (int x) {
        std::cout << "Error de formato. ";
        system("pause"); //Pausa el flujo del programa.
        std::cin.clear(); //Limpia el buffer de cin.
        //Ignora el resto de caracteres ingresados en cin hasta el próximo salto de línea.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        main(); //Llamada recursiva a main.
    }
}