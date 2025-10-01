// Calcular el área de un círculo
#include <iostream>
using namespace std;

int main() {
    float radio, area;
    const float PI = 3.1416;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    area = PI * radio * radio;

    cout << "El area del circulo es: " << area << endl;

    return 0;
}
