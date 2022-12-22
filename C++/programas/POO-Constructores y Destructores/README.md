`21/08/2022 10:32am`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `POO-Constructores y Destructores`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `POO-Constructores y Destructores.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es repasar sobre la Programación Orientada a Objetos (POO), este es un tema que puede ser tratado en el lenguaje C++, 
en esta ocasión, vemos acerca de los constructores y destructores de clases, de como pueden ser utilizados y como son llamados cuando se crea un objeto 
de una clase derivada a partir de una base. En C++, cuando se crea un objeto de una clase base, este posee un constructor y destructor, si se crea una 
clase derivada de una clase base y creamos un objeto de esta clase, lo que ocurre es que primero se llama al constructor de la clase base y luego al de 
la clase base, contrario a esto, cuando se acaba la ejecución del programa, primero se llama al destructor de la clase derivada y en seguida al de la 
clase base. Además de estos temas, tocamos temas como **herencia**, **excepción de formato para asignación de valores a variables con bloque *try-catch***, 
**métodos virtuales regulares y puros**, y **encapsulación para la herencia**.

El programa posee una clase base `Figuras`, este tiene atributos y métodos que no son de gran importancia para este programa, lo importante es que se declaran 
los constructores y destructores, la clase base no posee constructor; también se tiene clases derivadas `Rectangulo` y `Triangulo`, los cuales también poseen 
constructores y destructores. En *main*, se ingresan los datos para calcular el área y perímetro de unas figuras geométricas y se declaran los objetos de las 
clases derivadas, posteriormente, se llaman a los métodos de las clases, cuando acaba la ejecución del programa, se llaman a los destructores de todas las clases 
para la limpieza de la memoria de los objetos.