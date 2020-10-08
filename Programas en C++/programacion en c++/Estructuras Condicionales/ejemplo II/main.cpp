/*Programa que lee 3 numeros enteros diferentes y los despliega de mayor a menor*/

#include <iostream>

using namespace std;

int main()
{
    int a, b ,c;

    cout<<"Dame el primer valor: "; cin>>a;
    cout<<"Dame el segundo valor: "; cin>>b;
    cout<<"Dame el tercer valor: "; cin>>c;

    if (a>b)
        if (b>c)
        cout<<a<<" "<<b<<" "<<c;
        else
        cout<<a<<" "<<c<<" "<<b;
    else
        if (a>c)
        cout<<b<<" "<<a<<" "<<c;
        else
            if(b>c)
            cout<<b<<" "<<c<<" "<<a;
            else
                cout<<c<<" "<<b<<" "<<a;

    return 0;
}
