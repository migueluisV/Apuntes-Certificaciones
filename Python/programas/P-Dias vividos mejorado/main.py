def despliegue(edad):
    dias = edad * 365
    meses = edad * 12
    print("\nHas vivido {} meses, que son {} meses o {} días.".format(edad, meses, dias))


def solicitud_edad():
    try:
        edad = int(input("Ingresa una edad: "))
        despliegue(edad)
    except TypeError:
        print("Error de formato.")
        solicitud_edad()


solicitud_edad()