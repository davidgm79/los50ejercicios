#include <iostream>
using namespace std;

int main() {
	float gF;
	float gC;

	cout << "Porfavor ingrese su temperatura en grados celsius: " << endl;
	cin >> gC;

	gF = (gC * 9 / 5) + 32;

	cout << "Su temperatura es de " << gC << " grados celsius, su temperatura convertida a grados fahrenheit es: " << gF << endl;
}