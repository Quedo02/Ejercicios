#include <iostream>

using namespace std;

int main() {
    double montoCompra, descuento, montoFinal;

    cout << "Ingrese el monto de la compra: ";
    cin >> montoCompra;

    if (montoCompra >= 2990 && montoCompra <= 7489)
        descuento = 3;
    else if (montoCompra >= 7490 && montoCompra <= 13989)
        descuento = 5;
    else if (montoCompra >= 13990 && montoCompra <= 54989)
        descuento = 7;
    else if (montoCompra >= 54990)
        descuento = 10;

    montoFinal = montoCompra - (montoCompra * descuento / 100);

    cout << "El monto final a pagar es: " << montoFinal << endl;

    return 0;
}