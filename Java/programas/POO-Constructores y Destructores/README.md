## Bienvenidos

Este programa fue realizado en Visual Studio Code, con el conjunto de extensiones *Debugger for Java*, *Extension Pack for Java*, *Maven for Java*, *Projecto Manager for Java* y *Test Runner for Java*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders, los cuales son:
- `src`: contiene los archivos *.java*.
- `lib`: mantiene dependencias y otros archivos.
- `bin`: aquí se guardan, por defecto, los archivos compilados generados.

## Descripción del programa

El objetivo de este programa es reparar un poco sobre constructores y destructores de clases base y derivadas en JAVA, los destructores no son necesarios en este lenguaje, a la par que debemos tomar consideraciones si la clase base es abstracta o no, y como debemos escribir el código cuando la clase padre tiene un constructor y sus clases hijos también.

El programa cuenta con una clase abstracta padre llamada `Figuras`, con dos clases derivadas `Rectangulo` y `Triangulo`, la clase padre cuenta con dos métodos, uno para calcular el área, otro para calcular el perímetro y uno de despliegue de resultados, no cuenta con un constructor; sus clases derivadas implementan dichos métodos según su necesidad, en *main*, simplemente se ingresan los valores de una base y altura para luego crear los objetos de las clases derivadas y llamar a los métodos de las mismas.