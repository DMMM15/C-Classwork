//convertir Kilometros en millas.
#include <iostream>
using namespace std;

int main() {
    float km, millas;
    cout << "Ingrese distancia en kilometros: ";
    cin >> km;

    millas = km * 0.621371;
    cout << km << " km equivalen a " << millas << " millas" << endl;

    return 0;
}
