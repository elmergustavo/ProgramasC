#include <iostream>
#include <string.h>
using namespace std;


int main (){
    char frase[30];
    char frase2[30];

    cout<<"Ingrese una frase: ";
    cin.getline(frase,30,'\n');

    strcpy(frase2,frase);

    cout<<frase2;


return 0;
}
