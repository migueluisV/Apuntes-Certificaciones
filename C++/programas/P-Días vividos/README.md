`10/07/2022 7:26pm`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, adem?s de un fichero *.pdb*.
- `P-D?as vividos`: contiene el c?digo fuente *.cpp*, clases creadas y otros ficheros importantes.
- `P-D?as vividos.sln`: es el fichero que abre Visual Studio para trabajar y compilar el c?digo fuente.

## Descripci?n del programa

El objetivo de este programa es repasar el uso de funciones, procedimientos y una alternativa al m?todo *std::cout* de la biblioteca
*iostream* para desplegar valores en la terminal o pantalla, en esta ocasi?n, utilizamos la funci?n **printf()**, esta funci?n te 
permite desplegar expresiones, cadenas o contenido en base a un formato dado por variables.

El programa posee un procedimiento est?tico *IngresoEdad*, el cual recibe un n?mero entero que representa una edad o n?mero de a?os transcurridos, 
se llama a otra funci?n est?tica *DiasVividos*, que regresa dicha variable de edad o a?os multiplicada por 365, lo que significa que regresa la 
cantidad de d?as transcurridos en dicha edad o a?os, y se despliegua. *main* solamente manda a llamar a IngresoEdad.

*Nota*: debido a la configuraci?n de Visual Studio Community 2019 en esta m?quina, no se desplegan los caracteres del idioma espa?ol,
como lo pueden ser la ? y letras con acentos, la funci?n *printf* no est? excenta de este error, por lo que se utiliza la funci?n **char()**
para desplegar dichos caracteres.