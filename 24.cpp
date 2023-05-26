#include <iostream>
using namespace std;

void convertirTiempo(int minutos, int& horas, int& mins, int& segs) {
    horas = minutos / 60;    // Obtener las horas completas
    minutos %= 60;           // Obtener los minutos restantes
    segs = minutos * 60;     // Convertir los minutos restantes a segundos
    mins = segs / 60;        // Obtener los minutos completos de los segundos
    segs %= 60;              // Obtener los segundos restantes
}

int main() {
    int tiempoMinutos;
    cout << "Ingrese el tiempo en minutos: ";
    cin >> tiempoMinutos;

    int horas, minutos, segundos;
    convertirTiempo(tiempoMinutos, horas, minutos, segundos);

    cout << "El tiempo equivalente es de: " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos." << std::endl;

    return 0;
}