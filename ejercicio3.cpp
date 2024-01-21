#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numeros[5];
    int suma = 0;
    double promedio, sumatoriaCuadrados = 0, desviacionEstandar;

    cout << "Ingrese los 5 numeros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin>>numeros[i];
        suma += numeros[i];
    }

    promedio = static_cast<double>(suma) / 5;

    for (int i = 0; i < 5; i++) {
        sumatoriaCuadrados += pow(numeros[i] - promedio, 2);
    }

    desviacionEstandar = sqrt(sumatoriaCuadrados / 5);

    cout << "La desviacion estandar es: " << desviacionEstandar << endl;

    return 0;
}