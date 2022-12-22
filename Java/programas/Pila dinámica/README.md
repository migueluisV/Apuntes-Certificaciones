`24/06/2022 11:36pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Code, con el conjunto de extensiones *Debugger for Java*, *Extension Pack for Java*, *Maven for Java*, *Projecto Manager for Java* y *Test Runner for Java*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders, los cuales son:
- `src`: contiene los archivos *.java*.
- `lib`: mantiene dependencias y otros archivos.
- `bin`: aquí se guardan, por defecto, los archivos compilados generados.

## Descripción del programa

El objetivo de este programa es repasar sobre las pilas dinámicas, es decir, en vez de crear una pila con un arreglo y tamaño definido, se crea la pila con una clase especial sin tamaño fijo, utilizando la clase Stack de JAVA, es necesario importarla en nuestro proyecto para utilizarla. El programa contiene un menú para poder agregar alumnos y sus promedios utilizando métodos especiales de la clase Stack.

El programa posee una clase llamada `Pila_Alumnos`, la cual tiene como métodos las principales acciones a realizar con una pila: *Agregar*, *Eliminar*, *Vaciar*, *Buscar* y *Recorrer*, todos estos métodos tienen como parámetro una pila con la cual realizarán su tarea en cuestión; además, esta clase tiene un método *Menu*, el cual proporciona un menú para acceder más cómodamente a los otros métodos anteriormente mencionados. En el archivo **App.java**, simplemente importamos la clase *java.util.Stack* y en `main`, declaramos los objetos de la clase que vayamos a utilizar.