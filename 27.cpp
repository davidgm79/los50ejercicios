#include <iostream>
using namespace std; 

int main() {
	int Numero;

	cout << "Porfavor ingrese un numero" << endl;
	cin >> Numero;

	for (int I = 1; I <= Numero; I++)
	{
		cout << I << " ";
	}

	cout << "El calculo de los numeros desde 1 hasta " << Numero << " : " << endl;
}