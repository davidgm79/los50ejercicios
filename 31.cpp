#include <iostream>
using namespace std;

const double PI = 3.1416;

int main() {
    double Radio;

    cout << "Ingrese el radio de la esfera: ";
    cin >> Radio;

    double volumen = (4.0 / 3.0) * PI * (Radio, 3);

    cout << "El volumen de la esfera es: " << volumen << endl;

}