#include <iostream>

using namespace std;

int main (){
    int numero[100],n,suma=0;
    cout<<"\tnumero del vector: "; cin>>n;
    for (int i=0; i<n; i++){
        cout<<"ingrese el numero: ";
        cin>>numero[i];
        suma+=numero[i];
    }
    cout<<"\nLa suma es: "<<suma<<endl;


return 0;
}
