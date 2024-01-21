#include <iostream>
#include <ctime>
using namespace std;

void realizarReserva(int& lugaresDisponibles, int& lugaresBlancos, int& lugaresNegros, bool reservas[]) {
    string preferenciaColor;
    int numeroLugar;

    cout << "Ingrese su preferencia de color (blanco o negro): ";
    cin >> preferenciaColor;

    while (preferenciaColor != "blanco" && preferenciaColor != "negro" && preferenciaColor != "Blanco" && preferenciaColor != "Negro") {
        cout << "Preferencia de color invalida. Ingrese blanco o negro: ";
        cin >> preferenciaColor;
    }

    cout << "Ingrese el numero de lugar que desea reservar: ";
    cin >> numeroLugar;

    while (numeroLugar < 1 || numeroLugar > 300 || reservas[numeroLugar - 1]) {
        cout << "Numero de lugar invalido o ya reservado. Ingrese otro numero de lugar: ";
        cin >> numeroLugar;
    }

    if (preferenciaColor == "blanco" || preferenciaColor == "Blanco") {
        if (lugaresBlancos > 0) {
            lugaresBlancos--;
            lugaresDisponibles--;
            reservas[numeroLugar - 1] = true;
            cout << "Reservacion exitosa." << endl;
        } else {
            cout << "No hay lugares blancos disponibles." << endl;
        }
    } else {
        if (lugaresNegros > 0) {
            lugaresNegros--;
            lugaresDisponibles--;
            reservas[numeroLugar - 1] = true;
            cout << "Reservacion exitosa." << endl;
        } else {
            cout << "No hay lugares negros disponibles." << endl;
        }
    }
}

void mostrarEstadoLugares(int lugaresBlancos, int lugaresNegros) {
    cout << "Lugares blancos disponibles: " << lugaresBlancos << endl;
    cout << "Lugares negros disponibles: " << lugaresNegros << endl;
}

bool verificarHoraReserva() { //Las verificaciones las hace segun un reloj de 24 horas, si quiere ver que funciona pero ya son mas de las 8:30 am, modifique debajo.
    time_t now = time(0);
    tm* timeinfo = localtime(&now);

    int hora = timeinfo->tm_hour;
    int minuto = timeinfo->tm_min;

    if (hora < 8 || (hora == 8 && minuto > 30)) { //Aqui modifique el 8
        return true;
    } else {
        return false;
    }
}

int main() {
    int lugaresDisponibles = 300;
    int lugaresBlancos = 100;
    int lugaresNegros = 200;
    bool reservas[300] = { false };
    char opcion;

    do {
        if (verificarHoraReserva()) {
            cout << "Se aceptan reservaciones." << endl;
            realizarReserva(lugaresDisponibles, lugaresBlancos, lugaresNegros, reservas);
            mostrarEstadoLugares(lugaresBlancos, lugaresNegros);
            cout << "Desea realizar otra reservacion?"<< endl;
            cin >> opcion;
        }

        else {
            cout << "La reservaciones estan cerradas. Se abre la lista de espera." << endl;
        }
    } 
    
    while (opcion == 'S' || opcion == 's');

    return 0;
}