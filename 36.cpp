#include <iostream>
using namespace std;

int main() {
	float N1, N2, N3, N4, NF;

	cout << "Porfavor ingrese la primer nota (Porfavor ingrese una nota entre 1 y 5): " << endl;
	cin >> N1;

	cout << "Porfavor ingrese la segunda nota (Porfavor ingrese una nota entre 1 y 5): " << endl;
	cin >> N2;

	cout << "Porfavor ingrese la tercer nota (Porfavor ingrese una nota entre 1 y 5): " << endl;
	cin >> N3;

	cout << "Porfavor ingrese la cuarta nota (Porfavor ingrese una nota entre 1 y 5): " << endl;
	cin >> N4;

	NF = (N1 * 0.20) + (N2 * 0.20) + (N3 + 0.10) + (N4 * 0.50);

	cout << "Su nota final de la asignatura de introduccion a la programacion es: " << NF << endl;
}