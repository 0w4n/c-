#include "iostream"
#include "string"
#include "interes/intr.cpp"

double Coste;
double Tiempo;
double Intereses;

using namespace std;
int main() {
cout<<"Buenas!"<<endl<<"Que quieres hacer?"<<endl;
string Pp;
getline(cin,Pp);
if (Pp == "Quiero comprar una casa") {
//Coste
cout<<"Coste:"<<endl;
cin>>Coste;
//Tiempo
cout<<"Tiempo:"<<endl;
cin>>Tiempo;
//Interés
cout<<"Interes:"<<endl;
cin>>Intereses;
return Tiempo,Coste,Intereses;
};
compintrSC();
}
//https://www.dsi.fceia.unr.edu.ar/downloads/Entrada-SalidaCplusplus.pdf