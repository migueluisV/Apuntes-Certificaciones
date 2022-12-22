# Importa clase random para utilizar número aleatorios.
import random


# Regresa una lista ordenada por el método rápido.
def ordenamiento_rapido(lista, primero, ultimo):
    # Declara e inicializa variables.
    lista_ordenada = lista
    i = primero
    j = ultimo
    centro = (primero + ultimo) // 2
    pivote = lista_ordenada[centro]

    # Mientras el elemento en el índice i sea menor al elemento en el índice j...
    while i <= j:
        # Ordena sublista menor al pivote.
        while lista_ordenada[i] < pivote:
            # Incrementa contador,
            i += 1
        # Ordena sublista mayor al pivote.
        while lista_ordenada[j] > pivote:
            # Decrementa contador.
            j -= 1
        # Intercambio de valores para ordenar.
        if i <= j:
            aux = lista_ordenada[i]
            lista_ordenada[i] = lista_ordenada[j]
            lista_ordenada[j] = aux
            # Incremento y decremento de contadores.
            i += 1
            j -= 1

    # Condiciones de salida recursiva, si ninguna se cumple, se sale de la recursión.
    if primero < j:
        ordenamiento_rapido(lista_ordenada, primero, j)
    if i < ultimo:
        ordenamiento_rapido(lista_ordenada, i, ultimo)

    # Regresa la lista ordenada.
    return lista_ordenada


# Despliega una lista.
def despliegue(lista):
    for i in range(len(lista)):
        print("{}. {}".format((i + 1), lista[i]))


# Determina cantidad de elementos en la lista, los mismos y el tipo de ordenamiento.
def valores_lista():
    lista = []

    # Atrapa excepción si se ingresa un tipo de dato incorrecto.
    try:
        cant_elementos = int(input("¿Cuántos elementos tendrá la lista a ordenar?: "))
        print("""
        Selecciona el tipo de ordenamiento:
        1) Ascendente.
        2) Descendente.
        """)
        op_orden = str(input("Opción: "))

        # Genera lista con valores aleatorios entre 0 y 1000.
        lista = [random.randint(0, 1000) for _ in range(cant_elementos)]
        print("Lista con valores aleatorios:")
        despliegue(lista)

        # Genera lista ordenada.
        lista_ordenada = ordenamiento_rapido(lista, 0, (len(lista) - 1))
        if op_orden == "2":
            # Si se quiere lista ordenada descendentemente, la ordena.
            lista_ordenada.reverse()
        print("\nLista con valores aleatorios ordenados:")
        despliegue(lista_ordenada)
    except ValueError:
        print("Error de formato.")
        valores_lista()


valores_lista()
