#include <iostream>
using namespace std;

int main() {
    int Suma = 0;

    for (int I = 20; I <= 50; I++) {
        Suma += I;
    }

    cout << "La suma de los numeros del 20 al 50 es: " << Suma << endl;

    return 0;
}