## Bienvenidos

Este programa fue realizado en Visual Studio Code, con el conjunto de extensiones *Debugger for Java*, *Extension Pack for Java*, *Maven for Java*, *Projecto Manager for Java* y *Test Runner for Java*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders, los cuales son:
- `src`: contiene los archivos *.java*.
- `lib`: mantiene dependencias y otros archivos.
- `bin`: aquí se guardan, por defecto, los archivos compilados generados.

## Descripción del programa

El objetivo de este programa es repasar las clases abstractas, aplicando el mismo concepto de *abstracción* para distintas clases derivadas a partir de una clase base, cada clase derivada ejecuta los métodos abstractos a su manera.

El prograba posee una clase abstracta padre llamada `Figuras`, la cual únicamente tiene dos métodos sin inicializar, los cuales son *CalcularVolumen* y *DesplegarVolumen*, estos métodos serán adaptados para cada clase hija que tenga Figuras, ya que cada figura tiene una fórmula distinta para calcular su volumen, aplicando así el concepto de abstracción en la Programación Orientada a Objetos. en **App.java** se tiene un procedimiento estático que recibe los valores de la medida de un lado, radio y altura para calcular los distintos volumenes de las figuras, se declaran los objetos de las clases hijas y se llaman a los métodos anteriormente mencionados, `main` solamente llama al procedimiento estático que da comienzo al programa.