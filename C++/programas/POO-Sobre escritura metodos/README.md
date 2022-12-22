`21/08/2022 "1:56pm"`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `POO-Sobre escritura metodos`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `POO-Sobre escritura metodos.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es repasar sobre la Programación Orientada a Objetos (POO), este es un tema que puede ser tratado en el lenguaje C++, 
en esta ocasión, vemos acerca de los métodos presentes en una clase base, pero deben tener un comportamiento distinto en una o varias clases derivadas, 
por lo que es necesario sobre escribir dicho método. En este programa podemos apreciar, como algo externo al mero tema de la solución, la **declaración** 
de clases de la forma **cabecera** y **archivo .cpp**, pero dentro del archivo .cpp principal.

El programa posee una base `Areas`, esta tiene atributos, constructor, destructor y métodos que van a ser sobre escritos por sus clases derivadas `Cilindro`, 
`Circulo` y `Esfera`, cada una de estas clases derivadas sobre escribre al método de su clase base, dándole un comportamiento distinto para cada clase derivda 
(calcula el área de las figuras y despliega sus datos). En *main*, se reciben los datos para calcular las áreas, se declaran e inicializan los objetos de las 
clases derivadas y se llaman a los métodos de calculo y despliegue de datos.