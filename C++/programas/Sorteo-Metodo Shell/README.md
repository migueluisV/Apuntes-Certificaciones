`13/8/2022 3:30pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, adem?s de un fichero *.pdb*.
- `Sorteo-Metodo Shell`: contiene el c?digo fuente *.cpp*, clases creadas y otros ficheros importantes.
- `Sorteo-Metodo Shell.sln`: es el fichero que abre Visual Studio para trabajar y compilar el c?digo fuente.

## Descripci?n del programa

El objetivo de este programa es repasar sobre los tipos de ordenamiento de arreglos, en esta ocasi?n, tratando el m?todo **Shell**, el cual requiere
de algunas variables adicionales al famoso m?todo **Burbuja**. Adem?s, vemos un poco sobre los **arreglos din?micos**, utilizando la cabecera *vector*, 
quiero denotar que, requiere de una declaraci?n propia (como el objeto de una clase), puede ser recorrido como un arreglo regular (utilizando ciclos, 
y pudiendose acceder a sus elementos con los corchetes rectangulares []), requiriendo del m?todo *push_back()* para insertar elementos en el vector. 
Definitivamente es una buena herramienta para trabajar arreglos din?micos, aunque no descartemos los vectores con punteros.

Se tiene un procedimiento est?tico *IngresoSueldos*, el cual recibe n?meros decimales que representan sueldos de personas, estos son los elementos que 
constituiran un vector, el cual se busca ordenarlo por medio del m?todo Shell, una vez ingresados los elementos, se ordenan. En *main*, se solicita 
al usuario cu?ntos elementos tendr? el vector y se llama a IngresoSueldos.