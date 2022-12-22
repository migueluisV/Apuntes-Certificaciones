# Importa clase ABC y decorador abstractmethod de la librería abc.
from abc import ABC, abstractmethod


# Clase abstracta padre Figuras.
class Figuras(ABC):
    # Destructor.
    def __del__(self):
        print("Objeto Figuras eliminado.")

    # Declara métodos abstractos a aplicar en clases derivadas.
    # Rgresa el área de la figura.
    @abstractmethod
    def area(self):
        pass

    @abstractmethod
    # Regresa el perímetro de la figura.
    def perimetro(self):
        pass

    @abstractmethod
    # Despliega la base, altura, área y perímetro de la figura.
    def resultado(self):
        pass


# Declara clase derivada Triangulo.
class Triangulo(Figuras):
    # Constructor.
    def __init__(self, base, altura):
        self.base = base
        self.altura = altura

    # Destructor.
    def __del__(self):
        print("Objeto Triangulo eliminado.")

    # Implementación de métodos abstractos en clases derivadas.
    def area(self):
        return (self.base * self.altura) / 2

    def perimetro(self):
        if self.base != self.altura:
            return (self.altura * 2) + self.base
        return self.base * 3

    def resultado(self):
        print("""
        ---Datos del triángulo---
        Base: {}u
        Altura: {}u
        Área: {}u^2
        Perímetro: {}u
        """.format(self.base, self.altura, round(self.area(), 3), round(self.perimetro(), 3)))


class Rectangulo(Figuras):
    def __init__(self, base, altura):
        self.base = base
        self.altura = altura

    def __del__(self):
        print("Objeto Rectángulo eliminado.")

    def area(self):
        return self.base * self.altura

    def perimetro(self):
        return (self.base + self.altura) * 2

    def resultado(self):
        print("""
        ---Datos del rectángulo---
        Base: {}u
        Altura: {}u
        Área: {}u^2
        Perímetro: {}u
        """.format(self.base, self.altura, round(self.area(), 3), round(self.perimetro(), 3)))


# Solicita valores para calcular perímetro y área de figuras.
def ingreso_valores():
    print("Los siguientes valores serán utilizados para calcular el perímetro y área de un triángulo y rectángulo.")
    # Atrapa excepción para tipo de valor incorrecto.
    try:
        base = float(input("Ingresa un valor de base : "))
        altura = float(input("Ingresa un valor de altura : "))
        # Declara objetos Triangulo y Rectangulo.
        triangulo = Triangulo(base, altura)
        rectangulo = Rectangulo(base, altura)
        # Llamada a métodos para desplegar resultados.
        triangulo.resultado()
        rectangulo.resultado()
    except ValueError:
        print("Error de formato.")
        # Llamada recursiva.
        ingreso_valores()


ingreso_valores()
