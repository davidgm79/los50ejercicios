#include <iostream>
using namespace std;

int main() {
	int Num, Fac = 1;

	cout << "Porfavor ingrese un numero: " << endl;
	cin >> Num;

	for (int I = 1; I <= Num; I++)
	{
		Fac *= I;
	}

	cout << "El facrorial de " << Num << " es " << Fac << endl;
}