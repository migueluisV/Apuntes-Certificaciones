`23/08/2022 9:23pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `Numero a letra`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `Numero a letra.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es practicar y realizar una idea que me resulta bastante divertida: pasar un número a su nombre escrito, 
es decir, pasar de 1 a "Uno", 22 a "Veinti dos" o 967 a "Novecientos sesenta y siete", para ello, se utilizaron arreglos bidimensionales 
estáticos finales que son la referencia del número y su nombre escrito (ambos campos del arreglo tipo String).

La solución a este problema consiste en crear una clase la cual contenga los arreglos string bidimensionales de manera constante y privada, 
además, los métodos para buscar recorrer los arreglos son privados igualmente, el único método público es aquel que es llamado para que sea 
regresada la cadena con el nombre del número en formato string. Todos los métodos de la clase son funciones tipo string.