#include <iostream>

using namespace std;

int main()
{
    int num,a,b,c,d;
    double promedio=0;

    cout<<"Ingrese una cantidad con cuato digitos: ";
    cin>>num;

    a=num/1000;
    num%=1000;
    b=num/100;
    num%=100;
    c=num/10;
    num%=10;
    d=num/1;
    cin.precision(0);
    promedio=(a+b+c+d)/4;


    cout<<"El valor de a es: "<<a<<endl;
    cout<<"El valor de b es: "<<b<<endl;
    cout<<"El valor de c es: "<<c<<endl;
    cout<<"El valor de d es: "<<d<<endl;
    cout<<"El promedio es: "<<promedio<<endl;








    return 0;
}
