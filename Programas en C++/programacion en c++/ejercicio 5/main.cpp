#include <iostream>

using namespace std;

int main (){
    int num, suma=0;
    do{
        cout<<"Ingrese un valor: "; cin>>num;
        if (num>0){
            suma+=num;
        }
    }while(((num<20) && (num>30))&&(num!=0));

    cout<<"La sumatoria de todos los numeros es: "<<suma;


return 0;
}

