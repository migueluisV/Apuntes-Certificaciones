`15/07/2022 11:10am`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `Sorteo-Metodo burbuja`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `Sorteo-Metodo burbuja.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es repasar sobre el ordenamiento o sorteo de elementos de una lista, arreglo o estructura, donde el resultado que buscamos es
que estén ordenados los elementos de forma ascendente o descendente. En esta ocasión, vemos un poco sobre el ordenamiento de burbuja, sabemos que el ordenamiento 
simple recorre la lista o arreglo un número determinado de veces donde se comparan todos los elementos y ordenarlos, de este tipo burbuja existen dos tipos más 
que mejoran al simple, realizando la actividad que deseamos en menos movimientos y tiempo.

El programa tiene un procedimiento Menu en *main*, el cual te permite escoger qué tipo de sorteo deseas utilizar, si el Simple, Mejorado u Optimizado, dependiendo de tu 
selección, se llama a los otros tres procedimientos disponibles: BurbujaSimple, BurbujaMejorada y BurbujaOptimizada, el primero y último utilizan un arreglo 
string de diez elementos para ser ordenado, el segundo utiliza un arreglo float. Experimentando con la función *printf*, llamando a la función *main()* de manera 
recursiva y el flujo de programas cuando una entrada de datos es incorrecta con respecto al tipo de dato, utilizando *std::cin.fail()*.