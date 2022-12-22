//Clase derivada de Escuela.
public class Alumno extends Escuela{
    //Atributos privados.
    private String Nom, Carrera;
    private int NControl;
    private int Semestre;

    //Constructor que inicializa atributos y recibe los atributos del constructor padre.
    public Alumno(String nom, String carrera, int nc, int semestre, String uni, String dir, String tel){
        super(uni, dir, tel); //Recibe atributos del constructor padre.
        Nom = nom;
        Carrera = carrera;
        NControl = nc;
        Semestre = semestre;
    }

    //Procedimiento que despliega información de la escuela y el alumno.
    public void DesplegarAlumno(){
        super.DesplegarEscuela(); //Llama al método DesplegarEscuela utilizando la palabra reservada "super".
        System.out.println("\n---Datos del alumno---\n");
        System.out.println("Nombre del alumno: " + Nom);
        System.out.println("Carrera del alumno: " + Carrera);
        System.out.println("Número de control del alumno: " + NControl);
        System.out.println("Semestre que cursa el alumno: " + Semestre);
    }
}
