#include<iostream>

using namespace std;

int main(){
    int radio;  

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    
    cout << "El diametro es" << radio * 2.0
    << "\nLa cirgunferencia es" << 2*3.14159* radio
    <<"\nEl área es " << 3.14159* radio * radio <<
    endl;

    return 0;
}