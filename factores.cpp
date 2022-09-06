#include <iostream>

using namespace std;

int main() {
 int cifra1, cifra2;

 cout << "Ingrese 2 cifras enteras: ";
 cin >> cifra1 >> cifra2;

 if ( cifra1 % cifra2 == 0 )
 cout << cifra1 << "Es multiplo de" << cifra2 << endl;

 if ( cifra1 % cifra2 != 0 )
 cout << cifra1 << "No es multiplo de" << cifra2 << endl;

 return 0;
}
