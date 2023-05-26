#include <iostream>
using namespace std;

int main() {
	float E1, E2, E3, RE, PE;

	cout << "Porfavor ingrese la primer edad: " << endl;
	cin >> E1;

	cout << "Porfavor ingrese la segunda edad: " << endl;
	cin >> E2;

	cout << "Porfavor ingrese la tercer edad: " << endl;
	cin >> E3;

	RE = E1 + E2 + E3;
	PE = RE / 3;

	cout << "El promedio de las edades ingresadas es: " << PE << endl;
}