#include <iostream>
using namespace std;

    string convertirARomano(int numero) {
    string Romano = "";


    int Valores[] = { 1, 4, 5, 9, 10};
    std::string Simbolos[] = { "I", "IV", "V", "IX", "X" };

    for (int I = 4; I >= 0; I--) {
 
        while (numero >= Valores[I]) {

            Romano += Simbolos[I];
       
            numero -= Valores[I];
        }
    }

    return Romano;
}

int main() {
    int Numero;

    std::cout << "Ingrese un número del 1 al 10: ";
    std::cin >> Numero;

    if (Numero >= 1 && Numero <= 10) {
        string Romano = convertirARomano(Numero);
        cout << "El numero romano correspondiente es: " << Romano << endl;
    }
    else {
        cout << "El numero esta fuera del rango valido." << endl;
    }

    return 0;
}