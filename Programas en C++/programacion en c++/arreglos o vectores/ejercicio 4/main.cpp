#include <iostream>

using namespace std;

int main (){
    int numero[100],n;

    cout<<"\tIngrese el tamaño del vector: "; cin>>n;

    for (int i=0; i<n; i++){
        cout<<"Ingrese los valores de vector: ";
        cin>>numero[i];
    }
    cout<<"orden inversa: ";
    for (int k=n--; k>=0; k--){
        cout<<numero[k]<<endl;
        }


return 0;
}
