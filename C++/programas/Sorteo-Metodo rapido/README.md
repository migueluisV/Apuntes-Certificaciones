`13/08/2022 5:33pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, adem?s de un fichero *.pdb*.
- `Sorteo-Metodo rapido`: contiene el c?digo fuente *.cpp*, clases creadas y otros ficheros importantes.
- `Sorteo-Metodo rapido.sln`: es el fichero que abre Visual Studio para trabajar y compilar el c?digo fuente.

## Descripci?n del programa

El objetivo de este programa es repasar sobre los tipos de ordenamiento de arreglos, en esta ocasi?n, tratando el m?todo **R?pido**, 
el cual requiere de algunas variables adicionales distintas al m?todo **Shell** o **Burbuja**. En este c?digo, tambi?n utilizamos la 
unci?n *rand()*, la cual regresa n?mero pseudoaleatorios enteros, agregamos ciertos valores para que estos valores estuvieran comprendidos 
dentro de un rango (p. e: entre 1 y 100); de igual forma, cambi? la forma en la que son tratados los errores de formato en C++: en vez de 
que sea por medio de ocho instrucciones seguidas, utilizo un bloque *try-catch*, poniendo la instrucci?n *throw* donde podr?a ocurrir una 
excepci?n de formato de variables.

El programa cuenta con un procedimiento est?tico *ValoresArreglo*, el cual recibe los valores para declarar un vector de datos a ordenar, 
los datos que recibe son el tama?o del vector, y el l?mite superior e inferior del rango de valores aleatorios que van a ser ingresados 
en el vector, una vez ingresaodos, se le manda a llamar a otro m?todo *SorteoRapido*, el cual se encarga de la tarea de ordenar los 
elementos del vector. En *main*, se llama a ValoresArreglo, se despliegan todos los elementos del vector usando un procedimiento est?tico
*Despliegue*, se llama a SorteoRapido, para ordenar los elementos, y se vuelve a llamar a Despliegue, para visualizar el vector ordenado.