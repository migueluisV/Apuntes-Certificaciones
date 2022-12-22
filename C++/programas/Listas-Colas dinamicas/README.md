`18/08/2022 10:51am`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `Cola_Nombres`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `Cola_Nombres.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es repasar sobre los algunas estructuras de datos o listas en C++, el tema a tratar son las colas dinámicas, 
utilizamos la cabecera *#include <queue>* para acceder a métodos que nos faciliten esta tarea. Las **colas dinámicas** siguen la filosofía 
de **primero en entrar, primero en salir** (First In, Fist Out por sis siglas en inglés), al utilizar los métodos que nos ofrece la cabecera 
podemos realizar algunas de las tareas básicas de las listas fácilmente (inserción, eliminación, despliegue, búsqueda y vaciado). Algo que 
me llamó la atención, fue el hecho de que no posee tantos métodos como en otros lenguajes de programación (Java o C#, por ejemplo), para 
vaciar la cola o buscar un elemento en sus items, es requerido utilizar algún ciclo u otro medio.

El programa cuenta con una clase `Cola_Nombres`, el cual posee métodos para la manipulación de una cola, además de un método el cual es un 
menú para poder escoger qué hacer con la cola recibida como parámetro. En *main*, se declara una cola con la cabecera queue y un objeto de la 
clase creada, para, posterior a ello, se llama al método Menu para comenzar el programa.