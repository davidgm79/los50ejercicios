#include <iostream>
using namespace std;

int main() {
	int Hombres = 0, Mujeres = 0;
	int Sph = 0, Spm = 0;
	int Puntos, Cpersonas;
	char Sexo;

	cout << "Porfavor ingrese la cantidad de personas: " << endl;
	cin >> Cpersonas;

	for (int I = 0; I < Cpersonas; I++)
	{
		cout << "Persona " << I + 1 << endl;
		cout << "Su sexo es: (especificar si es hombre o mujer e ingresar la opcion en mayuscula M o H)" << endl;
		cin >> Sexo;
		cout << "Ingrese la cantidad de puntos obtenidos: " << endl;
		cin >> Puntos;

		if (Sexo == 'H')
		{
			Hombres++;
			Sph += Puntos;
		}

		else if (Sexo == 'M')
		{
			Mujeres++;
			Spm += Puntos;
		}

		else
		{
			cout << "Sexo inválido. Por favor, ingrese 'h' o 'm'." << std::endl; I--;
		}
	}

	float Phombres = Sph / Hombres;
	float Pmujeres = Spm / Mujeres;

	cout << "Los resultados son: " << endl;
	cout << "El promedio de puntos de los hombre es de: " << Phombres << endl;
	cout << "El promedio de puntos de las mujeres es de: " << Pmujeres << endl;

	if (Phombres > Pmujeres)
	{
		cout << "Los hombres tuvieron un mejor desempeño" << endl;
	}

	else if (Pmujeres > Phombres) 
	{
		cout << "Las mujeres tuvieron un mejor desempeño" << endl;
	}

	else
	{
		cout << "Las mujeres y los hombres tuvieron el mismo desempeño" << endl;
	}
}