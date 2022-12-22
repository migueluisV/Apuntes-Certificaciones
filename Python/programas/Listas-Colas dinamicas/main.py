# Importa clase "deque" de biblioteca "collections" para colas.
from collections import deque


# Despliega menú de opciones para trabajar con una cola.
def menu(menu_cola):
    # Despliega opciones.
    print("-Menú de operaciones para colas-")
    print("Elementos en la cola: {}".format(len(menu_cola.cola)))
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
        menu_cola.agregar_elemento()
    elif op == "2":
        menu_cola.eliminar_elemento()
    elif op == "3":
        menu_cola.vaciar_cola()
    elif op == "4":
        menu_cola.buscar_elemento()
    elif op == "5":
        menu_cola.recorrer_elementos()
    elif op == "6":
        # Termina la ejecución del programa.
        exit()
    else:
        # Llamada recursiva por si el usuario ingresa un carácter u opción o existente.
        print("\nOpción no existente.")
        menu(menu_cola)


# Clase para colas.
class Cola:
    # Constructor que inicializa la cola.
    def __init__(self, cola):
        self.cola = cola

    # Destructor.
    def __del__(self):
        print("\nObjeto Cola Eliminado.")

    # Regresa True o False dependiendo si tiene elementos o no la cola.
    def cola_vacia(self):
        if len(self.cola) == 0:
            return True
        else:
            return False

    # Despliega todos los elementos de la cola.
    def recorrer_elementos(self):
        if self.cola_vacia():
            print("\nCola vacía.")
        else:
            print("\n---Elementos de la cola---\n")
            for i in range(len(self.cola)):
                print("{}. {}.".format(i + 1, self.cola[i]))
        menu(cls_cola)

    # Solicita al usuario un elemento a buscar en la cola.
    def buscar_elemento(self):
        if self.cola_vacia():
            print("\nCola vacía.")
        else:
            print("\n---Buscar un elemento---\n")
            while True:
                elemento = str(input("Elemento a buscar: "))
                if elemento in self.cola:
                    print("Existe el elemento en la cola.")
                else:
                    print("No existe el elemento en la cola.")
                op = str(input("¿Desea buscar otro elemento? Si[1]: "))
                if op != "1":
                    break
        menu(cls_cola)

    # Limpia todos los elementos de la cola.
    def vaciar_cola(self):
        if self.cola_vacia():
            print("\nCola vacía.")
        else:
            print("\n---Cola vaciada---\n")
            self.cola.clear()
        menu(cls_cola)

    # Elimina los elementos de la cola en base en FIFO.
    def eliminar_elemento(self):
        if self.cola_vacia():
            print("\nCola vacía.")
        else:
            print("\n---Eliminar un elemento---\n")
            while True:
                print("\"{}\" eliminado.".format(self.cola.popleft()))
                op = str(input("¿Desea elemento otro elemento? Si[1]: "))
                if op != "1":
                    break
        menu(cls_cola)

    # Agrega elementos a la cola en base en FIFO.
    def agregar_elemento(self):
        print("\n---Agregar un elemento---\n")
        while True:
            elemento = str(input("Inserta un nombre: "))
            self.cola.append(elemento)
            op = str(input("¿Desea elemento otro elemento? Si[1]: "))
            if op != "1":
                break
        menu(cls_cola)


# Declara objeto cola de la clase deque.
nueva_cola = deque()
# Declara objeto Cola.
cls_cola = Cola(nueva_cola)
# Llamada al menú para trabajar con la cola.
menu(cls_cola)
