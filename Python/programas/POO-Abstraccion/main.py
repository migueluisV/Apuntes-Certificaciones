# Importa clase math para métodos matemáticos.
import math
# Importa clase ABC y decorador abstractmethod de la librería abc.
from abc import ABC, abstractmethod


# Declara clase derivada abstracta de clase base ABC.
class Figuras(ABC):
    # Declara métodos abstractos sin inicializar.
    @abstractmethod
    # Regresa el volumen de la figura.
    def calcular_volumen(self):
        pass

    @abstractmethod
    # Despliega el volumen y medidas para desplegar el volumen.
    def desplegar_volumen(self):
        pass


# Declara clases derivadas de la clase base Figuras.
class Esfera(Figuras):
    # Constructor.
    def __init__(self, radio):
        self.radio = radio

    # Implementa métodos abstractos de la clase base.
    def calcular_volumen(self):
        return (4 * math.pi * math.pow(self.radio, 3)) / 3

    def desplegar_volumen(self):
        print("""
        ---Datos de la esfera---
        La medida del radio de la esfera es de {}u.
        El volumen de la esfera es de {}u^3.
        """.format(self.radio, round(self.calcular_volumen(), 3)))


class Cubo(Figuras):
    def __init__(self, lado):
        self.lado = lado

    def calcular_volumen(self):
        return math.pow(self.lado, 3)

    def desplegar_volumen(self):
        print("""
        ---Datos del cubo---
        La medida del lado del cubo es de {}u.
        El volumen del cubo es de {}u^3.
        """.format(self.lado, round(self.calcular_volumen(), 3)))


class Cono(Figuras):
    def __init__(self, radio, altura):
        self.radio = radio
        self.altura = altura

    def calcular_volumen(self):
        return (math.pi * math.pow(self.radio, 2) * self.altura) / 3

    def desplegar_volumen(self):
        print("""
        ---Datos del cono---
        La medida del radio del cono es de {}u.
        La medida de la altura del cono es de {}u.
        El volumen del cono es de {}u^3.
        """.format(self.radio, self.altura, round(self.calcular_volumen(), 3)))


class Cilindro(Figuras):
    def __init__(self, radio, altura):
        self.radio = radio
        self.altura = altura

    def calcular_volumen(self):
        return math.pi * math.pow(self.radio, 2) * self.altura

    def desplegar_volumen(self):
        print("""
        ---Datos del cilindro---
        La medida del radio del cilindro es de {}u.
        La medida de la altura del cilindro es de {}u.
        El volumen del cilindro es de {}u^3.
        """.format(self.radio, self.altura, round(self.calcular_volumen(), 3)))


# Ingresa los valores para calcular volumen de figuras.
def ingreso_valores():
    # Atrapa excepción si se ingresa un tipo de dato incorrecto.
    try:
        radio = float(input("Ingresa un valor para el radio: "))
        altura = float(input("Ingresa un valor para la altura: "))
        lado = float(input("Ingresa un valor para la medida de un lado: "))

        # Declara objetos de clases.
        esfera = Esfera(radio)
        cubo = Cubo(lado)
        cono = Cono(radio, altura)
        cilindro = Cilindro(radio, altura)

        # Llamada a métodos abstractos de las clases.
        esfera.desplegar_volumen()
        cubo.desplegar_volumen()
        cono.desplegar_volumen()
        cilindro.desplegar_volumen()
    except ValueError:
        print("Error de formato.")
        # Llamada recursiva.
        ingreso_valores()


ingreso_valores()
