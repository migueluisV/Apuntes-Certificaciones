`10/07/2022 3:46pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `P-Calificaciones alumnos`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `P-Calificaciones alumnos.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es repasar sobre la sintaxis de C++, esto incluyendo la declaración de clases, objetos de clases, arreglos
dentro de ciclos, recursividad y excepción de formato (ingresar un tipo de dato distinto a una variable), etc.

El programa cuenta con una clase `CaliAl`, la cual tiene un procedimiento *IngresoDatos*, la cual recibe nombres y calificaciones de alumnos, 
en base a ello, se busca cual calificación fue mayor, menor, aprobatorias (mayor a 6), reprobatorias (menor a 6), válidas (entre 0 y 10) e 
inválidas (menor a 0 y mayor a 10), el procedimiento *Despliegue* muestra todos estos datos, además de los elementos de los arreglos. *main* 
declara los arreglos float y string, el objeto CaliAl y manda a llamar al método IngresoDatos del objeto recién creado, pasándole por parámetro 
los arreglos declarados.