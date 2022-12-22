`13/8/2022 3:30pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `Sorteo-Metodo Shell`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `Sorteo-Metodo Shell.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es repasar sobre los tipos de ordenamiento de arreglos, en esta ocasión, tratando el método **Shell**, el cual requiere
de algunas variables adicionales al famoso método **Burbuja**. Además, vemos un poco sobre los **arreglos dinámicos**, utilizando la cabecera *vector*, 
quiero denotar que, requiere de una declaración propia (como el objeto de una clase), puede ser recorrido como un arreglo regular (utilizando ciclos, 
y pudiendose acceder a sus elementos con los corchetes rectangulares []), requiriendo del método *push_back()* para insertar elementos en el vector. 
Definitivamente es una buena herramienta para trabajar arreglos dinámicos, aunque no descartemos los vectores con punteros.

Se tiene un procedimiento estático *IngresoSueldos*, el cual recibe números decimales que representan sueldos de personas, estos son los elementos que 
constituiran un vector, el cual se busca ordenarlo por medio del método Shell, una vez ingresados los elementos, se ordenan. En *main*, se solicita 
al usuario cuántos elementos tendrá el vector y se llama a IngresoSueldos.