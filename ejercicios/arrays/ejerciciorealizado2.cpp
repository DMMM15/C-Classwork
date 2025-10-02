//Números ingresados arreglados en orden inverso
#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Ingrese 5 numeros: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Arreglo en orden inverso: ";
    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
