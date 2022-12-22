# Regresa una cadena si un número es par o impar.
def par_impar(num):
    if (num % 2) == 0:
        return " es par."
    else:
        return " es impar."


# Ciclo do-while para ingresar un número y saber si es par o no indeterminadamente.
while True:
    # Declara e inicializa variable.
    opcion = "0"
    # Atrapa excepción si se ingresa un valor incorrecto.
    try:
        numero = int(input("Ingresa un número para determinar si es par o no: "))
        print("El número {}{}".format(numero, par_impar(numero)))
    except ValueError:
        print("Error de formato.")
    finally:
        print("\n¿Desea ingresar otra opción? Si[1]: ", end="")
        opcion = str(input())
        if opcion != "1":
            break
