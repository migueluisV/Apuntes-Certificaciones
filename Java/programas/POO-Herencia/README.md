## Bienvenidos

Este programa fue realizado en Visual Studio Code, con el conjunto de extensiones *Debugger for Java*, *Extension Pack for Java*, *Maven for Java*, *Projecto Manager for Java* y *Test Runner for Java*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders, los cuales son:
- `src`: contiene los archivos *.java*.
- `lib`: mantiene dependencias y otros archivos.
- `bin`: aquí se guardan, por defecto, los archivos compilados generados.

## Descripción del programa

El objetivo de este programa es repasar la herencia de una super clase a una clase derivada, la super clase posee sus atributos, métodos y constructor, la clase derivada contiene lo mismo, pero debe lidiar con manejar su propio constructor y el de su clase padre, al final, se despliega la información recabada.

El programa no es más que una clase padre que posee atributos, un constructor y método que hereda todo eso a una clase hija, dicha clase lo utiliza dentro de su constructor y método heredado. *main* es donde se asignan valores a las variables y se los pasa como parámetro al constructor de los objetos de la clase derivada.