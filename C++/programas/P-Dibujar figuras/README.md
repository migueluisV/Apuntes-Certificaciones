`11/07/2022 7:47pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, adem?s de un fichero *.pdb*.
- `P-Dibujar figuras`: contiene el c?digo fuente *.cpp*, clases creadas y otros ficheros importantes.
- `P-Dibujar figuras.sln`: es el fichero que abre Visual Studio para trabajar y compilar el c?digo fuente.

## Descripci?n del programa

El objetivo de este programa es repasar sobre la sintaxis de C++, como las clases (generadas en archivos separados), estructuras switch, ciclos, etc. Notese
que se utiliz? la instrucci?n *exit(-1)* para poder finalizar el flujo del programa antes de tiempo.

El programa cuenta con la clase `Figuras`, este tiene tres m?todos que dibujan una figura geom?trica con asteriscos seg?n la altura y anchura de cada uno. 
En *main*, se declara un objeto Figuras y despliega un men? con las distintas figuras geom?tricas para dibujar, dependiendo de la opci?n, se llama al m?todo 
espec?fico de la figura y se dibuja.