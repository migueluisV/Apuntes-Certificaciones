`18/08/2022 11:29pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `Listas-Pilas dinamicas`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `Listas-Pilas dinamicas.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.

## Descripción del programa

El objetivo de este programa es repasar sobre algunas estructuras de datos o listas en C++, el tema a tratar son las pilas dinámicas, 
utilizando la cabecera *#include <stack>* para acceder a métodos que nos faciliten esta tarea. Las **pilas dinámicas** siguen la 
filosofía de **último en entrar, primero en salir** (Last In, Fist Out por sis siglas en inglés), al utilizar los métodos que nos 
ofrece la cabecera podemos realizar algunas de las tareas básicas de las listas fácilmente (inserción, eliminación, despliegue, 
búsqueda y vaciado), sin embargo, para poder buscar algún elemento dentro de la pila, o recorrerla, es necesario utilizar pilas 
temporales adicionales para lograr esta tarea; esto no sería requerido en otros lenguaes, como C# o Java.

El programa cuenta con una clase `Pilas_Alumnos`, el cual posee los métodos que modifican la pila que se les pasa como parámetro, 
estos métodos son: inserción, eliminación, búsqueda, recorrido y vaciado de pila. En *main*, se declaran objetos de la clase *stack*, 
un objeto de la clase Pilas_Alumnos y se manda a llamar al método Menu del objeto recién creado.