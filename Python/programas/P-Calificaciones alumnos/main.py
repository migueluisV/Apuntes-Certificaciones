# Declara clase.
class CaliAlu:
    # Constructor.
    def __init__(self, cal, nom):
        # Inicializa listas.
        self.cal = cal
        self.nom = nom
        # Inicializa atributos.
        self.acumcali = self.calvali = self.calinvali = self.caliapro = self.calirepro = self.calimax = \
            self.calimen = self.prom = 0.0

    # Asigna valores a las listas y calcula valores de atributos.
    def ingreso_datos(self):
        i = 0

        # Ciclo para ingresar los valores
        while True:
            # Atrapa excepción de tipo de dato erróneo.
            try:
                cali = float(input("Ingresa una calificación: "))
                self.cal.append(cali)
                nomb = str(input("Ingresa un nombre: "))
                self.nom.append(nomb)

                # Calcula calificaciones válidas, inválidas, aprobatorias, reprobatorias,
                # mayor, menor, suma y promedio.
                self.acumcali = self.acumcali + self.cal[i]
                if 0 < self.cal[i] <= 10:
                    self.calvali = self.calvali + 1
                    if 6 < self.cal[i] <= 10:
                        self.caliapro = self.caliapro + 1
                    elif 6 > self.cal[i] > 0:
                        self.calirepro = self.calirepro + 1
                else:
                    self.calinvali = self.calinvali + 1
                i += 1
                # Sale del ciclo.
                if i == 5:
                    self.prom = self.acumcali / len(self.cal)
                    self.calimax = max(self.cal)
                    self.calimen = min(self.cal)
                    break
            except ValueError:
                print("Error de formato.")

    # Despliega los valores de los atributos de clase.
    def despliegue(self):
        print("\nLos alumnos registrados son:\n")
        for x in range(len(self.cal)):
            print("{} - {}, con calificación de {}".format((x + 1), self.nom[x], self.cal[x]))
        print("""
        Hubo un total de {} calificaciones inválidas y {} validas.
        Hubo un total de {} calificaciones aprobatorias y {} reprobatorias.
        La calificación mayor fue de {} y la menor fue de {}.
        El promedio es de {}.
        """.format(self.calinvali, self.calvali, self.caliapro, self.calirepro, self.calimax, self.calimen,
                   round(self.prom, 2)))


# Declara dos listas vacías.
calificaciones = []
nombres = []
# Declara objeto de clase CaliAlu.
calialu = CaliAlu(calificaciones, nombres)
# Llama a las funciones de la clase.
calialu.ingreso_datos()
calialu.despliegue()
