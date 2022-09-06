#include <iostream>

using namespace std;
int main() {
int number;

    cout << "Ingrese un numero con 5 cifras: ";
    cin >> cifra;

    cout << cifra / 10000 << " ";
    cifra = cifra % 10000;
    cout << cifra / 1000 << " ";
    cifra = cifra % 1000;
    cout << cifra / 100 << " ";
    cifra = cifra % 100;
    cout << cifra / 10 << " ";
    cifra = cifra % 10;
    cout << cifra << endl;

    return 0;
}
