#include <iostream>

using namespace std;

int main (){
    int numero[50],n,multi=1,valor;

    cout<<"Ingresar el tamaño del arreglo: "; cin>>n;
    for (int i=0; i<n; i++){
        cout<<"Ingrese los valores: ";
        cin>>numero[i];
        multi*=numero[i];

    }
cout<<"El RESULTADO ES: "<<" "<<multi<<endl;



return 0;
}
