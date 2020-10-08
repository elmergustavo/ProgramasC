#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int  x,y;
    double resultado=0;

    cout<<"ingrese el valor de x: "; cin>>x;
    cout<<"Ingrese el valor de y: "; cin>>y;

    resultado= sqrt(x) / (pow(y,2)-1);

    cout<<"el resultado es: "<<resultado;

    return 0;
}
