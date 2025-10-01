// Pedir el nombre y saludar
#include <iostream>
#include <string> 

using namespace std;

int main() {
    string nombre;

    cout << "Ingrese su nombre: ";
    getline(cin, nombre); // permite leer incluso si hay espacios

    cout << "Hola, " << nombre << "! Bienvenido a C++." << endl;

    return 0;
}
