#include <iostream>

using namespace std;

int main (){
    int num;
    cout<<"Ingrese un numero entre (1-12) "; cin>>num;

    switch(num){
    case 1: cout<<"ENERO"; break;
    case 2: cout<<"FEBRERO "; break;
    case 3: cout<<"MARZO "; break;
    case 4: cout<<"ABRIL "; break;
    case 5: cout<<"MAYO "; break;
    case 6: cout<<"JUNIO "; break;
    case 7: cout<<"JULIO "; break;
    case 8: cout<<"AGOSTO "; break;
    case 9: cout<<"SEPTIEMPRE "; break;
    case 10: cout<<"OCTUBRE "; break;
    case 11: cout<<"NOVIEMBRE "; break;
    case 12: cout<<"DICIEMPBRE "; break;
    default: cout<<"EL numero no esta dentro del rango acordado";
    }

return 0;
}
