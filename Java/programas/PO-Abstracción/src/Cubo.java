//Declara clase regular derivada de Figuras.
public class Cubo extends Figuras {
    private double Lado; //Atributos privados.

    public Cubo(double lado){ //Constructor que inicializa atributo
        this.Lado = lado;
    }

    public double CalcularVolumen(){ //Función que regresa el volumen del cubo
        return Math.pow(Lado, 3);
    }

    public void DesplegarVolumen(){ //Procedimiento que despliega medida del lado y volumen del cubo
        System.out.println("\n---Datos del cubo---\n");
        System.out.println("La medida del lado del cubo es:" + Lado + "u.");
        System.out.println("El volumen del cubo es: " + CalcularVolumen() + "u^3.");
    }
}