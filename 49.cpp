#include <iostream>
using namespace std;

int main() {
	double Libra;
	double Conver;

	cout << "Porfavor ingrese el valor en libras a convertir" << endl;
	cin >> Libra;

	Conver = Libra / 2.2046;

	cout << "El valor que introdujo en libras equivale a " << Conver << " Kilos" << endl;
}