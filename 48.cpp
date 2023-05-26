#include <iostream>
using namespace std;

int main() {
	char Categoria_deporte;

	cout << "Bienvenido al sistema, porfavor selesccione un deporte (Para la seleccion digite una letra mayuscula)" << endl;
	cout << "A: Automovilismo" << endl;
	cout << "B: Futbol" << endl;
	cout << "C: Salir" << endl;
	cout << "Porfavor ingrese la letra del deporte que le guste." << endl;
	cin >> Categoria_deporte;

	switch (Categoria_deporte)
	{
	case 'A':
		cout << "Los implementos basicos para practicar el automovilismo son: " << endl;
		cout << "Carro" << endl;
		cout << "autodromo o pista de carreras" << endl;
		cout << "Casco" << endl;
		cout << "balaclava" << endl;
		cout << "Traje ignifugo" << endl;
		cout << "Guantes" << endl;
		cout << "Botas" << endl;
		cout << "Arnes de seguridad" << endl;
		cout << "collarin hans" << endl;
		cout << "Extintor" << endl;
		cout << "Jaula antivuelco" << endl;
		cout << "Radio de comunicaciones" << endl;
		cout << "Ropa interior ignifuga" << endl;
		break;

	case 'B':
		cout << "Los implementos basicos para practicar el futbol son: " << endl;
		cout << "Cancha" << endl;
		cout << "Balon" << endl;
		cout << "Uniforme del equipo al cual representa" << endl;
		cout << "Guayos  o calzado deportivo" << endl;
		cout << "Protectores de espinillas" << endl;
		cout << "Medias" << endl;
		cout << "Porterias" << endl;
		cout << "Conos" << endl;
		cout << "Hidratacion" << endl;
		cout << "Cronometro" << endl;
		break;

	case 'C':
		cout << "Gracias por usar nuestro sistema." << endl;
		break;
	}
}
