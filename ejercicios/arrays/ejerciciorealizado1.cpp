//Encontrar el mayor número entre 5 números
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int mayor;

    cout << "Ingrese 5 numeros: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    mayor = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > mayor) {
            mayor = arr[i];
        }
    }

    cout << "El numero mayor es: " << mayor << endl;
    return 0;
}
