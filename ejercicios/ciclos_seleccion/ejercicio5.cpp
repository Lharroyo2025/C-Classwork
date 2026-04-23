//Contador descendente (con while)
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero para contar hacia atras: ";
    cin >> numero;

    while (numero >= 0) {
        cout << numero << endl;
        numero--;
    }

    return 0;
}
