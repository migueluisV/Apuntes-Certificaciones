`23/08/2022 9:23pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, adem?s de un fichero *.pdb*.
- `Numero a letra`: contiene el c?digo fuente *.cpp*, clases creadas y otros ficheros importantes.
- `Numero a letra.sln`: es el fichero que abre Visual Studio para trabajar y compilar el c?digo fuente.

## Descripci?n del programa

El objetivo de este programa es practicar y realizar una idea que me resulta bastante divertida: pasar un n?mero a su nombre escrito, 
es decir, pasar de 1 a "Uno", 22 a "Veinti dos" o 967 a "Novecientos sesenta y siete", para ello, se utilizaron arreglos bidimensionales 
est?ticos finales que son la referencia del n?mero y su nombre escrito (ambos campos del arreglo tipo String).

La soluci?n a este problema consiste en crear una clase la cual contenga los arreglos string bidimensionales de manera constante y privada, 
adem?s, los m?todos para buscar recorrer los arreglos son privados igualmente, el ?nico m?todo p?blico es aquel que es llamado para que sea 
regresada la cadena con el nombre del n?mero en formato string. Todos los m?todos de la clase son funciones tipo string.