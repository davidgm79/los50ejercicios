#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    for (int i = 1; i <= 10; i++) {
        int residuo = numero % i;
        cout << "Residuo de " << numero << " dividido por " << i << ": " << residuo << endl;
    }
}