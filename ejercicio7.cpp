#include <iostream>
#include <fstream>

using namespace std;

struct Automovil {
    int inventario;
    char marca[20];
    char modelo[20];
    char color[20];
    double precio;
};

int main() {
    Automovil datosAutomovil;

    cout << "Ingrese los datos del automovil:" << endl;

    cout << "Inventario: ";
    cin >> datosAutomovil.inventario;
    cin.ignore();

    cout << "Marca: ";
    cin.getline(datosAutomovil.marca, 50);

    cout << "Modelo: ";
    cin.getline(datosAutomovil.modelo, 50);

    cout << "Color: ";
    cin.getline(datosAutomovil.color, 50);

    cout << "Precio: ";
    cin >> datosAutomovil.precio;

    ofstream archivo("automovil.txt");
    if (archivo.is_open()) {
        archivo << "Inventario: " << datosAutomovil.inventario << endl;
        archivo << "Marca: " << datosAutomovil.marca << endl;
        archivo << "Modelo: " << datosAutomovil.modelo << endl;
        archivo << "Color: " << datosAutomovil.color << endl;
        archivo << "Precio: " << datosAutomovil.precio << endl;
        archivo.close();
        cout << "Datos guardados exitosamente en el archivo automovil.txt." << endl;
    } 
    
    else {
        cout << "No se pudo abrir el archivo automovil.txt." << endl;
    }

    return 0;
}
