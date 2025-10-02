//verificar si un número es par o impar.
#include <iostream>
using namespace std;

int main() {
    int num;
    bool esPar;

    cout << "Ingrese un numero: ";
    cin >> num;

    esPar = (num % 2 == 0);
    cout << "El numero " << num << (esPar ? " es par" : " es impar") << endl;

    return 0;
}
