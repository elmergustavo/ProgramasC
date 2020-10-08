//escriba un programa que defina un vector de numeros y calcule la multiplicacion   acumulada de sus elementos

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero[]={1,2,3,4,5,6};
    int resultado=1;

    for (int i=0; i<6; i++)
    {
        resultado=resultado * numero[i];
    }
    cout<<"la multiplicacion es..."<<resultado<<endl;
    getch();
    return 0;
}
