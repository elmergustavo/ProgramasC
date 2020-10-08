//calcule la hipotenusa de un triangulo
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    float a,  b, resultado;

    cout<<"ingrese el valor de a"<<endl;
    cin>>a;
    cout<<"ingrese el valor de b"<<endl;
    cin>>b;

    resultado= sqrt(pow(a,2)+(pow(b,2)));

    cout<<"el resultado de la hipotenusa es:"<<resultado<<endl;

    return 0;
}
