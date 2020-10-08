#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
    int numeros[5];
    int temp;

    for(int i=0; i<5; i++)
    {
        cout<<"ingresar un valor"<<endl;
        cin>>numeros[i];
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if (numeros [j + 1] < numeros [j])
            {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    for(int j=0; j<5; j++)
    {
        cout<<numeros[j];
    }

    cout<<endl;
    for(int i=4; i>=0; i--)
    {
        cout<<numeros[i];
    }

    getch ();
    return 0;
}
