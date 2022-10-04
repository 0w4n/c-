#include "intr.hpp"

double Isf;

using namespace std;
double intereSimple() {
Isf = Coste*(1+(Intereses/100)*Tiempo);
return Isf;
}