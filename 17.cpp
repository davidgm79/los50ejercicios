#include <iostream>
using namespace std;

int main() {
	int Suma = 0;

	for (int I = 1; I <= 100; I += 2)
	{
		Suma += I;
	}

	cout << "La suma de los nuumeros impares del 1 al 100 son: " << Suma << endl;
}