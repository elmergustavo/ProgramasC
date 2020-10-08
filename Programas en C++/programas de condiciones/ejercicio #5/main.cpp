#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num1, num2;

    cout <<"ingrese primer numero"<< endl;
    cin>>num1;
    cout<<"ingrese segundo numero"<<endl;
    cin>>num2;

    if (num1 != num2)
    {
        if (num1>num2)
        {
            cout<<"el primer numero es el mayor"<<endl;
            cout<<"el segundo numero es el menor"<<endl;
        }
        else
        {
            cout<<"el segundo numero es el mayor"<<endl;
            cout<<"el primer numero es el menor"<<endl;
        }

    }
    else
        cout<<"los numeros son neutros"<<endl;
    getch();
    return 0;
}
