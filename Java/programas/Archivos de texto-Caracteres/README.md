## Bienvenidos

Este programa fue realizado en Visual Studio Code, con el conjunto de extensiones *Debugger for Java*, *Extension Pack for Java*, *Maven for Java*, *Projecto Manager for Java* y *Test Runner for Java*.

## Estructura de la carpeta

Esta carpeta contiene dos subfolders, los cuales son:
- `src`: contiene los archivos *.java*.
- `lib`: mantiene dependencias y otros archivos.
- `bin`: aquí se guardan, por defecto, los archivos compilados generados.

## Descripción del programa

El objetivo de este programa es repasar la creación, escritura y lectura de archivos de texto con JAVA, según una breve investigación que realicé, existen distintas clases o librerías tanto para lograr escribir en archivos de texto, como en la lectura y manipulación de archivos, decidí utilizar las clases FileWriter, PrintWriter (escritura) y FileReader y BufferedReader (lectura), con la clase File para manipular el directorio `lib` de este proyecto.

El programa posee una clase llamada *ArchivoCaracteres*, la cual tiene tres procedimientos públicos: *CrearArchivo*, *LeerArchivo* y *Menu*, en *main*, se llama a Menu para poder desplegar las distintas opciones que tiene el usuario para trabajar, debe tener algún archivo en el directorio anteriormente mencionado para poder apreciar alguno en la lista de archivos disponibles, por lo que primero debe crear un archivo (solamente .txt) y escribir contenido en él.