`11/07/2022 6:39pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `P-Numero mayor y menor`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `P-Numero mayor y menor.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es repasar sobre arreglos dinámicos utilizando punteros, para esto, declaramos una variable con un tipo, en este caso,
short, seguido de un asterisco (*) para convertirlo en un puntero, le damos un nombre y escribimos las palabras reservadas *new int[]*, dentro de
corchetes, va el número de elementos del arreglo, esto para volverlo dinámico, además, en vez de utilizar un procedimiento recursivo para ingresar
los valores al arreglo, usamos un ciclo do-while, una manera distinta de realizarlo.

El programa cuenta con un procedimiento estático *IngresarNumeros* que recibe números, los cuales son ingresados en un arreglo dinámico hecho a partir de un puntero, 
en el momento en que se ingresa el primer número, este número pasa a ser el contenido de una variable que representa el número mayor y el número 
menor, dichas variable son auxiliares de comparación, seguido a esto, se compara el número en el índice n del arreglo con las variables auxiliares, 
para ir determinando el número mayor y menor del arreglo dinámico. En *main*, solo se pregunta cuántos elementos tendrá el arreglo, se declara, y se 
manda a llamar al método IngresarNumeros.