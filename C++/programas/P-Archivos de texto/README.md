`18/09/2022 2:34pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Archivos`: contiene los archivos de texto creados en el programa.
- `x64`: genera ficheros de ejecución por la configuración x64 del programa.
- `P-Archivos de texto`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `P-Archivos de texto.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es repasar la creación, escritura y lectura de archivos de texto con C++, según una breve investigación que realicé, existen 
distintas clases o librerías tanto para lograr escribir en archivos de texto, como en la lectura y manipulación de archivos, decidí utilizar las cabecera 
**fstream**, esta cabecera te permite utilizar objetos *ofstream* (para crear archivos) e *ifstream* (para leer archivos).

El programa posee una clase llamada ArchivoTexto, la cual tiene tres procedimientos públicos: CrearArchivo, LeerArchivo y Menu, en main, se llama a 
Menu para poder desplegar las distintas opciones que tiene el usuario para trabajar, debe tener algún archivo en el directorio anteriormente mencionado 
para poder apreciar alguno en la lista de archivos disponibles, por lo que primero debe crear un archivo (solamente .txt) y escribir contenido en él.

## Uso de cabecera boost para generar lista de archivos de directorio

Debido a que las versiones más recientes de C++ no poseen una forma directa o sencilla de generar un arreglo, lista o vector con todos los nombres de archivos 
de un directorio, decidí realizar una investigación sobre otras cabeceras o métodos para obtener este resultado, que forma parte del código del programa, 
investigando, llegué a conocer la cabecera **boost**, que tiene una clase llamada *filesystem*, esta clase te permite acceder a los archivos y otras funciones 
de una ruta de directorio, a partir de esta, extraigo los nombres y extensiones de los archivos presentes en una ruta que yo escoga.

Para poder trabajar con esta cabecera, les recomiendo ver el vídeo del siguiente enlace, está en inglés pero es fácil de seguir porque es visual el tutorial, 
recomiendo hacer exactamente lo que el dueño del video dice, para que no haya ningún bug o error a la hora de implementar la cabecera a sus proyectos:

https://youtu.be/L-_vTMjcRzQ?t=295