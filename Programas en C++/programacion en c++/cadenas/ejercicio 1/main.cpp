#include <iostream>
#include <string.h>

using namespace std;

int main (){
    char frase[50];


    cout<<"Digite una cadena de caracteres: ";
    cin.getline(frase,50,'\n');

    if (strlen(frase)>10){
        cout<<frase;
    }
    else
        cout<<"la cadena no supera a 10"<<endl;




return 0;
}
