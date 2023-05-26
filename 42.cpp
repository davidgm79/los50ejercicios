#include <iostream>
using namespace std;

int main() {
    int tipoVehiculo, pasajeros, totalCarros = 0, totalBuses = 0;
    int sumaPasajerosCarros = 0, sumaPasajerosBuses = 0;

    while (true) {
        cout << "Ingrese el tipo de vehiculo (1: Carro particular, 2: Bus, 3: Otro): ";
        cin >> tipoVehiculo;

        if (tipoVehiculo == 1 || tipoVehiculo == 2) {
            std::cout << "Ingrese el numero de pasajeros: ";
            std::cin >> pasajeros;
        }

        if (tipoVehiculo == 1) {
            totalCarros++;
            sumaPasajerosCarros += pasajeros;
        }
        else if (tipoVehiculo == 2) {
            totalBuses++;
            sumaPasajerosBuses += pasajeros;
        }

        std::cout << "¿Desea ingresar otro vehiculo? (s/n): ";
        char respuesta;
        std::cin >> respuesta;

        if (respuesta == 'n') {
            break;
        }
    }

    double promedioPasajerosCarros = (sumaPasajerosCarros) / totalCarros;
    double promedioPasajerosBuses = (sumaPasajerosBuses) / totalBuses;

    cout << "El total de carros particulares es de: " << totalCarros << endl;
    cout << "El total de buses es de: " << totalBuses << endl;
    cout << "El promedio de pasajeros en carros particulares es de : " << promedioPasajerosCarros << endl;
    cout << "El promedio de pasajeros en buses es de: " << promedioPasajerosBuses << endl;

    return 0;
}