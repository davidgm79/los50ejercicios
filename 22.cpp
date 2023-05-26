#include <iostream>
using namespace std; 

int obtenerUltimaCifra(int numero) {
    
    numero = std::abs(numero);

    int ultimaCifra = numero % 10;

    return ultimaCifra;
}

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    int ultimaCifra = obtenerUltimaCifra(numero);

    cout << "La ultima cifra del numero " << numero << " es: " << ultimaCifra << endl;

    return 0;
}
