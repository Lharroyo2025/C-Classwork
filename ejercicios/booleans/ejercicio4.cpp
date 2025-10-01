// Verificar si un número es positivo

#include <iostream>
using namespace std;

int main() {
    int numero;
    bool esPositivo;

    cout << "Ingrese un numero: ";
    cin >> numero;

    esPositivo = (numero > 0);

    if (esPositivo) {
        cout << numero << " es positivo." << endl;
    } else {
        cout << numero << " NO es positivo." << endl;
    }

    return 0;
}
