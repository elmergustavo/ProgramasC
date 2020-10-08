#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num1;
    cout << "ingresar numero entero" << endl;
    cin>>num1;

    if(num1%2==0)
        cout<<"es par"<<endl;
    else
        cout<<"es impar"<<endl;
    getch();
    return 0;
}
