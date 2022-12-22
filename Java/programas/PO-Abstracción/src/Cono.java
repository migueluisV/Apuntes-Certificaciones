//Declara clase regular derivada de Figuras.
public class Cono extends Figuras{
    private double Radio, Altura; //Atributos privados

    public Cono(double radio, double altura){ //Constructor que inicializa atributos.
        this.Radio = radio;
        this.Altura = altura;
    }

    public double CalcularVolumen(){ //Función que regresa el volumen del cono.
        return (Math.PI * Math.pow(Radio, 2) * Altura) / 3;
    }

    public void DesplegarVolumen(){ //Procedimiento que despliega el radio, altura y volumen del cono.
        System.out.println("---Datos del cono---\n");
        System.out.println("La medida del radio del cono es:" + Radio + "u.");
        System.out.println("La medida de la altura del cono es: " + Altura + "u.");
        System.out.println("El volumen del cono es: " + CalcularVolumen() + "u^3.");
    }
}