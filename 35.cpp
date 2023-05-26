#include <iostream>
using namespace std;

int main() {
	float P1;
	float P2;
	float P3;
	float Rs;

	cout << "Porfavor ingrese la primer nota: " << endl;
	cin >> P1;

	cout << "Porfavor ingrese la segunda nota: " << endl;
	cin >> P2;

	cout << "Porfavor ingrese la tercer nota: " << endl;
	cin >> P3;

	Rs = (P1 * 0.30) + (P2 * 0.30) + (P3 * 0.40);

	cout << "Su nota final en la asignatura fue: " << Rs << endl;
}