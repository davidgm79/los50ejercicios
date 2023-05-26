#include <iostream>
using namespace std;

int main() {
    int Num1, Num2, A, B, Res;

    cout << "Ingrese el primer numero: " << endl;
    cin >> Num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> Num2;

    A = max(Num1, Num2);
    B = min(Num1, Num2);

    do {
        Res = B;
        B = A % B;
        A = Res;
    } while (B != 0);

    cout << "El maximo comun divisor entre " << Num1 << " y " << Num2 << " es: " << Res;
}