#include <iostream>

using namespace std;

int main (){
    int numero[100],n,mayor=0;

    cout<<"Ingresar el tamaño del vector: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Ingrese los valores: "; cin>>numero[i];
        if(numero[i]>mayor){
            mayor =numero[i];
        }
    }


    cout<<"EL NUMERO MAYOR ES: "<<mayor<<endl;


return 0;
}
