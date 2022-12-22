# Declara clase.
class DiasYMeses:
    # Constructor que inicializa atributo.
    def __init__(self, dias_transcurridos):
        self.dias_transcurridos = dias_transcurridos

    # Calcula los años, meses, semanas y días de una cantidad de días.
    def despliegue(self):
        anios = self.dias_transcurridos // 365
        meses = (self.dias_transcurridos % 365) // 30
        semanas = ((self.dias_transcurridos % 365)  % 30) // 7
        dias_restantes = ((self.dias_transcurridos % 365)  % 30) % 7
        print("{} días son {} años, {} meses, {} semanas y {} días.".format(
            self.dias_transcurridos, anios, meses, semanas, dias_restantes))


# Mientras el usuario escriba 1, registrará días para calcular sus atributos.
while True:
    # Try para atrapar error de formato en variable.
    try:
        dias = int(input("Ingresa una cantidad de días transcurridos: "))
        dym = DiasYMeses(dias)
        dym.despliegue()
    except ValueError:
        print("Error de formato.")
    finally:
        op = input("¿Desea ingresar otro número?: Si[1] ")
        if op != "1":
            break;