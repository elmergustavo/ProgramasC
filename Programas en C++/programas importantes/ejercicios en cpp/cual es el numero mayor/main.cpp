#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout<<"ingrese 2 numeros"<<endl; cin>>num1>>num2;

    if (num1==num2)
        cout<<"los numeros son iguales"<<endl;
    else
        if (num1>num2)
        cout<<"el numero es mayor es:"<<num1<<endl;
    else
        cout<<"el numero mayor es:"<<num2<<endl;


    return 0;
}
