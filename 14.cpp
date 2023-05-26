#include <iostream>
using namespace std;

int main() {
	const double Pi = 3.1416;
	double Radio, Altura;

	cout << "Porfavor ingrese el radio del cilindro" << endl;
	cin >> Radio;

	cout << "Porfavor ingrese la aultura del cilindro" << endl;
	cin >> Altura;

	double Area_base = Pi * (Radio, 2);
	double Area_lateral = 2 * Pi * Radio * Altura;
	double Area_total = Area_base + Area_lateral;
	double Volumen = Area_base * Altura;

	cout << "El area del cilindro es: " << Area_total << endl;
	cout << "El volumen del cilindro es: " << Volumen << endl;
}