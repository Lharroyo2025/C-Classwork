// Array de strings (mostrar nombres)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombres[3]; // array con 3 posiciones

    cout << "Ingrese 3 nombres:\n";
    for (int i = 0; i < 3; i++) {
        cin >> nombres[i];
    }

    cout << "\nLos nombres ingresados son:\n";
    for (int i = 0; i < 3; i++) {
        cout << "- " << nombres[i] << endl;
    }

    return 0;
}
