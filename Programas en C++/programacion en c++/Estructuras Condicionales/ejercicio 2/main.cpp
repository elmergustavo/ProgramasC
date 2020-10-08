#include <iostream>

using namespace std;

int main (){
    int a,b,c;

    cout<<"Ingresar el primer valor: "; cin>>a;
    cout<<"Ingresar el segundo valor: "; cin>>b;
    cout<<"Ingresar el tercer valor: "; cin>>c;
    if ((a==b)&& (b==a)&& (c==a)){
        cout<<"los numeros son iguales";
    }
    if ((a>b)&& (a>c)){
        cout<<"El numero mayor es: "<<a<<endl;
    }
    if((b>a)&& (b>c)){
        cout<<"El numero mayor eS: "<<b<<endl;
    }
    else
        if ((c>a)&&(c>b))
        cout<<"El numero mayor es: "<<c<<endl;

    return 0;
}
