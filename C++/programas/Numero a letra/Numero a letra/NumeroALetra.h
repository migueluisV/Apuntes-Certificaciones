class NumeroALetra
{
    private:
        //Arreglo tipo String bidimensional para Unidades.
	    const std::string Unidades[10][2] = {
        {"0", "Cero"},
        {"1", "Uno"},
        {"2", "Dos"},
        {"3", "Tres"},
        {"4", "Cuatro"},
        {"5", "Cinco"},
        {"6", "Seis"},
        {"7", "Siete"},
        {"8", "Ocho"},
        {"9", "Nueve"}
        };

        //Arreglo tipo String bidimensional para Unidades con ceros al inicio.
	    const std::string UnidadesConCero[10][2] = {
        {"00", "Cero"},
        { "01", "Uno" },
        { "02", "Dos" },
        { "03", "Tres" },
        { "04", "Cuatro" },
        { "05", "Cinco" },
        { "06", "Seis" },
        { "07", "Siete" },
        { "08", "Ocho" },
        { "09", "Nueve" }
        };

        //Arreglo tipo String bidimensional para número entre 10 y 20.
	    const std::string Decena[9][2] = {
        {"11", "Once"},
        {"12", "Doce"},
        {"13", "Trece"},
        {"14", "Catorce"},
        {"15", "Quince"},
        {"16", "Dieciseis"},
        {"17", "Diecisiete"},
        {"18", "Dieciocho"},
        {"19", "Diecinieve"}
        };

        //Arreglo tipo String bidimensional para Decenas.
        const std::string Decenas[9][2] = {
        {"10", "Diez"},
        {"20", "Veinte"},
        {"30", "Treinta"},
        {"40", "Cuarenta"},
        {"50", "Cincuenta"},
        {"60", "Sesenta"},
        {"70", "Setenta"},
        {"80", "Ochenta"},
        {"90", "Noventa"}
        };

        //Arreglo tipo String bidimensional para Centenas.
	    const std::string Centena[9][2] = {
        {"100", "Cien"},
        {"200", "Docientos"},
        {"300", "Trecientos"},
        {"400", "Cuatrocientos"},
        {"500", "Quinientos"},
        {"600", "Seiscientos"},
        {"700", "Setecientos"},
        {"800", "Ochocientos"},
        {"900", "Novecientos"}
        };

        //Declaración de funciones tipo string para recorrer los arreglos y armar el nombre del número.
        std::string BuscarUnidad(std::string num);
        std::string DecenaIrregular(std::string num);
        std::string BuscarDecenas(std::string num);
        std::string BuscarCentenas(std::string num);
        std::string CentenaIrregular(std::string num);

    public:
        //Declaración de función tipo string que devuelve el nombre del número en cadena.
        std::string NumLetra(std::string num);
};
