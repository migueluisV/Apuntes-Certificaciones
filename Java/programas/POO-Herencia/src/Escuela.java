//Clase padre
public class Escuela {
    //Atributos privados
    private String Uni, Dir, Tel;

    //Constructor que inicializa atributos.
    public Escuela(String uni, String dir, String tel){
        Uni = uni;
        Dir = dir;
        Tel = tel;
    }

    //Procedimiento que despliega información de la escuela.
    public void DesplegarEscuela(){
        System.out.println("---Datos de la escuela---\n");
        System.out.println("La universidad es: " + Uni);
        System.out.println("La dirección de la universidad es: " + Dir);
        System.out.println("El teléfono de la universidad es: " + Tel);
    }
}