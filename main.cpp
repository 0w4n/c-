#include "iostream"

using namespace std;
double Coste;
double Tiempo;
double Intereses;

int main() {
cout<<"Buenas!/n"<<"¿Que quieres hacer?";
string Pp;
cin>>Pp;
if (Pp == "Quiero comprar una casa") {
cout<<"¿Cuanto cuesta?";
//Coste
cin>>Coste;
//Tiempo
cout<<"En años/n";
cin>>Tiempo;
//Interés
cout<<"¿A que interés?";
cin>>Intereses;
return Tiempo,Coste,Intereses;
};
}