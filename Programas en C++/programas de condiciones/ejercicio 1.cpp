#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int edad;
    cout << "ingrese su edad" << endl;
    cin>>edad;
    if(edad>=18)
        cout<<"es mayor de edad"<<endl;
    else
        cout<<"es menor de edad"<<endl;
    getch();
    return 0;
}
