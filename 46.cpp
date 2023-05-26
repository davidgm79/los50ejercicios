#include <iostream>
using namespace std;

int main() {
	double Euro;
	double Euro_to_usd;

	cout << "Ingrese la cantidad de euros a convertir: " << endl;
	cin >> Euro;

	Euro_to_usd = Euro * 1.08;

	cout << "Usted tiene " << Euro << " euros, lo que equivale a " << Euro_to_usd << " dolares" << endl;
}