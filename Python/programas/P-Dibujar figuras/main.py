# Declara clase para dibujar figuras geométricas.
class Figuras:
    # Dibuja un triángulo en base a su altura.
    def dibujar_triangulo(self):
        # Atrapa excepción en caso de error de tipo de dato.
        try:
            altura = int(input("Altura del triángulo (número entero): "))

            print("\nTriángulo:")
            # Ciclo para los renglones.
            for renglon in range(altura):
                # Ciclo para la base.
                for base in range(altura - renglon):
                    print(" ", end=" ")
                # Ciclo para las columnas.
                for columna in range((renglon * 2) - 1):
                    print("*", end=" ")
                print(" ")
        except ValueError:
            print("Error de formato.")

    # Dibuja un rectángulo en base en su altura y base.
    def dibujar_rectangulo(self):
        try:
            altura = int(input("Altura del rectángulo (número entero): "))
            base = int(input("Base del rectángulo (número entero): "))

            print("\nRectángulo:")
            for renglon in range(altura):
                for columna in range(base):
                    print("* ", end="")
                print(" ")
        except ValueError:
            print("Error de formato.")

    # Dibuja un cuadrado en base en su lado.
    def dibujar_cuadrado(self):
        try:
            lado = int(input("Lado del cuadrádo (número entero): "))

            print("\nCuadrado:")
            # Ciclo para los lados.
            for renglon in range(lado):
                for columna in range(lado):
                    print("* ", end=" ")
                print(" ")
        except ValueError:
            print("Error de formato.")


# Ciclo do-chile para ejecutar el código indefinidamente.
while True:
    # Declara objeto Figuras.
    fig = Figuras()
    print("""
    Selecciona una opción del menú:
    
    1) Dibujar triángulo.
    2) Dibujar rectángulo.
    3) Dibujar cuadrado.
    4) Salir.
    """)
    op = str(input("Opción: "))

    # Ejecuta un bloque según la opción seleccionada.
    if op == "1":
        fig.dibujar_triangulo()
    elif op == "2":
        fig.dibujar_rectangulo()
    elif op == "3":
        fig.dibujar_cuadrado()
    else:
        print("Opción no válida.")
        op = str(input("\n¿Desea ingresar otra opción? Si[1]: "))
        # Rompe el ciclo.
        if op != "1":
            break
