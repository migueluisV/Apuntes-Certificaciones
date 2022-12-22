# Regresa la cantidad de días vividos de alguien.
def dias_vividos(edad):
    return edad * 365


# Recibe un número tratado como la edad de una persona, y
# despliega la cantidad de días vividos de la misma.
def ingreso_edad():
    # Si se recibe una cadena o decimal en vez de un entero, ocurre un error.
    try:
        edad = int(input("Ingresa tu edad: "))
        print("Has vivido {} días.".format(dias_vividos(edad)))
    except TypeError:
        print("Error de formato.")


ingreso_edad()
