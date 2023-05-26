#include <iostream>
using namespace std;

int main() {
    int Crojo = 0, Cverde = 0, Cazul = 0;
    string Color;

    cout << "Encuesta de gustos - Colores de luz primarios" << endl;

    for (int I = 1; I <= 10; I++) {
        cout << "Visitante " << I << ": ";
        cin >> Color;

        if (Color == "rojo") {
            Crojo++;
        }
        else if (Color == "verde") {
            Cverde++;
        }
        else if (Color == "azul") {
            Cazul++;
        }
        else {
            std::cout << "Color inválido. Por favor, ingrese rojo, verde o azul." << endl;
            I--;  
        }
    }

    float Projo = (Crojo / 10.0) * 100;
    float Pverde = (Cverde / 10.0) * 100;
    float Pazul = (Cazul / 10.0) * 100;

    cout << "El resultado de la encuesta es:" << std::endl;
    cout << "El rojo tuvo una votacion del: " << Projo << "% (" << Crojo << " votos)" << endl;
    cout << "El verde tuvo una votacion del: " << Pverde << "% (" << Cverde << " votos)" << endl;
    cout << "El azul tuvo una votacion del: " << Pazul << "% (" << Cazul << " votos)" << endl;
}
