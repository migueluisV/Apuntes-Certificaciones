//Declara clase regular derivada de Figuras.
public class Esfera extends Figuras {
    private double Radio; //Atributo privado.

    public Esfera(double radio){ //Constructor que inicializa atributo.
        this.Radio = radio;
    }

    public double CalcularVolumen(){ //Función que regresa el volumen de la Esfera.
        return (4 * Math.PI * Math.pow(Radio, 3)) / 3;
    }

    public void DesplegarVolumen(){ //Procedimiento que despliega el radio y volumen de la esfera.
        System.out.println("\n---Datos de la esfera---\n");
        System.out.println("La medida del radio de la esfera es:" + Radio + "u.");
        System.out.println("El volumen de la esfera es: " + CalcularVolumen() + "u^3.");
    }
}