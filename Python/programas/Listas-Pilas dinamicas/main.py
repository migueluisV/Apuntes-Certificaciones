# Despliega menú de opciones para trabajar con una cola.
def menu(menu_pila):
    # Despliega opciones.
    print("-Menú de operaciones para pilas-")
    print("Elementos en la pila: {}".format(len(menu_pila.pila)))
    print("""
    1) Insertar nombre.
    2) Eliminar nombre.
    3) Vaciar cola.
    4) Buscar nombre.
    5) Recorrer cola.
    6) Salir.
    """)
    # Usuario selecciona opción.
    op = str(input("Opción: "))
    # Llamada a método de clase en base en selección de usuario.
    if op == "1":
        menu_pila.agregar_elemento()
    elif op == "2":
        menu_pila.eliminar_elemento()
    elif op == "3":
        menu_pila.vaciar_cola()
    elif op == "4":
        menu_pila.buscar_elemento()
    elif op == "5":
        menu_pila.recorrer_elementos()
    elif op == "6":
        # Termina la ejecución del programa.
        exit()
    else:
        # Llamada recursiva por si el usuario ingresa un carácter u opción o existente.
        print("\nOpción no existente.")
        menu(menu_pila)


# Clase para pilas.
class Pila:
    # Constructor que inicializa la pila.
    def __init__(self):
        self.pila = []

    # Destructor.
    def __del__(self):
        print("\nObjeto Pila Eliminado.")

    # Regresa True o False dependiendo si tiene elementos o no la pila.
    def pila_vacia(self):
        return self.pila == []

    # Despliega todos los elementos de la pila.
    def recorrer_elementos(self):
        if self.pila_vacia():
            print("Pila vacía.")
        else:
            print("\n---Elementos de la pila---\n")
            for i in range(len(self.pila)):
                print("{}. {}.".format(i + 1, self.pila[i]))
        menu(pila)

    # Solicita al usuario un elemento a buscar en la pila.
    def buscar_elemento(self):
        if self.pila_vacia():
            print("\nPila vacía.")
        else:
            print("\n---Buscar un elemento---\n")
            while True:
                elemento = str(input("Elemento a buscar: "))
                if elemento in self.pila:
                    print("Existe el elemento en la pila.")
                else:
                    print("No existe el elemento en la pila.")
                op = str(input("¿Desea buscar otro elemento? Si[1]: "))
                if op != "1":
                    break
        menu(pila)

    # Limpia todos los elementos de la pila.
    def vaciar_cola(self):
        if self.pila_vacia():
            print("\nPila vacía.")
        else:
            print("\n---Pilla vaciada---\n")
            self.pila.clear()
        menu(pila)

    # Elimina los elementos de la cola en base en LIFO.
    def eliminar_elemento(self):
        if self.pila_vacia():
            print("\nPila vacía.")
        else:
            print("\n---Eliminar un elemento---\n")
            while True:
                print("\"{}\" eliminado.".format(self.pila.pop()))
                op = str(input("¿Desea elemento otro elemento? Si[1]: "))
                if op != "1":
                    break
        menu(pila)

    # Agrega elementos a la pila en base en LIFO.
    def agregar_elemento(self):
        print("\n---Agregar un elemento---\n")
        while True:
            elemento = str(input("Inserta un nombre: "))
            self.pila.append(elemento)
            op = str(input("¿Desea elemento otro elemento? Si[1]: "))
            if op != "1":
                break
        menu(pila)


# Declara objeto Pila.
pila = Pila()
# Llamada al menú para trabajar con la pila.
menu(pila)
