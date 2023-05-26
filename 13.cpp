#include <iostream>
using namespace std;

int main() {
	double Cuatro;
	double Cinco;
	double Seis;

	cout << "Porfavor ingrese el primer numero: " << endl;
	cin >> Cuatro;

	cout << "Porfavor ingrese el segundo numero: " << endl;
	cin >> Cinco;

	cout << "Porfavor ingrese el tercer numero: " << endl;
	cin >> Seis;

	if (Cuatro > Cinco)
	{
		swap(Cuatro, Cinco);
	}

	if (Cuatro > Seis)
	{
		swap(Cuatro, Seis);
	}

	if (Cinco > Seis)
	{
		swap(Cinco, Seis);
	}

	cout << "Los numeros ordenados de menor a mayor son: " << Cuatro << " " << Cinco << " " << Seis << endl;
}