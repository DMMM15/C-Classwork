//verficar la edad de una persona para saber si puede votar
#include <iostream>
using namespace std;

int main() {
    int edad;
    bool puedeVotar;

    cout << "Ingrese su edad: ";
    cin >> edad;

    puedeVotar = (edad >= 18);
    cout << (puedeVotar ? "Puede votar" : "No puede votar") << endl;

    return 0;
}
