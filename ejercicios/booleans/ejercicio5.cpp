// Validar si una persona es mayor de edad

#include <iostream>
using namespace std;

int main() {
    int edad;
    bool mayorDeEdad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    mayorDeEdad = (edad >= 18);

    if (mayorDeEdad) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }

    return 0;
}
