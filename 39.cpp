#include <iostream>
using namespace std;

int main() {
	int Numeros[10]; // se establecio un limite de 10 numeros

	cout << "Porfavor ingrese 10 numeros" << endl;

	for (int I = 0; I < 10; I++)
	{
		cout << "Numero " << I + 1 << ": " << endl;
		cin >> Numeros[I];
	}

	cout << "Los numeros positivos son: " << endl;

	for (int I = 0; I < 10; I++)
	{
		if (Numeros[I] > 0) {
			cout << Numeros[I] << endl;
		}
	}
}