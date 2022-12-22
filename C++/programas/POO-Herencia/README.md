`21/08/2022 11:15am`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `POO-Herencia`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `POO-Herencia.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es repasar sobre la Programación Orientada a Objetos (POO), este es un tema que puede ser tratado en el lenguaje C++, 
en esta ocasión, vemos acerca de la herencia, un tema bastante fuerte en este paradigma de la programación. Simplemente se trata de heredar los 
miembros (atributos y métodos) de una clase (padre o base) a otra (hija o derivada), se pueden heredar los mienbros públicos o privados para darles 
un uso distinto, además, se puede heredar los miembros de varias clase padre a una sola hija. La herencia se logra declarando una clase, seguido de 
**dos puntos (:)** y el nombre de la clase padre. Además de la herencia, se tocó el tema de **declarar clases en el mismo archivo de solución**, 
**constructores** y **destructores**.

El programa cuenta con una clase base `Escuela`, el cual posee atributos privados, constructor y un método público, el cual despliega el contenido de 
los atributos. También existe una clase derivada de Escuela: `Alumno`, esta clase derivada posee sus propios atributos, constructor y método que despliega 
el contenido de sus atributos, sin embargo, dentro del método propio de la clase derivada, se manda a llamar al método de la clase base, es decir, la clase 
derivada hace uso del método que heredó de su clase base. En *main*, se ingresan los valores para el constructor de las clases y se manda a llamar al método 
de la clase derivada, el cual ya tiene incluido el método de despliegue de su clase base.