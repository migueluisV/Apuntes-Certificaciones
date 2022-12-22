`28/06/2022 4:06pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Code, con el conjunto de extensiones *Debugger for Java*, *Extension Pack for Java*, *Maven for Java*, *Projecto Manager for Java* y *Test Runner for Java*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders, los cuales son:
- `src`: contiene los archivos *.java*.
- `lib`: mantiene dependencias y otros archivos.
- `bin`: aquí se guardan, por defecto, los archivos compilados generados.

## Descripción del programa

El objetivo de este programa es repasar sobre el ordenamiento o sorteo de elementos de una lista, arreglo o estructura, donde el resultado que buscamos es que estén ordenados los elementos de forma ascendente o descendente. En esta ocasión, vemos un poco sobre el ordenamiento de burbuja, sabemos que el ordenamiento simple recorre la lista o arreglo un número determinado de veces donde se comparan todos los elementos y ordenarlos, de este tipo burbuja existen dos tipos más que mejoran al simple, realizando la actividad que deseamos en menos movimientos y tiempo.

El programa tiene un procedimiento *Menu*, el cual te permite escoger qué tipo de sorteo deseas utilizar, si el Simple, Mejorado u Optimizado, dependiendo de tu selección, se llama a los otros tres procedimientos disponibles: *BurbujaSimple*, *BurbujaMejorada* y *BurbujaOptimizada*, el primero y último utilizan un arreglo string de diez elementos para ser ordenado, el segundo utiliza un arreglo float. *main* simplemente se encarga de mandar a llamar a *Menu*.