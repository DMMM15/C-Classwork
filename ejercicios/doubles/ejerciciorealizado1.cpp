//calcular el promedio de 3 números decimales
#include <iostream>
using namespace std;

int main() {
    double a, b, c, promedio;
    cout << "Ingrese 3 numeros decimales: ";
    cin >> a >> b >> c;

    promedio = (a + b + c) / 3;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
