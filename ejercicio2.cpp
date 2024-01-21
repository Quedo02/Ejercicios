#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    float saldo=7.00;
    int numero_dado;
    int numero_obtenido;

    srand(time(0));

    while (saldo>0 && saldo<13) {
        cout<<"Que numero saldra en el dado?"<<endl;
        cin>>numero_dado;

        numero_obtenido=rand() % 6 + 1;

        if (numero_obtenido == numero_dado) {
            saldo += 5.00;
            cout<<"El dado arrojo un "<<numero_obtenido<<endl;
            cout<<"Acaba de ganar $5.00"<<endl;
        } else {
            saldo-= 1.00;
            cout<<"El dado arrojo un "<<numero_obtenido<<endl;
            cout<<"Acaba de perder $1.00"<<endl;
        }

        cout<<"Su saldo es $"<<saldo<<endl;
    }

    if (saldo >= 13) {
        cout<<"Ha ganado $6.00"<<endl;
    } else {
        cout<<"Ha perdido todo su capital"<<endl;
    }

    return 0;
}
