# Clase base.
class Escuela:
    # Constructor que inicializa atributos de clase.
    def __init__(self, uni, direccion, tel):
        self.uni = uni
        self.direccion = direccion
        self.tel = tel

    # Destructor.
    def __del__(self):
        print("Objeto Escuela Eliminado.")

    # Despliega los atributos de clase.
    def despliegue_escuela(self):
        print("""
        ---Datos de la escuela---
        Nombre: {}.
        Dirección: {}
        Teléfono: {}
        """.format(self.uni, self.direccion, self.tel))


# Clase derivada de clase base Escuela.
class Alumno(Escuela):
    # Constructor que inicializa atributos de clase y de clase base.
    def __init__(self, nombre, carrera, num_c, semestre, uni, direccion, tel):
        # Llama al constructor de clase base.
        super().__init__(uni, direccion, tel)
        self.nombre = nombre
        self.carrera = carrera
        self.num_c = num_c
        self.semestre = semestre

    # Destructor.
    def __del__(self):
        print("Objeto Alumno Eliminado.")

    # Despliega atributos de clase y clase base.
    def despliegue_alumno(self):
        super().despliegue_escuela()
        print("""
        ---Datos del alumno---
        Nombre: {}
        Número de control: {}
        Carrera: {}
        Semestre: {}
        """.format(self.nombre, self.num_c, self.carrera, self.semestre))


# Solicita al usuario datos de un alumno y su universidad. para desplegarlos.
def ingreso_valores():
    print("Ingresa los siguientes valores:")
    nombre_u = str(input("Nombre de tu universidad: "))
    direccion = str(input("Dirección de tu universidad: "))
    tel = str(input("Número de teléfono de tu universidad: "))
    nombre_a = str(input("Nombre del alumno: "))
    num_c = str(input("Número de control del alumno: "))
    carrera = str(input("Carrera que cursa el alumno: "))
    semestre = str(input("Semestre que cursa el alumno: "))

    # Declara objeto de clase Alumno.
    alumno = Alumno(nombre_a, carrera, num_c, semestre, nombre_u, direccion, tel)
    # Llamada a método de despliegue de datos.
    alumno.despliegue_alumno()


ingreso_valores()
