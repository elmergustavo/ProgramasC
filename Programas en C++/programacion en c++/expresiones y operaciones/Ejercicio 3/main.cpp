#include <iostream>
#include <stdlib.h>


using namespace std;

int main ( ){
    double a, b,c,d, resultado=0, e, f;

    cout<<"ingrese el valor de a: "; cin>>a;
    cout<<"ingrese el valor de b: "; cin>>b;
    cout<<"ingrese el valor de c: "; cin>>c;
    cout<<"ingrese el valor de d: "; cin>>d;
    cout<<"ingrese el valor de e: "; cin>>e;
    cout<<"ingrese el valor de f: "; cin>>f;



    resultado= (a+(d/c)) / (d + (e/f));


    cout.precision(10);
    cout<<"el resultado es: "<<resultado<<endl;
system("pause");
return 0;
}
