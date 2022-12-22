# Regresa una lista ordenada ascendente o descendentemente.
def burbuja_simple(lista, op):
    # Lista a regresar.
    res = lista
    # Opción para ordenar ascendentemente.
    if op == "1":
        # Ciclo para recorrer la lista la n cantidad de elementos de la lista.
        for i in range(len(res)):
            # Ciclo para comparar uno a uno los elementos.
            for j in range(len(res) - 1):
                # Compara elementos.
                if res[j] > res[j + 1]:
                    # Intercambio de valores para ordenar.
                    aux = res[j]
                    res[j] = res[j + 1]
                    res[j + 1] = aux
    # Opción para ordenar descendentemente.
    else:
        for i in range(len(res)):
            for j in range(len(res) - 1):
                if res[j] < res[j + 1]:
                    aux = res[j]
                    res[j] = res[j + 1]
                    res[j + 1] = aux
    # Regresa lista ordenada.
    return res


def burbuja_mejorada(lista, op):
    res = lista
    # Inicialización de variables.
    bandera = True
    i = 0

    if op == "1":
        # Ciclo para recorrer la lista la n cantidad de elementos de la lista,
        # y mientras bandera sea True (mejora del tipo regular).
        while i < (len(res) - 1) and bandera is True:
            bandera = False
            # Ciclo para comparar uno a uno los elementos.
            for j in range(len(res) - i - 1):
                if res[j] > res[j + 1]:
                    # Intercambio de valores para ordenar.
                    bandera = True
                    aux = res[j]
                    res[j] = res[j + 1]
                    res[j + 1] = aux
            # Incrementa contador.
            i += 1
    else:
        while i < (len(res) - 1) and bandera is True:
            bandera = False
            for j in range(len(res) - i - 1):
                if res[j] < res[j + 1]:
                    bandera = True
                    aux = res[j]
                    res[j] = res[j + 1]
                    res[j + 1] = aux
            i += 1
    return res


def burbuja_optimizada(lista, op):
    # Inicialización de variables
    res = lista
    i = 1

    if op == "1":
        # Ciclo para recorrer la lista mientras no esté ordenada.
        while True:
            # Incrementa contador e inicializa variable.
            i += 1
            ordenado = True
            # Ciclo para comparar uno a uno los elementos.
            for j in range(len(res) - 1):
                if res[j] > res[j + 1]:
                    # Intercambio de valores para ordenar.
                    ordenado = False
                    aux = res[j]
                    res[j] = res[j + 1]
                    res[j + 1] = aux
            # Salida del ciclo.
            if i < len(res) and ordenado is not True:
                break
    else:
        while True:
            i += 1
            ordenado = True
            for j in range(len(res) - 1):
                if res[j] < res[j + 1]:
                    ordenado = False
                    aux = res[j]
                    res[j] = res[j + 1]
                    res[j + 1] = aux
            if i < len(res) and ordenado is not True:
                break
    return res


# Despliega una lista.
def despliegue_lista(lista):
    for i in range(len(lista)):
        print("{}. {}".format((i + 1), lista[i]))


# Despliega menús para seleccionar el tipo de ordenamiento de burbuja y el orden.
def menu(lista):
    lista_ordenada = []

    print("""
    Selecciona un tipo de ordenamiento de burbuja:
    1) Simple.
    2) Mejorada.
    3) Optimizada.
    """)
    op_burbuja = str(input("Opción: "))

    print("""
    Selecciona el tipo de ordenamiento:
    1) Ascendente.
    2) Descendente.
    """)
    op_orden = str(input("Opción: "))

    if op_burbuja == "1":
        lista_ordenada = burbuja_simple(lista, op_orden)
    elif op_burbuja == "2":
        lista_ordenada = burbuja_mejorada(lista, op_orden)
    elif op_burbuja == "3":
        lista_ordenada = burbuja_optimizada(lista, op_orden)
    else:
        print("Opción no válida.")
        menu(lista)
    despliegue_lista(lista_ordenada)


# Determina cantidad de elementos en la lista y despliega menú de opciones.
def valores_lista():
    lista = []
    # Atrapa excepción si se ingresa un tipo de dato incorrecto.
    try:
        cant_elementos = int(input("¿Cuántos elementos tendrá la lista a ordenar?: "))
        # Ingresa elementos a la lista.
        print("\nIngresa valores enteros a ordenar:")
        for i in range(cant_elementos):
            print("{}. ".format(i + 1), end="")
            valor = int(input())
            lista.append(valor)
        menu(lista)
    except ValueError:
        print("Error de formato.")
        # Llamada recursiva.
        valores_lista()


valores_lista()
