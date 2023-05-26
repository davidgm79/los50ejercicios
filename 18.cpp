#include <iostream>
using namespace std;

int main() {
	int Suma_par = 0;

	for (int I = 2; I <= 100; I += 2)
	{
		Suma_par += I;
	}

	cout << "La suma de los nuumeros pares del 1 al 100 son: " << Suma_par << endl;
}