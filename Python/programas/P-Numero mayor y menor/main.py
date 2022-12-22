# Solicita e ingresa números en una lista y determina número mayor y menor.
def ingresar_numeros(nums, cant_nums):
    # Declara e inicializa variables.
    i = num_mayor = num_menor = 0
    # Ciclo do-while para ingresar números.
    while True:
        # Atrapa excepción si se ingresa un tipo de dato incorrecto.
        try:
            print("{}. Digita un número:".format(i + 1), end=" ")
            nums.append(int(input()))
            # Inicializa número mayor y menor.
            if i == 0:
                num_mayor = nums[i]
                num_menor = nums[i]

            # Determina número mayor y menor al momento.
            if nums[i] > num_mayor:
                num_mayor = nums[i]
            if nums[i] < num_menor:
                num_menor = nums[i]
            # Incrementa contador.
            i += 1

            # Condición de salida.
            if i == cant_nums:
                break
        except TypeError:
            print("Ese no es un número.")

    # Despliega números y resultado.
    print("\n\nLos números ingresados son:")
    for y in range(cant_nums):
        if nums[y] < 0:
            print("{} - ({})".format((y + 1), nums[y]))
        else:
            print("{} - {}".format((y + 1), nums[y]))
    print("El número mayor de la lista es {}, y el menor es {}.".format(num_mayor, num_menor))


# Declara lista vacía.
list_nums = []

# Atrapa excepción si se ingresa un tipo de valor incorrecto.
try:
    cant_elem = int(input("Cantidad de elementos dentro de la lista: "))
    ingresar_numeros(list_nums, cant_elem)
except ValueError:
    print("Ese no es un número.")
