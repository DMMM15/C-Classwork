//contar las vocales de una palabra.
#include <iostream>
using namespace std;

int main() {
    char texto[100];
    int i = 0, vocales = 0;

    cout << "Ingrese una palabra: ";
    cin >> texto;

    // recorrer cada carácter hasta el fin de cadena '\0'
    while (texto[i] != '\0') {
        char c = texto[i];

        // convertir a minúscula si es mayúscula (A -> a, etc.)
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        // verificar si es vocal
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocales++;
        }
        i++;
    }

    cout << "La palabra tiene " << vocales << " vocales." << endl;

    return 0;
}
