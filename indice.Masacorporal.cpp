#include<iostream>

using namespace std;
 
int main()
{
 
 float bmi,w,h; //w=peso , h=altura
 cout<<"Ingrese su peso en kilogramos : ";
    cin>>w;
 cout<<"Ingrese su estatura en centimetros : ";
    cin>>h;
  bmi=(w*703)/(h*h);
 cout<<"Su IMC es : "<<imc<<endl;
 
 if(IMC>25)
    cout<<"Sobre peso";
 else if(imc<25 && imc>18.5)
    cout<<"Peso Optimo";
 else
    cout<<"Bajo peso";
 return 0;
}