#include <iostream>

using namespace std;

int main (){
    char letra;
    cout<<"Ingrese un caracter: "; cin>>letra;

    switch(letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': cout<<"es una vocal minuscula: "; break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': cout<<"es una letra mayuscula: "; break;
    default: cout<<"no es una volcal";
    }

return 0;
}
