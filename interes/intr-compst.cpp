#include "intr.h"

double Cfc;

using namespace std;
double intereCompuesto() {
Cfc = Coste*(1+(Intereses/100))*Tiempo*Tiempo;
return Cfc;
}