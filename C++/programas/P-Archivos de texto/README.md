`18/09/2022 2:34pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Archivos`: contiene los archivos de texto creados en el programa.
- `x64`: genera ficheros de ejecuci?n por la configuraci?n x64 del programa.
- `P-Archivos de texto`: contiene el c?digo fuente *.cpp*, clases creadas y otros ficheros importantes.
- `P-Archivos de texto.sln`: es el fichero que abre Visual Studio para trabajar y compilar el c?digo fuente.

## Descripci?n del programa

El objetivo de este programa es repasar la creaci?n, escritura y lectura de archivos de texto con C++, seg?n una breve investigaci?n que realic?, existen 
distintas clases o librer?as tanto para lograr escribir en archivos de texto, como en la lectura y manipulaci?n de archivos, decid? utilizar las cabecera 
**fstream**, esta cabecera te permite utilizar objetos *ofstream* (para crear archivos) e *ifstream* (para leer archivos).

El programa posee una clase llamada ArchivoTexto, la cual tiene tres procedimientos p?blicos: CrearArchivo, LeerArchivo y Menu, en main, se llama a 
Menu para poder desplegar las distintas opciones que tiene el usuario para trabajar, debe tener alg?n archivo en el directorio anteriormente mencionado 
para poder apreciar alguno en la lista de archivos disponibles, por lo que primero debe crear un archivo (solamente .txt) y escribir contenido en ?l.

## Uso de cabecera boost para generar lista de archivos de directorio

Debido a que las versiones m?s recientes de C++ no poseen una forma directa o sencilla de generar un arreglo, lista o vector con todos los nombres de archivos 
de un directorio, decid? realizar una investigaci?n sobre otras cabeceras o m?todos para obtener este resultado, que forma parte del c?digo del programa, 
investigando, llegu? a conocer la cabecera **boost**, que tiene una clase llamada *filesystem*, esta clase te permite acceder a los archivos y otras funciones 
de una ruta de directorio, a partir de esta, extraigo los nombres y extensiones de los archivos presentes en una ruta que yo escoga.

Para poder trabajar con esta cabecera, les recomiendo ver el v?deo del siguiente enlace, est? en ingl?s pero es f?cil de seguir porque es visual el tutorial, 
recomiendo hacer exactamente lo que el due?o del video dice, para que no haya ning?n bug o error a la hora de implementar la cabecera a sus proyectos:

https://youtu.be/L-_vTMjcRzQ?t=295