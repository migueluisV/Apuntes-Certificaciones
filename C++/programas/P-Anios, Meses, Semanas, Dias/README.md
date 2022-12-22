`09/07/2022 9:56am `

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `P-Anios, Meses, Semanas, Dias`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `P-Anios, Meses, Semanas, Dias.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es repasar sobre creación de clases por archivos separados en C++, sabiendo que uno de ellos tiene extensión *.h*
(cabecera de la clase) y otro tiene extensión *.cpp* (contenido o cuerpo de la clase). Se repasa también la sintaxis y palabras reservadas de
este lenguaje.

El programa cuenta con una clase llamada `DiasYMeses`, esta tiene un procedimiento que inicia el programa: pide al usuario un número entero que 
es representado como una cantidad de días transcurridos, luego, se llama a otro procedimiento que calcula la cantidad de semanas, meses y años de 
dichos días transcurridos, finalmente, se despliega esta información. En *main*, se declara el objeto de la clase DiasYMeses y se llama al método 
que da comienzo al programa y su despliegue.