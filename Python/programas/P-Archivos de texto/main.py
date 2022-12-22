# Importa clase para manipular acciones del sistema operativo.
import os
# Importa clase para remover archivos en el sistema operativo.
from os import remove


# Despliega menú de opciones para trabajar con una cola.
def menu():
    # Despliega opciones.
    print("-Escritura y lectura de archivo de texto-")
    print("""
    1) Crear y escribir en archivo.
    2) Abrir y escribir en archivo.
    3) Eliminar archivo.
    4) Leer archivo.
    5) Salir.
    """, end="")
    # Usuario selecciona opción.
    op = str(input("Opción: "))

    # Llamada a método de clase en base en selección de usuario.
    # Opción para crear y escribir en archivo (nuevo o sobreescrito).
    if op == "1":
        # Recibe nombre del archivo.
        nombre = str(input("Nombre del archivo: "))
        # Si el nombre no tiene extensión, se le agrega.
        if ".txt" not in nombre:
            nombre += ".txt"

        # Declara objeto de la clase ArchivoFichero.
        fichero = ArchivoTexto()

        # Si encuentra el archivo escrito en directorio "Archivos\".
        if os.path.exists("Archivos\\" + nombre):
            # Variable para ver si el usuario desea sobrescribir el contenido del archivo o no.
            opcion = str(input("El archivo ya existe, ¿desea sobreescribirlo? Si[1]: "))
            if opcion == "1":
                # Llamada al método de clase para escribir en el archivo, con el modo write ("w").
                fichero.escribir_archivo(nombre, "w")
            else:
                # Llamada al método de clase para sobrescribir en el archivo, con el modo append plus ("a+").
                fichero.escribir_archivo(nombre, "a+")
        else:
            fichero.escribir_archivo(nombre, "w")
    # Opción para abrir y escribir en archivo.
    elif op == "2":
        # Llamada al método que muestra los archivos en el directorio "Archivos".
        archivos_en_directorio()
        nombre = str(input("Nombre del archivo: "))
        if ".txt" not in nombre:
            nombre += ".txt"

        # Si existe el archivo en la carpeta, declara objeto de la clase ArchivoTexto y llama al método para sobre
        # escribir en el archivo.
        if os.path.exists("Archivos\\" + nombre):
            fichero = ArchivoTexto()
            fichero.escribir_archivo(nombre, "a+")
        else:
            print("\nEse archivo no existe en el directorio.")
            menu()
    # Opción para eliminar un archivo de la carpeta "Archivos".
    elif op == "3":
        archivos_en_directorio()
        nombre = str(input("Nombre del archivo a eliminar: "))
        if ".txt" not in nombre:
            nombre += ".txt"

        if os.path.exists("Archivos\\" + nombre):
            # Elimina de la carpeta "Archivos" el archivo escrito.
            remove("Archivos//" + nombre)
            print("Archivo eliminado con éxito.\n")
            menu()
        else:
            print("\nEse archivo no existe en el directorio.")
            menu()
    # Opción para leer un archivo de la carpeta "Archivos".
    elif op == "4":
        archivos_en_directorio()
        nombre = str(input("Nombre del archivo: "))
        if ".txt" not in nombre:
            nombre += ".txt"

        if os.path.exists("Archivos\\" + nombre):
            fichero = ArchivoTexto()
            # Llamada al método que lee archivos de la carpeta "Archivos".
            fichero.leer_archivo(nombre)
        else:
            print("\nEse archivo no existe en el directorio.")
            menu()
    elif op == "5":
        # Termina la ejecución del programa.
        exit()
    else:
        # Llamada recursiva por si el usuario ingresa un carácter u opción o existente.
        print("\nOpción no existente.")
        menu()


# Función que regresa una lista con todos los nombres de los archivos en el directorio "Archivos".
def lista_archivos_en_directorio():
    return [arch.name for arch in os.scandir("Archivos//") if arch.is_file()]


# Despliega todos los archivos de la carpeta "Archivos".
def archivos_en_directorio():
    print("\nFicheros en el directorio \"Archivos\"")
    archivos = lista_archivos_en_directorio()
    for i in range(len(archivos)):
        print("{}. {}".format(i + 1, archivos[i]))


# Clase para escribir y leer archivos.
class ArchivoTexto:
    # Destructor.
    def __del__(self):
        print("\nObjeto ArchivoTexto Eliminado.")

    # Método que escribe en un archivo.
    def escribir_archivo(self, nombre, modo):
        archivo = open("Archivos//" + nombre, modo)
        lista = []
        print("-Escribe el contenido del fichero. Finalice cada línea con un ENTER. Finalice la escritura dejando "
              "una línea vacía con un ENTER-\n")
        while True:
            linea = str(input())
            lista.append(linea + "\n")
            if len(linea) == 0:
                break
        archivo.writelines(lista)
        print("\nArchivo creado y contenido escrito con éxito.\n")
        archivo.close()
        menu()

    # Método que lee un archivo.
    def leer_archivo(self, nombre):
        archivo = open("Archivos//" + nombre, "r")
        print("\n-Contenido de {}-".format(archivo.name))
        for linea in archivo.readlines():
            print(linea, end="")
        menu()


menu()
