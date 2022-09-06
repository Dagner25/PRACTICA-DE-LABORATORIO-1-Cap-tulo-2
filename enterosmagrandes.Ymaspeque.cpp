#include<iostream>

using namespace std;
main()
{
    int a,b,c,d,e,maxi,mini;
    cout<<"Escriba 5 integrales=";
    cin>>a>>b>>c>>d>>e;
    min=max=a;
    if(b<mini)min=b;
    if(c<mini)min=c;
    if(d<mini)min=d;
    if(e<mini)min=e;
    if(b>maxi)max=b;
    if(c>maxi)max=c;
    if(d>maxi)max=d;
    if(e>maxi)max=e;
    cout<<"El numero mas grande es: "<<maxi<<endl;
    cout<<"El numero mas pequeño es: "<<mini<<endl;
    return 0;
}