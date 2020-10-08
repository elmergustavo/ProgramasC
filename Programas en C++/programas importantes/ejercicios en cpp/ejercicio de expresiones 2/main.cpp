#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, resultado;

    cout<<"ingrese el valor de a"<<endl;
    cin>>a;
    cout<<"ingrese e valor de b"<<endl;
    cin>>b;
    cout<<"ingrese el valor de c"<<endl;
    cin>>c;
    cout<<"ingresar el valor de d"<<endl;
    cin>>d;

    resultado=(a+b) / (c+d);
    cout.precision(3);
    cout<<"el resultado es..."<<resultado<<endl;

    return 0;
}
