#include <iostream>
using namespace std;

int main() {
    int Contador = 0;

    cout << "Multiplos de 2: ";
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            Contador++;
        }
    }

    cout << "La cantidad de multiplos de 2 es: " << Contador << endl;

    Contador = 0;

    cout << "Multiplos de 3: ";
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
            Contador++;
        }
    }

    cout << "La cantidad de multiplos de 3 es: " << Contador << endl;

    return 0;
}