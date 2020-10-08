#include <iostream>

using namespace std;

int main()
{
    int numeros[]={4,1,2,3,5};
    int aux;


    for (int j=0; j<5; j++){
        if (numeros[j]>numeros[j+1]){
            aux=numeros[j];
            numeros[j]=numeros[j+1];
            numeros[j+1]=aux;
        }

    }
    cout<<"Orden ascendente:  ";
    for (int j=0; j<5; j++){
        cout<<numeros[j]<<" ";
    }

    cout<<"\nOrden descendente:  ";
    for (int j=4; j>=0; j--){
        cout<<numeros[j]<<" ";
    }



    return 0;
}
