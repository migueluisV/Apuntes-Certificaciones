`31/08/2022 3:37pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, adem?s de un fichero *.pdb*.
- `P-Sobrecarga de metodos`: contiene el c?digo fuente *.cpp*, clases creadas y otros ficheros importantes.
- `P-Sobrecarga de metodos.sln`: es el fichero que abre Visual Studio para trabajar y compilar el c?digo fuente.

## Descripci?n del programa

El objetivo de este programa es repasar sobre la creaci?n de m?ltiples m?todos con el mismo nombre y tipo de retorno, pero con distinta 
cantidad de par?metros o distintos tipos.

El programa posee una clase `Triangulo`, la cual tiene tres m?todos con el mismo nombre y tipo de retorno, pero distinta cantidad de par?metros 
(todos del mismo tipo), esta acci?n corresponde a la sobrecarga de m?todos, cada m?todo regresa el c?lculo del per?metro de un tipo de tri?ngulo 
(equil?tero, is?seles y escaleno), adem?s, cuenta con un m?todo que despliega los resultados de los c?lculos de per?metros. En *main*, se ingresan 
los datos en variables (en caso de que se ingrese un caracter o cadena en las variables float, se lanza una excepci?n), para posterior crear un 
objeto Triangulo, asignaci?n de valores a las variables mediante los m?todos sobrecargados y despliegue de resultados.