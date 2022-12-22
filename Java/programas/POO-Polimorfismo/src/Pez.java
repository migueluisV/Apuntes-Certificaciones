//Clase derivada de Animal.
public class Pez extends Animal {
    //Atributo privado.
    private String Nombre;

    //Constructor que inicializa el atributo.
    public Pez(String nombre){
        Nombre = nombre;
    }

    //Procedimiento que despliega mensaje más el contenido del atributo.
    public void Desplazarse(){
        System.out.printf("Hola, mi nombre es %s y me desplazo Nadando.", Nombre);
    }
}
