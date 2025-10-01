//Calcular interés compuesto
#include <iostream>
#include <cmath> // para usar pow()
using namespace std;

int main() {
    double capital, tasa, anios, montoFinal;

    cout << "Ingrese el capital inicial: ";
    cin >> capital;

    cout << "Ingrese la tasa de interes anual (ejemplo 0.05 = 5%): ";
    cin >> tasa;

    cout << "Ingrese el numero de años: ";
    cin >> anios;

    montoFinal = capital * pow((1 + tasa), anios);

    cout << "El monto final despues de " << anios << " años es: " << montoFinal << endl;

    return 0;
}
