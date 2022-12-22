public class Triangulo extends Figuras{
    //Constructor que inicializa valores a los atributos públicos de la clase padre por medio de "super.".
    public Triangulo(float base, float altura){
        super.Base = base;
        super.Altura = altura;
    }

    //Función que devuelve el perímetro del triángulo utilizando los atributos de la clase padre.
    public float Area(){
        return super.a = (super.Base * super.Altura) / 2;
    }

    //Función que devuelve el perímetro del triángulo utilizando los atributos de la clase padre.
    public float Perimetro(){
        if (super.Base != super.Altura){
            return super.p = (super.Altura * 2) + super.Base;
        }
        return super.p = super.Base * 3;
    }

    //Procedimiento que despliega la base, altura, área y perímetro de un triángulo.
    public void Resultado(){
        System.out.println("---Datos del triángulo---\n");
        System.out.println("Base del triángulo: " + super.Base);
        System.out.println("Altura del triángulo: " + super.Altura);
        System.out.println("Área del triángulo: " + super.a + "u^2");
        System.out.println("Perimetro del triángulo: " + super.p + "u");
    }

    //Destructor no necesario.
}