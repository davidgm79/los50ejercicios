#include <iostream>
using namespace std;

int main() {
	int Dia;
	int Mes;
	int Year;
	int Total1;
	int Dia_ac;
	int Mes_ac;
	int Year_a;

	cout << "Escriba el dia actual" << endl;
	cin >> Dia_ac;

	cout << "Escriba el mes actual" << endl;
	cin >> Mes_ac;

	cout << "Escriba el año actual" << endl;
	cin >> Year_a;

	cout << "Escriba el dia de su nacimiento" << endl;
	cin >> Dia;

	cout << "Escriba el mes de su nacimiento" << endl;
	cin >> Mes;

	cout << "Escriba el año de su nacimiento" << endl;
	cin >> Year;

	Total1 = Year_a - Year;

	if (Total1 <= 17)
	{
		cout << "Usted no es mayor de edad y usted tiene: " << Total1 << " años." << endl;
	}

	else
	{
		cout << "Usted es mayor de edad y usted tiene: " << Total1 << " años." << endl;
	}
}