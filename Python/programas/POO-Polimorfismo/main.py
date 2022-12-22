# Clase base.
class Animal:
    # Destructor.
    def __del__(self):
        print("Objeto Animal Eliminado.")

    # Método que adoptará distinto comportamiento en sus clases derivadas (polimorfismo).
    def desplazarse(self):
        pass


# Clase derivada de clase base Animal.
class Ave(Animal):
    # Constructor.
    def __init__(self, nombre):
        self.nombre = nombre

    # Destructor.
    def __del__(self):
        print("Objeto Ave Eliminado.")

    # Método que adopta su propio comportamiento al de la clase base.
    def desplazarse(self):
        print("Hola, mi nombre es {} y me desplazo volando.".format(self.nombre))


class Mamifero(Animal):
    def __init__(self, nombre):
        self.nombre = nombre

    def __del__(self):
        print("Objeto Mamifero Eliminado.")

    def desplazarse(self):
        print("Hola, mi nombre es {} y me desplazo caminando.".format(self.nombre))


class Pez(Animal):
    def __init__(self, nombre):
        self.nombre = nombre

    def __del__(self):
        print("Objeto Pez Eliminado.")

    def desplazarse(self):
        print("Hola, mi nombre es {} y me desplazo nadando.".format(self.nombre))


class Reptil(Animal):
    def __init__(self, nombre):
        self.nombre = nombre

    def __del__(self):
        print("Objeto Pez Eliminado.")

    def desplazarse(self):
        print("Hola, mi nombre es {} y me desplazo arrastrándome.".format(self.nombre))


# Método que recibe nombres de tipos de animales y despliega cómo se desplazan.
def ingreso_nombres():
    print("-Nombre de animales-")
    nombre_mamifero = str(input("Nombre para un mamífero: "))
    nombre_ave = str(input("Nombre para un ave: "))
    nombre_reptil = str(input("Nombre para un reptil: "))
    nombre_pez = str(input("Nombre para un pez: "))

    # Lista con objetos de clases.
    animales = [Mamifero(nombre_mamifero), Ave(nombre_ave), Reptil(nombre_reptil), Pez(nombre_pez)]

    # Ciclo for para llamar al método desplazarse() de los objetos de clases.
    for animal in animales:
        animal.desplazarse()


ingreso_nombres()
