#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    string nombre[50],dato;
    int i,cantidad;
    char band='f';

    cout<<"Ingresar la cantidad de nombre que ingresara: ";
    cin>>cantidad;
    cout<<endl;
    for (i=0; i<cantidad; i++){
        cout<<"Ingrese nombre: ";
        cin>>nombre[i];
    }

    cout<<"\nIngrese el nombre que desee buscar: ";
    cin>>dato;

    i=0;
    while((band=='f')&&(i<cantidad)){
        if (nombre[i]==dato){
            band='v';
            }
            i++;
        }
    if (band=='f'){
        cout<<"\nEl nombre no ha sido encontrado"<<endl;
    }
    else if(band=='v'){
        cout<<"\nEl nombre ha sido encontrado"<<endl;
    }



    system("pause");
    return 0;
}
