#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
   int numero[100], n, mayor=0;
   cout<<"digite el numero de arreglo que desea"<<endl;
    cin>>n;
   for(int i=0; i<n; i++)
   {
       cout<<"ingrese un valor"<<endl;
       cin>>numero[i];

        if(numero[i] > mayor)
            mayor=numero[i];


    }
                cout<<"el numero mayor es.."<<mayor<<endl;

    getch();
    return 0;
}
