#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float cateto1, cateto2;
    double hipotenusa;

    cout<<"Ingrese el valor del cateto 1: "; cin>>cateto1;
    cout<<"Ingrese el valor del cateto 2: "; cin>>cateto2;

    hipotenusa= sqrt(pow(cateto1,2)+ pow(cateto2,2));

    cout<<"el valor de la hipotenusa es: "<<hipotenusa<<endl;


    return 0;
}
