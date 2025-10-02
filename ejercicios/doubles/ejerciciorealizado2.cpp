//clacular el area de un triangulo con base y altura en decimales.
#include <iostream>
using namespace std;

int main() {
    double base, altura, area;

    cout << "Ingrese la base del triangulo: ";
    cin >> base;
    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;

    area = (base * altura) / 2.0;

    cout << "El area del triangulo es: " << area << endl;

    return 0;
}
