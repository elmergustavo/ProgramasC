#include <iostream>

using namespace std;

int main (){
    int a,b, aux;
    cout<<"ingrese el primer valor: ";
    cin>>a;
    cout<<"ingrese el segundo valor: ";
    cin>>b;

    aux=a;
    a=b;
    b=aux;

    cout<<"el nuevo valor del primer numero es:"<<a<<endl;
    cout<<"El nuevo valor del segundo numero es:"<<b<<endl;



return 0;
}
