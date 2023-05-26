#include <iostream>
using namespace std;

int main() {
    int Numero;
    int Mayor = INT_MIN;
    int Menor = INT_MAX;

    cout << "Porfavor ingrese 5 numeros: " << endl;

    for (int I = 0; I < 5; I++) {
        cout << "Numero " << I + 1 << ": ";
        cin >> Numero;

        if (Numero > Mayor) {
            Mayor = Numero;
        }

        if (Numero < Menor) {
            Menor = Numero;
        }
    }

    cout << "El numero mayor es: " << Mayor << endl;
    cout << "El numero menor es: " << Menor << endl;
}