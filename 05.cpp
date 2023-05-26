#include <iostream>
using namespace std;

int main()
{
	float Nota1;
	float Nota2;
	float Nota3;
	float Total;
	float Prome;

	cout << "Porfavor ingrese la primer nota" << endl;
	cin >> Nota1;

	cout << "Porfavor ingrese la segunda nota" << endl;
	cin >> Nota2;

	cout << "Porfavor ingrese la tercer nota" << endl;
	cin >> Nota3;

	Total = Nota1 + Nota2 + Nota3;
	Prome = Total / 3;

	if (Prome > 0)
	{
		cout << "Su promedio fue de " << Prome << endl;
	}

	else
	{
		cout << "No se ingresaron notas" << endl;
	}
}