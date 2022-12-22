`11/07/2022 7:47pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `P-Dibujar figuras`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `P-Dibujar figuras.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es repasar sobre la sintaxis de C++, como las clases (generadas en archivos separados), estructuras switch, ciclos, etc. Notese
que se utilizó la instrucción *exit(-1)* para poder finalizar el flujo del programa antes de tiempo.

El programa cuenta con la clase `Figuras`, este tiene tres métodos que dibujan una figura geométrica con asteriscos según la altura y anchura de cada uno. 
En *main*, se declara un objeto Figuras y despliega un menú con las distintas figuras geométricas para dibujar, dependiendo de la opción, se llama al método 
específico de la figura y se dibuja.