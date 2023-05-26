#include <iostream>
using namespace std;

int main() {
	double Uno;
	double Dos;
	double Tres;

	cout << "Porfavor ingrese el primer numero: " << endl;
	cin >> Uno;

	cout << "Porfavor ingrese el segundo numero: " << endl;
	cin >> Dos;

	cout << "Porfavor ingrese el tercer numero: " << endl;
	cin >> Tres;

	if (Uno < Dos)
	{
		swap(Uno, Dos);
	}

	if (Uno < Tres)
	{
		swap(Uno, Tres);
	}

	if (Dos < Tres)
	{
		swap(Dos, Tres);
	}

	cout << "Los numeros ordenados de mayor a menor son: " << Uno << " " << Dos << " " << Tres << endl;
}