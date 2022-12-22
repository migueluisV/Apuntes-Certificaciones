`4:31pm 04/11/2022`

## Bienvenidos

Este programa fue realizado en PyCharm Community Edition 2022.1.

## Estructura de la carpeta

Esta carpeta contiene dos subcarpetas y un archivo, los cuales son:
- `.idea`: aquí se almacenan todas las configuraciones del proyecto en archivos *.xml*.
- `main.py`: es el código fuente del programa.

## Descripción del programa

El objetivo de este programa es repasar sobre la sobrecarga de métodos en Python. Esta herramienta en este lenguaje no 
existe, es decir, **no podemos sobrecargar** (como ocurriría en otros lenguajes) **funciones** directamente o de la 
forma como la conocemos en Python, ya que, debido al diseño del mismo, no es necesario, sin embargo, podemos acudir a 
los parámetros **(*)args**, como bien sabemos, estos permiten que una función reciba una cantidad indeterminada de 
parámetros en una llamada, es con esta herramienta que podemos recibir la cantidad de parámetros en total que se 
recibirían en todas las funciones sobrecargadas; si vamos a utilizar la primera función sobrecargada, el resto de 
parámetros pueden estar igualados a 0, si utilizamos la segunda función sobrecargada, todos los parámetros estarán 
igualados a 0, menos los que vayamos a utilizar, como vemos en el código.

El programa muestra un menú de opciones para calcular el perímetro de los tres tipos de triángulos: equilátero, 
isosceles y escaleno, dependiendo de nuestra selección, se nos pide las medidas de sus lados y se le asigna a una 
variable el cálculo del perímetro del triángulo utilizando la función "sobrecargada", finalmente, se despliega el 
resultado.