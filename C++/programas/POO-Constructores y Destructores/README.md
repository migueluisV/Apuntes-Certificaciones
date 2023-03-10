`21/08/2022 10:32am`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, adem?s de un fichero *.pdb*.
- `POO-Constructores y Destructores`: contiene el c?digo fuente *.cpp*, clases creadas y otros ficheros importantes.
- `POO-Constructores y Destructores.sln`: es el fichero que abre Visual Studio para trabajar y compilar el c?digo fuente.

## Descripci?n del programa

El objetivo de este programa es repasar sobre la Programaci?n Orientada a Objetos (POO), este es un tema que puede ser tratado en el lenguaje C++, 
en esta ocasi?n, vemos acerca de los constructores y destructores de clases, de como pueden ser utilizados y como son llamados cuando se crea un objeto 
de una clase derivada a partir de una base. En C++, cuando se crea un objeto de una clase base, este posee un constructor y destructor, si se crea una 
clase derivada de una clase base y creamos un objeto de esta clase, lo que ocurre es que primero se llama al constructor de la clase base y luego al de 
la clase base, contrario a esto, cuando se acaba la ejecuci?n del programa, primero se llama al destructor de la clase derivada y en seguida al de la 
clase base. Adem?s de estos temas, tocamos temas como **herencia**, **excepci?n de formato para asignaci?n de valores a variables con bloque *try-catch***, 
**m?todos virtuales regulares y puros**, y **encapsulaci?n para la herencia**.

El programa posee una clase base `Figuras`, este tiene atributos y m?todos que no son de gran importancia para este programa, lo importante es que se declaran 
los constructores y destructores, la clase base no posee constructor; tambi?n se tiene clases derivadas `Rectangulo` y `Triangulo`, los cuales tambi?n poseen 
constructores y destructores. En *main*, se ingresan los datos para calcular el ?rea y per?metro de unas figuras geom?tricas y se declaran los objetos de las 
clases derivadas, posteriormente, se llaman a los m?todos de las clases, cuando acaba la ejecuci?n del programa, se llaman a los destructores de todas las clases 
para la limpieza de la memoria de los objetos.