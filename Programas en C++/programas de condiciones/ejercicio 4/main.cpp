#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"ingrese primer numero"<<endl;
    cin>> num1;
    cout<<"inrese segundo numero"<<endl;
    cin>>num2;

    if(num1>num2)
        cout<<"primer numero es mayor"<<endl;
    else
        cout<<"segundo numero es mayor"<<endl;
    getch();
    return 0;
}
