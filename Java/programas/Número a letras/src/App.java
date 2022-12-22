import java.io.IOException; //Excepción si hay error durante entrada y salida de datos.
import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.

public class App {
    private static final String[][] Unidades = { //Arreglo tipo String bidimensional para Unidades.
    {"0", "Cero"},
    {"1", "Uno"},
    {"2", "Dos"},
    {"3", "Tres"},
    {"4", "Cuatro"},
    {"5", "Cinco"},
    {"6", "Seis"},
    {"7", "Siete"},
    {"8", "Ocho"},
    {"9", "Nueve"}
    };

    private static final String[][] UnidadesConCero = { //Arreglo tipo String bidimensional para Unidades con ceros al inicio.
    {"00", ""},
    {"01", "Uno"},
    {"02", "Dos"},
    {"03", "Tres"},
    {"04", "Cuatro"},
    {"05", "Cinco"},
    {"06", "Seis"},
    {"07", "Siete"},
    {"08", "Ocho"},
    {"09", "Nueve"}
    };

    private static final String[][] Decena = { //Arreglo tipo String bidimensional para número entre 10 y 20.
    {"11", "Once"},
    {"12", "Doce"},
    {"13", "Trece"},
    {"14", "Catorce"},
    {"15", "Quince"},
    {"16", "Dieciseis"},
    {"17", "Diecisiete"},
    {"18", "Dieciocho"},
    {"19", "Diecinieve"}
    };

    private static final String[][] Decenas = { //Arreglo tipo String bidimensional para Decenas.
    {"10", "Diez"},
    {"20", "Veinte"},
    {"30", "Treinta"},
    {"40", "Cuarenta"},
    {"50", "Cincuenta"},
    {"60", "Sesenta"},
    {"70", "Setenta"},
    {"80", "Ochenta"},
    {"90", "Noventa"}
    };

    private static final String[][] Centenas = { //Arreglo tipo String bidimensional para Centenas.
    {"100", "Cien"}, 
    {"200", "Docientos"},
    {"300", "Trecientos"},
    {"400", "Cuatrocientos"},
    {"500", "Quinientos"},
    {"600", "Seiscientos"},
    {"700", "Setecientos"},
    {"800", "Ochocientos"},
    {"900", "Novecientos"}
    };

    public static Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.

    //Procedimiento para buscar el nombre de un número que es una unidad.
    private static void BuscarUnidad(String Numero, String NL, String aux){
        String NumLetra = NL;
        boolean e = false;
        int i = 0; //Declaración e inicialización de variables.

        //Busca la unidad del número ingresado en el arreglo Unidades.
        //Mientras no se haya encontrado el número y no se haya recorrido el arreglo de Unidades, se busca una unidad.
        while(i < Unidades.length && e == false){
            if (aux.equals(Unidades[i][0])){ //Si el número es igual al número en el índice puesto del arreglo Unidades...
                NumLetra += Unidades[i][1];  //La cadena recibe el nombre del número.
                if (Numero.length() == 0) //Si el número ingresado inicial es de un dígito, despliega dicho número.
                    System.out.printf("El número %s escrito es: %s.\n", aux, NumLetra);
                else //Si el número ingresado inicial es de dos dígitos, despliega dicho número.
                    System.out.printf("El número %s escrito es: %s.\n", Numero, NumLetra);
                e = true; //Encontrado.
            }
            i++; //Incrementa contador.
        }
    }

    //Procedimiento para buscar el nombre de un número que tiene dos dígitos.
    private static void BuscarDecena(String Numero, String NL, String aux){
        String NumLetra = NL;
        boolean e = false;
        int i = 0; //Declaración e inicialización de variables

        //En caso de decena exacta (10, 20, 30, ..., 90),
        //busca dicha en el arreglo Decenas y la despliega.
        while(i < Decenas.length && e == false){
            if (aux.equals(Decenas[i][0])){ //Si el número es igual al número en el índice puesto del arreglo Decenas...
                NumLetra += Decenas[i][1]; //La cadena recibe el nombre del número.
                if (Numero.length() == 0) //Si el número ingresado inicial es de dos dígitos, despliega dicho número.
                    System.out.printf("El número %s escrito es: %s.\n", aux, NumLetra);
                else //Si el número ingresado inicial es de tres dígitos, despliega dicho número.
                    System.out.printf("El número %s escrito es: %s.\n", Numero, NumLetra);
                e = true; //Encontrado.
            }
            //En caso de número ingresado entre 10 y 20 (11, 12, 13, ..., 19),
            //busca dicho en el arreglo Decena y lo despliega.
            else if (aux.equals(Decena[i][0])){
                NumLetra += Decena[i][1]; //La cadena recibe el nombre del número.
                if (Numero.length() == 0) //Si el número ingresado inicial es de dos dígitos, despliega dicho número.
                    System.out.printf("El número %s escrito es: %s.\n", aux, NumLetra);
                else //Si el número ingresado inicial es de tres dígitos, despliega dicho número.
                    System.out.printf("El número %s escrito es: %s.\n", Numero, NumLetra);
                e = true; //Encontrado.
            }
            i++; //Incrementa contador.
        }

        i = 0;
        //En caso de número ingresado con un cero como primer dígito
        //(01, 02, 03, ..., 09), busca dicho en el arreglo UnidadConCero y lo despliega.
        while(i < UnidadesConCero.length && e == false){
            if (aux.equals(UnidadesConCero[i][0])){ //Si el número es igual al número en el índice puesto del arreglo Decena...
                NumLetra += UnidadesConCero[i][1]; //La cadena recibe el nombre del número.
                if (Numero.length() == 0) //Si el número ingresado inicial es de dos dígitos, despliega dicho número.
                    System.out.printf("El número %s escrito es: %s.\n", aux, NumLetra);
                else //Si el número ingresado inicial es de tres dígitos, despliega dicho número.
                    System.out.printf("El número %s escrito es: %s.\n", Numero, NumLetra);
                e = true; //Encontrado.
            }
            i++; //Incrementa contador.
        }

        //En caso de decena inexacta (21, 33, 69, etc), obtiene la
        //decena del número ingresado y pasa a buscar la unidad del número.
        if (e == false){
            i = 2;
            //Caso especial: veinte o veinti. Si el número está entre 20 y 30 en el índice puesto del arreglo Decenas.
            if (Decenas[1][0].contains(aux.substring(0, 1)))
                NumLetra += "Veinti "; //La cadena recibe el nombre del número.
            //Mientras no se haya encontrado el número y no se haya recorrido el arreglo de Decenas, se busca una decena.
            while (i < Decenas.length && e == false){
                //Si el primer carácter del número (convertido en cadena) coincide con el número en el índice puesto del arreglo Decenas...
                if (Decenas[i][0].contains(aux.substring(0, 1))){
                    NumLetra += Decenas[i][1] + " y "; //La cadena recibe la decena y se le agrega "y".
                    e = true; //Encontrado.
                }
                i++; //Incrementa contador.
            }

            aux = aux.substring(1, 2); //Obtiene, como cadena, la unidad del número ingresado.
            BuscarUnidad(Numero, NumLetra, aux); //Llamada al procedimiento para obtener la unidad del número ingresado.
        }
    }

    //Procedimiento para buscar el nombre de un número que tiene tres dígitos.
    private static void BuscarCentena(String Numero, String NL){
        String NumLetra = NL, aux;
        boolean e = false;
        int i = 0; //Declaración e inicialización de variables.

        //En caso de centena exacta (100, 200, 300, ..., 900),
        //busca dicha en el arreglo de Centenas y la despliega.
        while(i < Centenas.length && e == false){
            if (Numero.equals(Centenas[i][0])){ //Si el número es igual al número en el índice puesto del arreglo Centenas...
                NumLetra = Centenas[i][1]; //La cadena recibe el nombre del número.
                System.out.printf("El número %s escrito es: %s.\n", Numero, NumLetra);
                e = true; //Encontrado.
            }
            i++; //Incrementa contador.
        }
        
        //En caso de centena inexacta (121, 333, 674, etc), obtiene la
        //centena del número ingresado y pasa a buscar la decena del número.
        if (e == false){
            i = 1;
            //Caso especial: cien o ciento. Si el número está entre 100 y 110 en el índice puesto del arreglo Centenas.
            if (Centenas[0][0].contains(Numero.substring(0, 1)))
                NumLetra = "Ciento "; //La cadena recibe el nombre del número.
            //Mientras no se haya encontrado el número y no se haya recorrido el arreglo de Centenas, se busca una Centena.
            while(i < Centenas.length && e == false){
                //Si el primer carácter del número (convertido en cadena) coincide con el número en el índice puesto del arreglo Centenas...
                if (Centenas[i][0].contains(Numero.substring(0, 1))){
                    NumLetra = Centenas[i][1] + " "; //La cadena recibe la centena y se le agrega "y".
                    e = true; //Encontrado.
                }
                i++; //Incrementa contador.
            }

            aux = Numero.substring(1, 3); //Obtiene, como cadena, la decena del número ingresado.
            BuscarDecena(Numero, NumLetra, aux); //Llamada al procedimiento para obtener la decena del número ingresado.
        }
    }

    //Procedimiento que recibe el número a escribir su nombre.
    private static void IngresoNumero() throws InterruptedException, IOException{
        String Op = "", Numero;

        //Mientras se desee ingresar número a buscar (1), el ciclo continua.
        do{
            new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor(); //Limpia consola/terminal/pantalla.

            System.out.print("Ingresa un número entero: "); Numero = lectura.nextLine();

            if (Numero.length() == 1){
                BuscarUnidad("", "", Numero); //Llamada al procedimiento que busca una unidad.
            } else if (Numero.length() == 2){
                BuscarDecena("", "", Numero); //Llamada al procedimiento que busca una decena.
            } else if (Numero.length() == 3){
                BuscarCentena(Numero, ""); //Llamada al procedimiento que busca una centena.
            }

            System.out.print("\n¿Ingresará otro número? Si[1]: "); Op = lectura.nextLine();
        } while(Op.equals("1"));
    }

    public static void main(String[] args) throws Exception {
        IngresoNumero(); //Llamada al procedimiento que da entrada a los números a buscar.
        lectura.close(); //Cierra el objeto Scanner.
    }
}