#include <iostream>
using namespace std;

int main() {
	float Gf;
	float Gc;

	cout << "Porfavor ingrese su temperatura en grados fahrenheit: " << endl;
	cin >> Gf;

	Gc = (Gf - 32) * 5 / 9;

	cout << "Su temperatura es de " << Gf << " grados fahrenheit, su temperatura convertida a grados celsius es: " << Gc << endl;
}