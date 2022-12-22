//Declara clase pública abstracta padre.
public abstract class Figuras {
    public float Base, Altura, a, p; //Atributos públicos.

    //Sin constructor por ser la clase padre, las clases hijos tendrás su propio constructor.

    //Declaración de funciones abstractas.
    public abstract float Area();
    public abstract float Perimetro();
    public abstract void Resultado();

    //No son necesarios los destructores en JAVA, este lenguaje maneja la recolección de basura automática.
}