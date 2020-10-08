#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int numero[50];
    int i,dato,num;
    char band='f';

    cout<<"Ingrese el tamano del vector: ";
    cin>>num;

    //llenar vector
    cout<<endl;
    for (i=0; i<num; i++){
        cout<<"Ingrese un numero: ";
        cin>>numero[i];
    }
    cout<<"\nIngrese el numero que desea buscar en el arreglo: ";
    cin>>dato;

    i=0;
    while((band=='f')&& (i<num)){
        if (numero[i]==dato){
            band='v';
        }
        i++;
    }

    if (band=='f'){
        cout<<"\nEl numero no ha sido encontrado en el vector"<<endl;
    }
    else
    if (band=='v'){
        cout<<"\nEl numero "<<dato<<" ha sido encontrado en la pos: "<<i-1<<endl;
    }

    getch();
    return 0;
}
