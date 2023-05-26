#include <iostream>
using namespace std;

int main() {
	long long Cop; //tipo de variable long para almacernar numeros de mas de 6 digitos.
	double Cop_to_usd; 

	cout << "Ingrese la cantidad de pesos colombianos la cual quiere convertir: " << endl;
	cin >> Cop;

	Cop_to_usd = Cop * 0.00022;

	cout << "Usted tiene " << Cop << " pesos colombianos, lo cual a dolar es: " << Cop_to_usd << endl;
}