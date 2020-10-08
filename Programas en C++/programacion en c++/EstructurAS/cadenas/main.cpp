#include <iostream>
#include <string.h>

using namespace std;

int main (){
    char palabra[30];
    char palabra2[30];

    cout<<"Ingrese una palabra: ";
    cin.getline(palabra,30,'\n');

    strcpy(palabra2,palabra);
    strrev(palabra);

    if (strcmp(palabra2,palabra)==0){
        cout<<"LA PALABRA ES POLINDROMA"<<endl;
    }
    else
        cout<<"la palabra no es polindroma"<<endl;




    return 0;
}
