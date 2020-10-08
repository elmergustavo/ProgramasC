#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    /*
    int numero;
    for(numero=10; numero<=40; numero+=2)
    {
        cout<<numero<<", ";
    }*/

    double num1, num2, i, resultado;
    cout<<"Ingrese un numero: ";
    cin>>num1;
    cout<<"Ingrese otro numero: ";
    cin>>num2;
    for(i=1; i<=num2; i++ )
    {
        resultado= resultado + num1;
    }

    cout<<"es resultado es: " <<resultado;
    getch();
    return 0;
}
