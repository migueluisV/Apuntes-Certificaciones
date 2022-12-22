# Declara función "sobrecargada" que regresa el perímetro de los triángulos en base
# en los valores de los parámetros.
def perimetro(self, *args):
    if args[0] != 0:
        return args[0] * 3
    elif args[1] != 0:
        return (args[1] * 2) + args[2]
    elif args[3] != 0:
        return args[3] + args[4] + args[5]


# Despliega menú y ejecuta instrucciones en base en la opción seleccionada.
def menu():
    print("""
    Selecciona un triángulo para calcular su perímetro y área:
    1) Triángulo equilátero.
    2) Triángulo isosceles.
    3) Triangulo escaleno.
    4) Salir.
    Opción: 
    """, end="")
    opcion = str(input())
    if opcion == "1":
        try:
            lado = float(input("\nIngresa un valor para calcular el perímetro de un triángulo equilátero: "))
            # Utiliza una versión "sobrecargada" de la función.
            resultado = perimetro(lado, 0, 0, 0, 0, 0)
            print("El perímetro del triángulo es: {}".format(resultado))
        except ValueError:
            print("Error de formato.")
    elif opcion == "2":
        try:
            base = float(input("\nIngresa un valor de base para calcular el perímetro de un triángulo isosceles: "))
            altura = float(input("Ingresa un valor de altura para calcular el perímetro de un triángulo isosceles: "))
            # Utiliza otra versión "sobrecargada" de la función.
            resultado = perimetro(0, base, altura, 0, 0, 0)
            print("El perímetro del triángulo es: {}".format(resultado))
        except ValueError:
            print("Error de formato.")
    elif opcion == "3":
        try:
            l1 = float(input("\nIngresa un valor para calcular el perímetro de un triángulo escaleno: "))
            l2 = float(input("Ingresa un valor para calcular el perímetro de un triángulo escaleno: "))
            l3 = float(input("Ingresa un valor para calcular el perímetro de un triángulo escaleno: "))
            # Utiliza otra versión "sobrecargada" de la función.
            resultado = perimetro(0, 0, 0, l1, l2, l3)
            print("El perímetro del triángulo es: {}".format(resultado))
        except ValueError:
            print("Error de formato.")
    elif opcion == "4":
        # Termina la ejecución del programa.
        exit()
    else:
        print("Opción no válida.")
        # Llamada recursiva.
        menu()


menu()
