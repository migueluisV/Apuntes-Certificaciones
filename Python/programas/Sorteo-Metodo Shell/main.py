# Regresa una lista ordenada por el método Shell.
def ordenamiento_shell(lista):
    # Declara e inicializa variables.
    lista_ordenada = lista
    salto = len(lista_ordenada) // 2

    # Mientras el intervalo de comparación sea mayor a 0...
    while salto > 0:
        # Bandera para reducir las iteraciones.
        bandera = True
        while bandera is not False:
            bandera = False
            cont = 1
            # Compara el elemento en el índice cont con el elemento en el índice salto (cada intervalo de elementos).
            while cont <= (len(lista_ordenada) - salto):
                # Intercambio de valores para ordenar.
                if lista_ordenada[cont - 1] > lista_ordenada[(cont - 1) + salto]:
                    aux = lista_ordenada[(cont - 1) + salto]
                    lista_ordenada[(cont - 1) + salto] = lista_ordenada[cont - 1]
                    lista_ordenada[cont - 1] = aux
                    bandera = True
                # Incrementa contador.
                cont += 1
        # Intervalo se vuelve más pequeño.
        salto //= 2
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
        # Ingresa elementos a la lista.
        print("\nIngresa valores enteros a ordenar:")
        for i in range(cant_elementos):
            print("{}. ".format(i + 1), end="")
            valor = str(input())
            lista.append(valor)
        print("""
        Selecciona el tipo de ordenamiento:
        1) Ascendente.
        2) Descendente.
        """)
        op_orden = str(input("Opción: "))
        print("Lista con valores aleatorios:")
        despliegue(lista)

        # Genera lista ordenada.
        lista_ordenada = ordenamiento_shell(lista)
        if op_orden == "2":
            # Si se quiere lista ordenada descendentemente, la ordena.
            lista_ordenada.reverse()
        print("\nLista con valores aleatorios ordenados:")
        despliegue(lista_ordenada)
    except ValueError:
        print("Error de formato.")
        valores_lista()


valores_lista()
