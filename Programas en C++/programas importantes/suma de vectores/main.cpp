#include <iostream>

using namespace std;

int main()
{

    int aux;
    int acumulador = 0;
    int vector[5];


    for(int i=0; i<5;i++)
    {
        cout<<"Ingrese una cantidad: ";
        cin>>aux;
        vector[i] = aux;
        acumulador = acumulador + aux;
    }

    for(int i=0; i<5;i++)
    {
        cout<<vector[i]<<endl;



    }
    cout<<"\nLa suma es: "<<acumulador<<endl;
    return 0;
}

