import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.
import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.

public class App {
    static Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.

    //Procedimiento estático que recibe números, para luego obtener el mayor y menor.
    public static void MayorMenor(float[] Nums, int cont, float NMayor, float NMenor){
        int i;

        if (cont == Nums.length){ //Condición para salir del método recursivo.
            lectura.close(); //Cierra el objeto Scanner.
            System.out.println("Los números digitados fueron:\n"); //Despliega todos los números ingresados en el arreglo.
            for (i = 0; i < Nums.length; i++){
                System.out.printf("1- %s\n", Nums[i]);
            }

            System.out.printf("\nEl número mayor es: %s\n", NMayor); //Desplega el número mayor del arreglo.
            System.out.printf("El número menor es: %s\n", NMenor); //Desplega el número menor del arreglo.
        } else{
            //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
            try{
                System.out.printf("%s. Digite un número: ", (cont + 1)); Nums[cont] = lectura.nextFloat();
    
                if (cont == 0){ //Al comenzar a digitar números, inicializa valor mayor y menor.
                    NMayor = Nums[cont];
                    NMenor = Nums[cont];
                }
                if (Nums[cont] > NMayor) {NMayor = Nums[cont];} //Va actualizando cual es el número mayor y menor en cada llamada recursiva.
                if (Nums[cont] < NMenor) {NMenor = Nums[cont];}
    
                cont++; //Incrementa contador.
                MayorMenor(Nums, cont, NMayor, NMenor); //Llamada recursiva a MayorMenor
            } catch(InputMismatchException e){
                System.out.println("Error de formato");
                lectura.nextLine(); //Limpia buffer de entrada de datos.
                MayorMenor(Nums, cont, NMayor, NMenor); //Llamada recursiva a MayorMenor
            }
        }        
    }

    public static void main(String[] args) throws Exception {
        float [] Nums; //Declara arreglo de números.
        int cantNums;

        //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
        try{
            System.out.printf("¿Cuántos números va a ingresar?: "); cantNums = lectura.nextInt();
            Nums = new float[cantNums]; //Inicializa el arreglo de números.

            MayorMenor(Nums, 0, 0, 0); //Llamada el procedimiento MayorMenor.
        } catch(InputMismatchException e){
            System.out.println("Error de formato");
        }
    }
}
