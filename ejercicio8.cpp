#include <iostream>
using namespace std;

int metodoEuclides(int A, int B) {
    if (B == 0) {
        return A;
    }
    int resto = A % B;
    return metodoEuclides(B, resto);
}

int main() {
    int A, B;
    cout << "Ingrese el primer numero (A): ";
    cin >> A;
    cout << "Ingrese el segundo numero (B): ";
    cin >> B;
    int MCD = metodoEuclides(A, B);
    cout << "El maximo comun divisor (MCD) entre " << A << " y " << B << " es: " << MCD << endl;
    return 0;
}
