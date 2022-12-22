`8:40pm 11/11/2022`

## Bienvenidos

Este programa fue realizado en PyCharm Community Edition 2022.1.

## Estructura de la carpeta

Esta carpeta contiene dos subcarpetas y un archivo, los cuales son:
- `.idea`: aquí se almacenan todas las configuraciones del proyecto en archivos *.xml*.
- `main.py`: es el código fuente del programa.

## Descripción del programa

El objetivo de este programa es repasar sobre los tipos de sorteos más populares, en este caso: **el sorteo Shell**. 
Los ordenamientos de colecciones de datos se basan en comparar los elementos entre sí, sin embargo, existen distintas 
formas de compararlos, el método Shell compara en base en un intervalo de elementos, es decir, si son 10 elementos en 
la lista, compara el 1ro con el 5to, el 2do con el 6to, el 3ro con el 7mo, así sucesivamente, hasta que a lista queda 
ordenada.

El programa solicita al usuario la cantidad de elementos de la lista, posterior a ello, se ingresan a la lista valores, se imprime la lista con sus valores sin ordenar, se pregunta al usuario si la lista la quiere ordenada 
ascendente o descendentemente, sin importar cuál haya sido la respuesta, la lista se ordena por el método rápido de 
manera ascendente, sin embargo, si la quiere descendente, la lista se invierte con el método de listas _reverse()_, y 
se imprime el resultado.