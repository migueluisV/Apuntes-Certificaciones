`31/08/2022 3:37pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `P-Sobrecarga de metodos`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `P-Sobrecarga de metodos.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es repasar sobre la creación de múltiples métodos con el mismo nombre y tipo de retorno, pero con distinta 
cantidad de parámetros o distintos tipos.

El programa posee una clase `Triangulo`, la cual tiene tres métodos con el mismo nombre y tipo de retorno, pero distinta cantidad de parámetros 
(todos del mismo tipo), esta acción corresponde a la sobrecarga de métodos, cada método regresa el cálculo del perímetro de un tipo de triángulo 
(equilátero, isóseles y escaleno), además, cuenta con un método que despliega los resultados de los cálculos de perímetros. En *main*, se ingresan 
los datos en variables (en caso de que se ingrese un caracter o cadena en las variables float, se lanza una excepción), para posterior crear un 
objeto Triangulo, asignación de valores a las variables mediante los métodos sobrecargados y despliegue de resultados.