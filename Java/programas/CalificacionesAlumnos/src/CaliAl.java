import java.util.Scanner; //Librería para declara objeto Scanner de entrada y salida.
import java.util.InputMismatchException; //Excepción si hay un error de formato en tipos de datos.

public class CaliAl {
    public byte CalVali = 0, CalInvali = 0, CaliApro = 0, CaliRepro = 0;
    public float Prom, AcumCali = 0, CaliMax = 0, CaliMen; //Atributos públicos.
    Scanner lectura = new Scanner(System.in); //Declara objeto Scanner.

    //Procedimiento que recibe calificaciones para luego clasificarlas según:
    //Calificaciones válidas (>=0 y <=10), inválidas (<0 y >10), aprobatorias (>5),
    //reprobatorias (<=5), calificación mayor, menor y suma de todas las calificaciones.
    public void IngresoDatos(float[] cal, String[] nom, int cont){
        int i;

        if (cont == 5){ //Condición para salir del método recursivo.
            Prom = AcumCali / 5; //Calcula promedio.
            for (i = 0; i < 5; i++){ //Obtiene calificación mayor del arreglo de calificaciones.
                if (cal[i] > CaliMax){
                    CaliMax = cal[i];
                }
            }
    
            CaliMen = CaliMax; //Establece como referencia la calificación mayor para encontrar la menor.
            for (i = 0; i < 5; i++){ //Obtiene calificación menor del arreglo de calificaciones.
                if (cal[i] < CaliMen){
                    CaliMen = cal[i];
                }
            }

            lectura.close(); //Cierra el objeto Scanner.
            Despliegue(cal, nom); //Llamada al método que despliega resultados
        } else{
            //Selectiva try-catch por si se ingresa un tipo de dato incorrecto en la variable.
            try{
                System.out.printf("%s. Ingresa una calificación: ", (cont + 1)); cal[cont] = lectura.nextFloat();
                lectura.nextLine();
                System.out.printf("%s. Ingresa un nombre: ", (cont + 1)); nom[cont] = lectura.nextLine();

                AcumCali += cal[cont]; //Suma todas las calificaciones.
                if (cal[cont] > 0.0 && cal[cont] <= 10.0){ //Clasifica calificación en válida o inválida.
                    CalVali++;
                    if (cal[cont] > 6.0 && cal[cont] <= 10.0){ //Clasifica calificación en aprobatoria o reprobatoria.
                        CaliApro++;
                    } else if (cal[cont] <= 6.0 && cal[cont] > 0.0){
                        CaliRepro++;
                    }  
                } else{
                    CalInvali++;
                }

                cont++; //Incrementa contador.
                IngresoDatos(cal, nom, cont); //Llamada recursiva.
            } catch(InputMismatchException e){
                System.out.println("Error de formato.");
                lectura.nextLine(); //Limpia buffer de entrada de datos.
                IngresoDatos(cal, nom, cont);
            }
        }
    }

    //Procedimiento que despliega valores de los atributos.
    public void Despliegue(float[] cal, String[] nom){
        int i;

        System.out.println("\nLos alumnos ingresados son:\n");
        for(i = 0; i < 5; i++){ //Despliega todas las calificaciones.
            System.out.printf("%s - %s, con calificación de %s.\n", (i + 1), nom[i], cal[i]);
        }

        //Despliega valores de los atributos.
        System.out.printf("Hubo un total de %s calificaciones válidas y %s inválidas.\n", CalVali, CalInvali);
        System.out.printf("Hubo un total de %s calificaciones aprobatorias y %s reprobatorias.\n", CaliApro, CaliRepro);
        System.out.printf("La calificación mayor fue de %s y la menor es de %s.\n", CaliMax, CaliMen);
        System.out.printf("El promedio de todas las calificaciones es de %s.", Prom);
    }
}
