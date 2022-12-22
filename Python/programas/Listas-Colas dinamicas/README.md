`5:17pm 13/11/2022`

## Bienvenidos

Este programa fue realizado en PyCharm Community Edition 2022.1.

## Estructura de la carpeta

Esta carpeta contiene dos subcarpetas y un archivo, los cuales son:
- `.idea`: aquí se almacenan todas las configuraciones del proyecto en archivos *.xml*.
- `main.py`: es el código fuente del programa.

## Descripción del programa

El objetivo de este programa es repasar sobre una colección de datos particular: las **colas**. En otros lenguajes, 
podemos crear estructuras de colas de manera **estática**, es decir, que tengan un límite de elementos a agregar, de 
manera **dinámica**, donde agregamos cuantos elementos queramos; la primera forma de declaración involucra crear la clase 
o métodos de la cola (inserción, eliminación, recorrido, búsqueda y vaciado) de manera manual y siguiendo la lógica de 
las colas: FIFO (_First In, First Out_), y la segunda por lo general ya es una clase del lenguaje o externa, que viene 
con las operaciones de las colas integradas. En Python, no existe alguna colección o estructura de datos que sea 
estática, pero la clase **deque** te permite crear listas estilo cola.

El programa posee un menú con las operaciones de colas anteriormente mencionadas, se crea un objeto _deque_, con 
dicho objeto, se crea un objeto de la clase **Cola** con las operaciones de colas y el usuario escoge que operación 
hacer con la cola.