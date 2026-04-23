// Buscar un número en un array

#include <iostream>
using namespace std;

int main() {
    int valores[5] = {4, 7, 10, 15, 20};
    int buscar;
    bool encontrado = false;

    cout << "Ingrese un numero a buscar: ";
    cin >> buscar;

    for (int i = 0; i < 5; i++) {
        if (valores[i] == buscar) {
            encontrado = true;
            break; // termina el ciclo si lo encuentra
        }
    }

    if (encontrado) {
        cout << "El numero " << buscar << " SI esta en el array." << endl;
    } else {
        cout << "El numero " << buscar << " NO se encontro en el array." << endl;
    }

    return 0;
}
