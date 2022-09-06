#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Colocar un integral: ";
    cin >> n;

    if ( n % 2 == 0)
        cout << n << "Es par.";
    else
    cout << n << "Es impar";

    return 0 
}