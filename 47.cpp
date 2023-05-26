#include <iostream>
using namespace std;

int main() {
	double Dolar;
	double Usd_to_eur;

	cout << "Porfavor ingrese la cantidad de dolares que quiere convertir" << endl;
	cin >> Dolar;

	Usd_to_eur = Dolar * 0.92;

	cout << "Usted tiene " << Dolar << " dolar, lo que equivale a " << Usd_to_eur << " euros" << endl;
}