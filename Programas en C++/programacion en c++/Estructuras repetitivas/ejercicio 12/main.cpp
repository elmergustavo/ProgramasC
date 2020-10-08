#include <iostream>

using namespace std;

int main()
{
    int num, negativo=0,par=0, impar=0, suma=0;

    cout<<"Ingresar un valor: "; cin>>num;
    for (int i=1; i<=num; i++){
        if (i%2==0){
            negativo= i*-1;
            par+=negativo;
        }
        else{
            impar+=i;
        }
    }
    suma=par+impar;
    cout<<"El resultado es: "<<suma<<endl;


    return 0;
}
