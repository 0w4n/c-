#include "intr.hpp"

double Icf;

using namespace std;
double intereCompuesto() {
Icf = Coste*(1+(Intereses/100))*Tiempo*Tiempo;
return Icf;
}