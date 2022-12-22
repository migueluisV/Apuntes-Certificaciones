import java.util.Queue; //Clase para trabajar con colas dinámicas.
import java.util.LinkedList; //Clase para trabajar con listas, necesario por las colas dinámicas.

public class App {
    public static void main(String[] args) throws Exception {
        Queue<String> Nombres = new LinkedList<>(); //Declara objeto Queue tipo string con base en las LinkedLists.
        
        Cola_Nombres cn = new Cola_Nombres(); //Declara objeto Cola_Nombre.
        cn.Menu(Nombres); //Llamada al método que despliega menú y da comienzo al programa.
    }
}
