// Contar hasta un número dado (con while)

#include <iostream>
using namespace std;

int main() {
    int limite, contador = 1;

    cout << "Ingrese un numero limite: ";
    cin >> limite;

    while (contador <= limite) {
        cout << contador << " ";
        contador++;
    }

    cout << endl;
    return 0;
}

