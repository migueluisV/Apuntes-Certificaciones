`18/08/2022 10:51am`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, adem?s de un fichero *.pdb*.
- `Cola_Nombres`: contiene el c?digo fuente *.cpp*, clases creadas y otros ficheros importantes.
- `Cola_Nombres.sln`: es el fichero que abre Visual Studio para trabajar y compilar el c?digo fuente.

## Descripci?n del programa

El objetivo de este programa es repasar sobre los algunas estructuras de datos o listas en C++, el tema a tratar son las colas din?micas, 
utilizamos la cabecera *#include <queue>* para acceder a m?todos que nos faciliten esta tarea. Las **colas din?micas** siguen la filosof?a 
de **primero en entrar, primero en salir** (First In, Fist Out por sis siglas en ingl?s), al utilizar los m?todos que nos ofrece la cabecera 
podemos realizar algunas de las tareas b?sicas de las listas f?cilmente (inserci?n, eliminaci?n, despliegue, b?squeda y vaciado). Algo que 
me llam? la atenci?n, fue el hecho de que no posee tantos m?todos como en otros lenguajes de programaci?n (Java o C#, por ejemplo), para 
vaciar la cola o buscar un elemento en sus items, es requerido utilizar alg?n ciclo u otro medio.

El programa cuenta con una clase `Cola_Nombres`, el cual posee m?todos para la manipulaci?n de una cola, adem?s de un m?todo el cual es un 
men? para poder escoger qu? hacer con la cola recibida como par?metro. En *main*, se declara una cola con la cabecera queue y un objeto de la 
clase creada, para, posterior a ello, se llama al m?todo Menu para comenzar el programa.