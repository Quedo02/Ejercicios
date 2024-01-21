#include <iostream>
#include <cstring>
using namespace std;

void CambiarOrden(char nombre[], char apellidoPaterno[], char apellidoMaterno[], char nuevoNom[]) {
    sprintf(nuevoNom, "%s %s %s", apellidoPaterno, apellidoMaterno, nombre);
}

int main() {
    const int tam = 100;
    char nombre[tam];
    char apellidoPaterno[tam];
    char apellidoMaterno[tam];
    char nuevoNom[tam];

    cout << "Ingrese el/los nombre(s) del alumno: ";
    cin.getline(nombre, tam);

    cout << "Ingrese el apellido paterno del alumno: ";
    cin.getline(apellidoPaterno, tam);

    cout << "Ingrese el apellido materno del alumno: ";
    cin.getline(apellidoMaterno, tam);

    CambiarOrden(nombre, apellidoPaterno, apellidoMaterno, nuevoNom);

    cout << "El nuevo orden de los nombres es: " << nuevoNom << endl;

    return 0;
}