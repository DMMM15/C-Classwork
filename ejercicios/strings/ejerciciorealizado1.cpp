//mostrar de forma invertida un texto
#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);

    cout << "Texto invertido: ";
    for (int i = texto.length() - 1; i >= 0; i--) {
        cout << texto[i];
    }
    cout << endl;

    return 0;
}
