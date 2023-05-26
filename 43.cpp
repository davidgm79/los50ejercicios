#include <iostream>
using namespace std; 

int Cmcd(int A, int B) {

    while (B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }

    return A;
}

int main() {
    int N1, N2;
    cout << "Ingrese el primer número: ";
    cin >> N1;
    cout << "Ingrese el segundo número: ";
    cin >> N2;

    // Calcular el MCD
    int mcd = Cmcd(N1, N2);

    // Mostrar el resultado
    cout << "El MCD de " << N1 << " y " << N2 << " es: " << mcd << endl;

    return 0;
}