public class App {
    public static void main(String[] args) throws Exception {
        float[] Calificaciones = new float[5]; //Declara arreglo float para calificaciones para cinco valores.
        String[] Nombres = new String[5]; //Declara arreglo float para nombres de estudiantes para cinco valores.
        CaliAl ca = new CaliAl(); //Declara objeto CaliAl

        ca.IngresoDatos(Calificaciones, Nombres, 0); //Llamada al método que da entrada a calificaciones y su clasificación.
    }
}
