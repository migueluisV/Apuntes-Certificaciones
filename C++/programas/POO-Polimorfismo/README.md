`21/08/2022 11:36am`

## Bienvenidos

Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, adem?s de un fichero *.pdb*.
- `POO-Polimorfismo`: contiene el c?digo fuente *.cpp*, clases creadas y otros ficheros importantes.
- `POO-Polimorfismo.sln`: es el fichero que abre Visual Studio para trabajar y compilar el c?digo fuente.

## Descripci?n del programa

El objetivo de este programa es repasar sobre la Programaci?n Orientada a Objetos (POO), este es un tema que puede ser tratado en el lenguaje C++, 
en esta ocasi?n, vemos acerca del polimorfismo, un tema bastante fuerte en este paradigma de la programaci?n. El polimorfismo se encarga de que un 
m?todo tenga un distinto comportamiento seg?n quien lo llame, es por ello que va mucho de la mano con la herencia, encapsulamiento y abstracci?n, 
este programa es muy sencillo, pero muestra como, seg?n el objeto, se despliega un distinto mensaje.

El programa cuenta con una clase base llamada `Animal`, con su constructor un un m?todo *Desplazarse*, el cual va a ser sobre escrito por sus clases 
derivadas `Ave`, `Reptil`, `Mamifero`, `Pez`, este m?todo despliega un mensaje distinto dependiendo de la clase. en *main*, se pide un nombre para cada 
uno de los animales, se crean objetos de las clases derivadas y se llama a Desplazarse.