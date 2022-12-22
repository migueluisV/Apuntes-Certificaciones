//Declara clase regular derivada de Figuras.
public class Cilindro extends Figuras {
    private double Radio, Altura; //Atributos privados.

    public Cilindro(double radio, double altura){ //Constructor que inicializa atributos.
        this.Radio = radio;
        this.Altura = altura;
    }

    public double CalcularVolumen(){ //Función que regresa el volumen del cilíndro.
        return Math.PI * Math.pow(Radio, 2) * Altura;
    }

    public void DesplegarVolumen(){ //Procedimiento que despliega el radio, altura y volumen del cilíndro.
        System.out.println("\n---Datos del cilindro---\n");
        System.out.println("La medida del radio del cilindro es:" + Radio + "u.");
        System.out.println("La medida de la altura del cilindro es: " + Altura + "u.");
        System.out.println("El volumen del cilindro es: " + CalcularVolumen() + "u^3.");
    }
}