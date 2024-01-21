#include <iostream>

using namespace std;

int main() {
    int ladoA, ladoB, ladoC;

    cout << "Ingrese la medida del lado A del triangulo: ";
    cin >> ladoA;

    cout << "Ingrese la medida del lado B del triangulo: ";
    cin >> ladoB;

    cout << "Ingrese la medida del lado C del triangulo: ";
    cin >> ladoC;

    if (ladoA == ladoB && ladoA == ladoC) {
        cout << "El triangulo es equilatero" << endl;
    } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
        cout << "El triangulo es iscosceles" << endl;
    } else {
        cout << "El triangulo es escaleno" << endl;
    }

    return 0;
}