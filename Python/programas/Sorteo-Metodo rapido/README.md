`7:40pm 11/11/2022`

## Bienvenidos

Este programa fue realizado en PyCharm Community Edition 2022.1.

## Estructura de la carpeta

Esta carpeta contiene dos subcarpetas y un archivo, los cuales son:
- `.idea`: aquí se almacenan todas las configuraciones del proyecto en archivos *.xml*.
- `main.py`: es el código fuente del programa.

## Descripción del programa

El objetivo de este programa es repasar sobre los tipos de sorteos más populares, en este caso: **el sorteo burbuja**. 
Los ordenamientos de colecciones de datos se basan en comparar los elementos entre sí, sin embargo, existen distintas 
formas de compararlos, el método rápido utiliza la filosofía _divide y vencerás_, la cual en este caso parte la lista 
o arreglo en dos, donde existe un pivote el cual determina una lista que es menor a él y una que es mayor, ordena ambas 
sublistas y ya tendríamos la lista ordenada.

El programa solicita al usuario la cantidad de elementos de la lista, posterior a ello, se ingresan a la lista valores 
aleatorios, se imprime la lista con sus valores sin ordenar, se pregunta al usuario si la lista la quiere ordenada 
ascendente o descendentemente, sin importar cuál haya sido la respuesta, la lista se ordena por el método rápido de 
manera ascendente, sin embargo, si la quiere descendente, la lista se invierte con el método de listas _reverse()_, y 
se imprime el resultado.