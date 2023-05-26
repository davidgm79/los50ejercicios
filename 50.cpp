#include<iostream>
using namespace std;

int main() {
	float Hrs;
	float Pago_hrs;
	float Bono;
	float Pago_total;
	char Categoria;

	cout << "Bienvenido al sistema, porfavor ingrese el cargo en el que esta trabajando (digite una letra mayuscula)" << endl;
	cout << "A: Supervisor de acabados." << endl;
	cout << "B: Equipo de soldadura" << endl;
	cout << "C: Practicante de acabados y soldadura" << endl;
	cout << "D: Salir " << endl;
	cout << "Porfavor ingrese la categoria correspondiente a su cargo" << endl;
	cin >> Categoria;

	switch (Categoria) {
	case'A':
		cout << "Porfavor ingrese la cantidad de horas trabajadas durante el mes: " << endl;
		cin >> Hrs;

		Pago_hrs = Hrs * 26.90;

		if (Hrs > 150)
		{

			Bono = Pago_hrs * 0.05;
			Pago_total = Pago_hrs + Bono;
			cout << "Usted trabajo " << Hrs << " horas y su pago mensual es de: " << Pago_total << endl;
		}

		else
		{
			cout << "Usted trabajo " << Hrs << " horas y su pago mensual es de: " << Pago_hrs << endl;
		}
		break;

	case'B':
		cout << "Porfavor ingrese la cantidad de horas trabajadas durante el mes: " << endl;
		cin >> Hrs;

		Pago_hrs = Hrs * 24.30;

		if (Hrs > 150)
		{

			Bono = Pago_hrs * 0.05;
			Pago_total = Pago_hrs + Bono;
			cout << "Usted trabajo " << Hrs << " horas y su pago mensual es de: " << Pago_total << endl;
		}

		else
		{
			cout << "Usted trabajo " << Hrs << " horas y su pago mensual es de: " << Pago_hrs << endl;
		}
		break;

	case'C':
		cout << "Porfavor ingrese la cantidad de horas trabajadas durante el mes: " << endl;
		cin >> Hrs;

		Pago_hrs = Hrs * 21.50;
		break;

		if (Hrs > 150)
		{

			Bono = Pago_hrs * 0.05;
			Pago_total = Pago_hrs + Bono;
			cout << "Usted trabajo " << Hrs << " horas y su pago mensual es de: " << Pago_total << endl;
		}

		else
		{
			cout << "Usted trabajo " << Hrs << " horas y su pago mensual es de: " << Pago_hrs << endl;
		}

	case'D':
		cout << "Muchas gracias por usar nuestro sistema" << endl;
		break;
	}
}