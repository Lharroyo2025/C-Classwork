// Comparar dos números
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Ingrese un numero: ";
    cin >> a;

    cout << "Ingrese otro numero: ";
    cin >> b;

    if (a > b) {
        cout << a << " es mayor que " << b << endl;
    } else if (a < b) {
        cout << b << " es mayor que " << a << endl;
    } else {
        cout << "Los dos numeros son iguales" << endl;
    }

    return 0;
}
