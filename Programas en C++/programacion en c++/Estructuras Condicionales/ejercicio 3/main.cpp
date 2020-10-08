#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Ingrese un valor: "; cin>>num;

    if (num==0){
        cout<<"El numero es neutro";
    }
    else
        if (num%2==0){
        cout<<"El numero es par"<<endl;
    }
    else
        cout<<"EL numero es impar";
    return 0;
}
