//Clase derivada de Areas.
public class Esfera extends Areas {
    //Constructor que recibe atributos de su clase padre.
    public Esfera(double radio){
        super(radio); //Recibe atributos del constructor padre.
    }

    //Función que regresa área de un círculo, utiliza atributos de clase padre con la palabra reservada "super".
    public double CalcularArea(){
        return 4 * Math.PI * Math.pow(super.Radio, 2);
    }

    //Procedimiento sobre escrito, despliega radio y área de una esfera.
    public void ImprimirArea(){
        System.out.println("---Información de la esfera---\n");
        System.out.println("El valor del radio es: " + super.Radio);
        System.out.println("El valor del área de la esfera es: " + CalcularArea());
    }
}
