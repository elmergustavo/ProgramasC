#include <iostream>

using namespace std;

int main()
{
   int numero[100], n;

   cout<<"ingrese el numero de arreglo que desea tener"<<endl;
   cin>>n;

   for(int i=0; i<n; i++)
   {
       cout<<"ingrese un valor"<<endl;
       cin>>numero[i];
   }

   for (int i=0; i<n; i++)
   {
       cout<<i<<"  ->  "<<numero[i]<<endl;
   }

    return 0;
}
