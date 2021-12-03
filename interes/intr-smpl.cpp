#include "intr.h"

double Cfs;

using namespace std;
double intereSimple() {
Cfs = Coste*(1+(Intereses/100)*Tiempo);
return Cfs;
}