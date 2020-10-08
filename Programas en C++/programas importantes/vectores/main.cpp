#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    /*int vector[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++)
    {
        cout<<vector[i]<<endl;
    }*/
    int aux;
    int acumulador = 0;
    int vector[5];

    for(int i=0; i<5;i++)
    {
        cout<<"Ingrese un numero: ";
        cin>>aux;
        vector[i] = aux;
        acumulador = acumulador + aux;
    }
    for(int i=0; i<5;i++)
    {
        cout<<vector[i]<<endl;


    }
    cout << "la suma de los numeros es:"<< acumulador<< endl;



    getch();
    return 0;
}
