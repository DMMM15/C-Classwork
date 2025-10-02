//Cambiar las calificaciones de números a letras
#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Ingrese una nota (0-100): ";
    cin >> nota;

    if (nota >= 90)
        cout << "Calificacion: A" << endl;
    else if (nota >= 80)
        cout << "Calificacion: B" << endl;
    else if (nota >= 70)
        cout << "Calificacion: C" << endl;
    else if (nota >= 60)
        cout << "Calificacion: D" << endl;
    else
        cout << "Calificacion: F" << endl;

    return 0;
}
