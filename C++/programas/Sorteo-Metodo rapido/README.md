`13/08/2022 5:33pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `Sorteo-Metodo rapido`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `Sorteo-Metodo rapido.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es repasar sobre los tipos de ordenamiento de arreglos, en esta ocasión, tratando el método **Rápido**, 
el cual requiere de algunas variables adicionales distintas al método **Shell** o **Burbuja**. En este código, también utilizamos la 
unción *rand()*, la cual regresa número pseudoaleatorios enteros, agregamos ciertos valores para que estos valores estuvieran comprendidos 
dentro de un rango (p. e: entre 1 y 100); de igual forma, cambié la forma en la que son tratados los errores de formato en C++: en vez de 
que sea por medio de ocho instrucciones seguidas, utilizo un bloque *try-catch*, poniendo la instrucción *throw* donde podría ocurrir una 
excepción de formato de variables.

El programa cuenta con un procedimiento estático *ValoresArreglo*, el cual recibe los valores para declarar un vector de datos a ordenar, 
los datos que recibe son el tamaño del vector, y el límite superior e inferior del rango de valores aleatorios que van a ser ingresados 
en el vector, una vez ingresaodos, se le manda a llamar a otro método *SorteoRapido*, el cual se encarga de la tarea de ordenar los 
elementos del vector. En *main*, se llama a ValoresArreglo, se despliegan todos los elementos del vector usando un procedimiento estático
*Despliegue*, se llama a SorteoRapido, para ordenar los elementos, y se vuelve a llamar a Despliegue, para visualizar el vector ordenado.