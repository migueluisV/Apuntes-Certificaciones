//Clase derivada de Areas.
public class Circulo extends Areas{
    //Constructor que recibe atributos de su clase padre.
    public Circulo(double radio){
        super(radio); //Recibe atributos del constructor padre.
    }

    //Función que regresa área de un círculo, utiliza atributos de clase padre con la palabra reservada "super".
    public double CalcularArea(){
        return Math.PI * Math.pow(super.Radio, 2);
    }

    //Procedimiento sobre escrito, despliega radio y área de un círculo.
    public void ImprimirArea(){
        System.out.println("---Información del círculo---\n");
        System.out.println("El valor del radio es: " + super.Radio);
        System.out.println("El valor del área del círculo es: " + CalcularArea());
    }
}
