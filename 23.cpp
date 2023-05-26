#include <iostream>
using namespace std;

int main() {
	float Cm;
	float Pg;

	cout << "Porfavor ingrese su medida en centimetros: " << endl;
	cin >> Cm;

	Pg = Cm / 2.54;

	cout << "Su medida es de " << Cm << " centimetros, su medida convertida a pulgadas es: " << Pg << endl;
}