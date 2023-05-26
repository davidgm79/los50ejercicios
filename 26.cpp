#include <iostream>
using namespace std;

int main() {
	int Mes, Dia;
	string Signo;

	cout << "Porfavor ingrese su dia de nacimiento: " << endl;
	cin >> Dia;

	cout << "Porfavor ingrese su mes de nacimiento (1 al 12): " << endl;
	cin >> Dia;

	string Osz(int Dia, int Mes);

    if ((Mes == 1 && Dia >= 20) || (Mes == 2 && Dia <= 18)) {
        Signo = "Acuario";
    }
    else if ((Mes == 2 && Dia >= 19) || (Mes == 3 && Dia <= 20)) {
        Signo = "Piscis";
    }
    else if ((Mes == 3 && Dia >= 21) || (Mes == 4 && Dia <= 19)) {
        Signo = "Aries";
    }
    else if ((Mes == 4 && Dia >= 20) || (Mes == 5 && Dia <= 20)) {
        Signo = "Tauro";
    }
    else if ((Mes == 5 && Dia >= 21) || (Mes == 6 && Dia <= 20)) {
        Signo = "Géminis";
    }
    else if ((Mes == 6 && Dia >= 21) || (Mes == 7 && Dia <= 22)) {
        Signo = "Cáncer";
    }
    else if ((Mes == 7 && Dia >= 23) || (Mes == 8 && Dia <= 22)) {
        Signo = "Leo";
    }
    else if ((Mes == 8 && Dia >= 23) || (Mes == 9 && Dia <= 22)) {
        Signo = "Virgo";
    }
    else if ((Mes == 9 && Dia >= 23) || (Mes == 10 && Dia <= 22)) {
        Signo = "Libra";
    }
    else if ((Mes == 10 && Dia >= 23) || (Mes == 11 && Dia <= 21)) {
        Signo = "Escorpio";
    }
    else if ((Mes == 11 && Dia >= 22) || (Mes == 12 && Dia <= 21)) {
        Signo = "Sagitario";
    }
    else if ((Mes == 12 && Dia >= 22) || (Mes == 1 && Dia <= 19)) {
        Signo = "Capricornio";
    }
    else {
        Signo = "Fecha inválida";
    }
}