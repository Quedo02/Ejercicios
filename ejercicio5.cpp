#include <iostream>

using namespace std;

int main() {
    double sueldoDiario, horasTrabajadas, horasExtras, sueldoTotal;

    cout << "Indique el sueldo diario: $";
    cin >> sueldoDiario;

    cout << "Indique las horas trabajadas: ";
    cin >> horasTrabajadas;

    if (horasTrabajadas <= 8) {
        horasExtras = 0;
    } else if (horasTrabajadas >= 9 && horasTrabajadas <= 11) {
        horasExtras = (horasTrabajadas-8)*((sueldoDiario/8)*2);
    } else {
        horasExtras = (horasTrabajadas-8)*((sueldoDiario/8)*3);
    }

    sueldoTotal = sueldoDiario + horasExtras;

    cout << "Su percepcion del dia son: $" << sueldoTotal << endl;

    return 0;
}