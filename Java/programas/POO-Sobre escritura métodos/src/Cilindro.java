//Clase derivada de Areas.
public class Cilindro extends Areas {
    //Atributo protegido.
    protected double Altura;

    //Constructor que inicializa atributo y recibe atributos de su clase padre.
    public Cilindro(double radio, double altura){
        super(radio); //Recibe atributos del constructor padre.
        Altura = altura;
    }

    //Función que regresa área de un cilíndro, utiliza atributos de clase padre con la palabra reservada "super".
    public double CalcularArea(){
        return 2 * Math.PI * super.Radio * (Altura + super.Radio);
    }

    //Procedimiento sobre escrito, despliega altura, radio y área de un cilíndro.
    public void ImprimirArea(){
        System.out.println("---Información del cilindro---\n");
        System.out.println("El valor de la altura es: " + Altura);
        System.out.println("El valor del radio es: " + super.Radio);
        System.out.println("El valor del área de la cilindro es: " + CalcularArea());
    }
}