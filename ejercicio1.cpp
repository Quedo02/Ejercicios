#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, n4;
    float promedio;

    cout << "Teclee los datos" << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

    promedio= (n1+n2+n3+n4) / 4;

    cout<<"El promedio de los cuatro numeros es: "<<promedio<<endl;

    return 0;
}