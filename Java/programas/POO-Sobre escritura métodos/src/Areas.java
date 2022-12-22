//Clase padre.
public class Areas {
    //Atributo protegido.
    protected double Radio;

    //Constructor que inicializa atributo.
    public Areas(double radio){
        Radio = radio;
    }

    //Función que regresa el área de una figura, no regresa nada por ser la función de clase padre.
    public double CalcularArea(){
        return 0;
    }

    //Procedimiento a sobre escribir, está inicializado pero no tiene cuerpo.
    public void ImprimirArea(){}
}