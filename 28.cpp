#include <iostream>

int main() {
    int numero;
    int suma = 0;

    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    for (int i = 1; i <= numero; i++) {
        suma += i;
    }

    std::cout << "La suma de los números desde 1 hasta " << numero << " es: " << suma << std::endl;

    return 0;
}
