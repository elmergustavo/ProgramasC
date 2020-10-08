#include <iostream>

using namespace std;

int main (){
    int a,b;
    cout<<"Ingrese el primer numero: "; cin>>a;
    cout<<"Ingrese el segundo numero: "; cin>>b;
    if (a==b)
        cout<<"LOS NUMERO SON IGUALES: ";
    else
        if (a>b){
        cout<<"El mayor es: "<<a;
        }
        else
        cout<<"El mayor es: "<<b;


return 0;
}
