`15/07/2022 11:10am`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, adem?s de un fichero *.pdb*.
- `Sorteo-Metodo burbuja`: contiene el c?digo fuente *.cpp*, clases creadas y otros ficheros importantes.
- `Sorteo-Metodo burbuja.sln`: es el fichero que abre Visual Studio para trabajar y compilar el c?digo fuente.

## Descripci?n del programa

El objetivo de este programa es repasar sobre el ordenamiento o sorteo de elementos de una lista, arreglo o estructura, donde el resultado que buscamos es
que est?n ordenados los elementos de forma ascendente o descendente. En esta ocasi?n, vemos un poco sobre el ordenamiento de burbuja, sabemos que el ordenamiento 
simple recorre la lista o arreglo un n?mero determinado de veces donde se comparan todos los elementos y ordenarlos, de este tipo burbuja existen dos tipos m?s 
que mejoran al simple, realizando la actividad que deseamos en menos movimientos y tiempo.

El programa tiene un procedimiento Menu en *main*, el cual te permite escoger qu? tipo de sorteo deseas utilizar, si el Simple, Mejorado u Optimizado, dependiendo de tu 
selecci?n, se llama a los otros tres procedimientos disponibles: BurbujaSimple, BurbujaMejorada y BurbujaOptimizada, el primero y ?ltimo utilizan un arreglo 
string de diez elementos para ser ordenado, el segundo utiliza un arreglo float. Experimentando con la funci?n *printf*, llamando a la funci?n *main()* de manera 
recursiva y el flujo de programas cuando una entrada de datos es incorrecta con respecto al tipo de dato, utilizando *std::cin.fail()*.