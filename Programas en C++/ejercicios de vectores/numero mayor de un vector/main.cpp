#include <iostream>

using namespace std;

int main()
{
   int numero[100],n, mayor=0;

   cout<<"ingrese de cuando va haser su arreglo"<<endl;
    cin>>n;

   for (int i=0; i<n; i++)
   {
       cout<<"ingrese un valor"<<endl;
       cin>>numero[i];

        if (numero[i]>mayor)
            mayor=numero[i];
   }

   cout<<"el numero mayor es"<<mayor<<endl;
   for (int i=0; i<n; i++)
    cout<<i<<"  -> "<<numero[i]<<endl;
    return 0;
}
