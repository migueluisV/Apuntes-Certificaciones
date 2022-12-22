`5:15pm`

## Bienvenidos

Este programa fue realizado en PyCharm Community Edition 2022.1.

## Estructura de la carpeta

Esta carpeta contiene dos subcarpetas y un archivo, los cuales son:
- `.idea`: aquí se almacenan todas las configuraciones del proyecto en archivos *.xml*.
- `main.py`: es el código fuente del programa.

## Descripción del programa

El objetivo de este programa es repasar sobre la **programación orientada a objetos**, en específico, sobre la 
**abstracción** de métodos y clases. Python implementa la abstracción de una manera un poco distinta a otros lenguajes, 
requiere de una clase llamada **abc** y el decorador **@abstractmethod**, como bien sabemos, las clases abstractas 
son catalogadas así porque contienen al menos un método abstracto, y no se pueden crear objetos de dichas clases, en las 
clases derivadas de una clase abstracta, es obligatorio implementar todos los métodos abstractos de la clase base.

El programa posee una clase base llamada _Figuras_, la cual es abstracta debido a que tiene dos métodos abstractos, de 
ella, son derivadas cuatro clases: _Esfera_, _Cubo_, _Cono_ y _Cilindro_, todas estas tienen los métodos para calcular 
el volumen de estas figuras, y desplegarlo. Se ingresan los valores de altura, radio y medida de lado para poder 
calcular los volúmenes y se despliegan los resultados.