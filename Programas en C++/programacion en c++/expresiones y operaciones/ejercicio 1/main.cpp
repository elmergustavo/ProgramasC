#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    double a,b, resultado;

    cout<<"ingrese el valor de a: "; cin>>a;
    cout<<"ingrese el valor de b: "; cin>>b;

     resultado= (a/b) +1;
     cout.precision(1);

     cout<<"el resultado es: "<<resultado<<endl;

    system("pause");
    return 0;
}
