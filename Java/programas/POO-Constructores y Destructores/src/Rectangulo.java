//Declaración de clase derivada de Figuras.
public class Rectangulo extends Figuras{
    //Constructor que inicializa valores a los atributos públicos de la clase padre por medio de "super.".
    public Rectangulo(float base, float altura){
        super.Base = base;
        super.Altura = altura;
    }

    //Función que devuelve el área del rectángulo utilizando los atributos de la clase padre.
    public float Area(){
        return super.a = (super.Base * super.Altura);
    }

    //Función que devuelve el perímetro del rectángulo utilizando los atributos de la clase padre.
    public float Perimetro(){
        return super.p = (super.Base + super.Altura) * 2;
    }

    //Procedimiento que despliega la base, altura, área y perímetro de un rectángulo.
    public void Resultado(){
        System.out.println("---Datos del rectángulo---\n");
        System.out.println("Base del rectángulo: " + super.Base);
        System.out.println("Altura del rectángulo: " + super.Altura);
        System.out.println("Área del rectángulo: " + super.a + "u^2");
        System.out.println("Perimetro del rectángulo: " + super.p + "u");
    }

    //Destructor no necesario.
}
