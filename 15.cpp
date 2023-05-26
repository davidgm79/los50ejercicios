#include <iostream>
using namespace std;

int main() {
	float Kmh;
	float Mps;

	cout << "Porfavor ingrese su velocidad en kilometros por hora: " << endl;
	cin >> Kmh;

	Mps = Kmh / 3.6;

	cout << "Su velocidad es de " << Kmh << " kilometros por hora, su velocidad convertida a metros por segundo es: " << Mps << endl;
}