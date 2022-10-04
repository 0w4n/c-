#include "iostream"
#include "intr.hpp"

using namespace std;
double compintrSC() {
if (Isf<Icf) { //Simple más barato que Compuesto
    return cout<<"Es más barato el simple:"<<endl<<Coste<<Tiempo<<Intereses<<endl<<Icf,Isf;
};
if (Icf<Isf) { //Compuesto más barato que Simple
    return cout<<"Es más barato el Compuesto:"<<endl<<Coste<<Tiempo<<Intereses<<endl<<Icf,Isf;
}
}
