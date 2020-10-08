#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num1, suma, resta, multiplicacion;
    float division, num2;

    cout<<"ingresar primer numero"<<endl;
    cin>>num1;
    cout<<"ingresar segundo numero"<<endl;
    cin>>num2;

    suma=num1+num2;
    resta=num1-num2;
    multiplicacion=num1*num2;
    division=num1/num2;

    cout<<"la suma es:"<<suma<<endl;
    cout<<"la resta es:"<<resta<<endl;
    cout<<"la multiplicacion es:"<<multiplicacion<<endl;
    cout<<"la division es:"<<division<<endl;

    getch();
    return 0;
}
