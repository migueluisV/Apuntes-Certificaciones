`18/08/2022 11:29pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, adem?s de un fichero *.pdb*.
- `Listas-Pilas dinamicas`: contiene el c?digo fuente *.cpp*, clases creadas y otros ficheros importantes.
- `Listas-Pilas dinamicas.sln`: es el fichero que abre Visual Studio para trabajar y compilar el c?digo fuente.

## Descripci?n del programa

El objetivo de este programa es repasar sobre algunas estructuras de datos o listas en C++, el tema a tratar son las pilas din?micas, 
utilizando la cabecera *#include <stack>* para acceder a m?todos que nos faciliten esta tarea. Las **pilas din?micas** siguen la 
filosof?a de **?ltimo en entrar, primero en salir** (Last In, Fist Out por sis siglas en ingl?s), al utilizar los m?todos que nos 
ofrece la cabecera podemos realizar algunas de las tareas b?sicas de las listas f?cilmente (inserci?n, eliminaci?n, despliegue, 
b?squeda y vaciado), sin embargo, para poder buscar alg?n elemento dentro de la pila, o recorrerla, es necesario utilizar pilas 
temporales adicionales para lograr esta tarea; esto no ser?a requerido en otros lenguaes, como C# o Java.

El programa cuenta con una clase `Pilas_Alumnos`, el cual posee los m?todos que modifican la pila que se les pasa como par?metro, 
estos m?todos son: inserci?n, eliminaci?n, b?squeda, recorrido y vaciado de pila. En *main*, se declaran objetos de la clase *stack*, 
un objeto de la clase Pilas_Alumnos y se manda a llamar al m?todo Menu del objeto reci?n creado.