#include <iostream>
using namespace std;

int main() {
	int n1;

	cout << "Porfavor ingrese un numero" << endl;
	cin >> n1;

	if (n1 % 2 == 0)
	{
		cout << "El numero " << n1 << " es par" << endl;
	}

	else
	{
		cout << "El numero " << n1 << " no es par" << endl;
	}
}