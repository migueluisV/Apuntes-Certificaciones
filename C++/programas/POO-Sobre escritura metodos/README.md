`21/08/2022 "1:56pm"`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, adem?s de un fichero *.pdb*.
- `POO-Sobre escritura metodos`: contiene el c?digo fuente *.cpp*, clases creadas y otros ficheros importantes.
- `POO-Sobre escritura metodos.sln`: es el fichero que abre Visual Studio para trabajar y compilar el c?digo fuente.

## Descripci?n del programa

El objetivo de este programa es repasar sobre la Programaci?n Orientada a Objetos (POO), este es un tema que puede ser tratado en el lenguaje C++, 
en esta ocasi?n, vemos acerca de los m?todos presentes en una clase base, pero deben tener un comportamiento distinto en una o varias clases derivadas, 
por lo que es necesario sobre escribir dicho m?todo. En este programa podemos apreciar, como algo externo al mero tema de la soluci?n, la **declaraci?n** 
de clases de la forma **cabecera** y **archivo .cpp**, pero dentro del archivo .cpp principal.

El programa posee una base `Areas`, esta tiene atributos, constructor, destructor y m?todos que van a ser sobre escritos por sus clases derivadas `Cilindro`, 
`Circulo` y `Esfera`, cada una de estas clases derivadas sobre escribre al m?todo de su clase base, d?ndole un comportamiento distinto para cada clase derivda 
(calcula el ?rea de las figuras y despliega sus datos). En *main*, se reciben los datos para calcular las ?reas, se declaran e inicializan los objetos de las 
clases derivadas y se llaman a los m?todos de calculo y despliegue de datos.