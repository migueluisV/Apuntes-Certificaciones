`11/07/2022 6:39pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, adem?s de un fichero *.pdb*.
- `P-Numero mayor y menor`: contiene el c?digo fuente *.cpp*, clases creadas y otros ficheros importantes.
- `P-Numero mayor y menor.sln`: es el fichero que abre Visual Studio para trabajar y compilar el c?digo fuente.

## Descripci?n del programa

El objetivo de este programa es repasar sobre arreglos din?micos utilizando punteros, para esto, declaramos una variable con un tipo, en este caso,
short, seguido de un asterisco (*) para convertirlo en un puntero, le damos un nombre y escribimos las palabras reservadas *new int[]*, dentro de
corchetes, va el n?mero de elementos del arreglo, esto para volverlo din?mico, adem?s, en vez de utilizar un procedimiento recursivo para ingresar
los valores al arreglo, usamos un ciclo do-while, una manera distinta de realizarlo.

El programa cuenta con un procedimiento est?tico *IngresarNumeros* que recibe n?meros, los cuales son ingresados en un arreglo din?mico hecho a partir de un puntero, 
en el momento en que se ingresa el primer n?mero, este n?mero pasa a ser el contenido de una variable que representa el n?mero mayor y el n?mero 
menor, dichas variable son auxiliares de comparaci?n, seguido a esto, se compara el n?mero en el ?ndice n del arreglo con las variables auxiliares, 
para ir determinando el n?mero mayor y menor del arreglo din?mico. En *main*, solo se pregunta cu?ntos elementos tendr? el arreglo, se declara, y se 
manda a llamar al m?todo IngresarNumeros.