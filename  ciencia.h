namespace ciencia {
   namespace Fisica {
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
        const double G = 6.67408e-11;
        double calcularFuerza(double masa1, double masa2, double distancia) {
            return G * masa1 * masa2 / (distancia * distancia);
        }
        const double C = 9.0e9;
        double calcularFuerzaElectrica(double carga1, double carga2, double distancia) {
            return C * carga1 * carga2 / (distancia * distancia);
        }
    }

}