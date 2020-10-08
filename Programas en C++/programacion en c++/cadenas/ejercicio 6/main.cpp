#include <iostream>
#include <string.h>

using namespace std;

int main (){
    char palabra[20];
    char palabra2[20];

    cout<<"Ingrese una frase: ";
    cin.getline(palabra,20,'\n');

    cout<<"Ingrese otra frase: ";
    cin.getline(palabra2,20,'\n');

    strupr(palabra);
    strupr(palabra2);

    cout<<palabra<<endl;
    if(strcmp(palabra,palabra2)==0){
        cout<<"Ambas palabras son iguales"<<endl;
    }
    else
        cout<<"No so iguales";



    return 0;
}
