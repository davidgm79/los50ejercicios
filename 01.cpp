#include<iostream>
using namespace std;

int main() {
	int N1;
	cout << "Porfavor ingrese un numero" << endl;
	cin >> N1;

	if (N1 > 0)
	{
		cout << "El numero " << N1 << " es mayor de 0" << endl;
	}

	else
	{
		cout << "El numero " << N1 << " es menor de 0" << endl;
	}
}