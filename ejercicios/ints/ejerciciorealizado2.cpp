//comprobar que si un número es multiplo de 3.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (num % 3 == 0)
        cout << "El numero es multiplo de 3" << endl;
    else
        cout << "El numero NO es multiplo de 3" << endl;

    return 0;
}
