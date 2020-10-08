#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int factorial, valor, i;
    cout<<"Ingrese un numero: "<<endl;
    cin>>valor;
    factorial = 1;
    for(i=1; i<=valor; i++)
    {
        factorial = i * factorial;
    }
    cout<<factorial;
    getch();
    return 0;
}
