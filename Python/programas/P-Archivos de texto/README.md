`4:31pm 30/11/2022`

## Bienvenidos

Este programa fue realizado en PyCharm Community Edition 2022.1.

## Estructura de la carpeta

Esta carpeta contiene dos subcarpetas y un archivo, los cuales son:
- `.idea`: aquí se almacenan todas las configuraciones del proyecto en archivos *.xml*.
- `main.py`: es el código fuente del programa.

## Descripción del programa

El objetivo de este programa es repasar sobre la escritura, lectura y creación de archivos en Python. Sabemos que con la 
función **open()** abrimos un archivo, dependiendo del modo, este se crea, se abre para sobreescribir, agregar al final 
del archivo, etc.

Se pretendía que el programa tuviera una clase con una variable tipo archivo para manipular esta variable (crear, abrir 
el archivo o eliminarlo), sin embargo, diversas dificultades hicieron que la clase se redujera a almacenar las funciones 
de escribir y leer el archivo. Fuera de la clase, tenemos una función que regresa en una lista todos los ficheros dentro 
de un directorio y otra que los despliega.

El programa posee un menú de opciones para trabajar con el archivo: crear y escribir, abrir y escribir, eliminar y leer. 
Para todas las opciones, se le solicita al usuario el nombre del archivo, si no incluye la extensión del mismo, se le 
agrega, posterior a ello, se realiza la acción solicitada por el usuario; todos los archivos almacenados se encuentran 
en la carpeta "_Archivos_" dentro de la carpeta de la solución.