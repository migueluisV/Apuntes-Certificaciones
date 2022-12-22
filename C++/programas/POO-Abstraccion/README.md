`20/08/2022 1:26pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `POO-Abstraccion`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `POO-Abstraccion.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es repasar sobre la Programación Orientada a Objetos (POO), este es un tema que puede ser tratado en el lenguaje C++, 
en esta ocasión, vemos acerca de las clases o métodos abstractas, y como estas cambian su comportamiento de una clase base a una derivada. Se 
cubrieron también un poco los temas de **constructores**, **destructores**, **herencia**, **métodos virtuales puros y regulares**, **formas de 
declarar e inicializar parámetros en constructores**, **el uso de la cabecera **#include <math.h>** para trabajar con funciones matemáticas y la 
**definición de #define USE_MATH_DEFINES** para utilizar la constante PI más actualizada.

El programa posee una clase base llamada `Figuras`, con dos métodos abstractos, los cuales van a utilizar las clases derivadas `Esfera`, `Cubo`, 
`Cono` y `Cilindro`, estos métodos calculan el volumen de dichas figuras y lo despliegan. En *main*, solamente se ingresan los datos para calcular 
el volumen, se declaran los objetos de las clases derivadas y se llaman a los métodos abstractos.