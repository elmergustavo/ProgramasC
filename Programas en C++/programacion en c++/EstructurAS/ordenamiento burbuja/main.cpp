#include <iostream>

using namespace std;

int main (){
    int vector[50],num,aux;

    cout<<"Ingrese el tamaño del vector: ";
    cin>>num;

    for (int i=0;i<num; i++){
        cout<<"Ingrese un valor: ";
        cin>>vector[i];
    }
    cout<<"\nOrdenamiento del vector\n";
    for (int i=0; i<num; i++){
        for (int j=0; j<num; j++){
            if (vector[j]>vector[j+1]){
                aux=vector[j];
                vector[j]=vector[j+1];
                vector[j+1]=aux;
            }
        }
    }

    for (int i=0; i<num; i++){
        cout<<vector[i]<<" ";
    }


    return 0;
}
