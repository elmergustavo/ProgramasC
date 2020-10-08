#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char frase[30];
    char frase2[30];

    cout<<"Ingrese una frase: ";
    cin.getline(frase,30,'\n');
    cout<<"Ingrese otra frase: ";
    cin.getline(frase2,30,'\n');

    if (strcmp(frase,frase2)==0){
        cout<<"Ambas palabras son iguales: ";
    }
    else
    if(strcmp(frase,frase2)>0){
        cout<<frase<<" es mayor alfabeticamente: ";
    }
    else
        cout<<frase2<<" es amyor alfabeticamente";




    return 0;
}
