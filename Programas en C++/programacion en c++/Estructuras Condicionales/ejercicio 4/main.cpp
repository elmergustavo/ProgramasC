#include <iostream>

using namespace std;

int main (){
    int num;
    cout<<"Ingresar un valor: ";
    cin>>num;

    if (num==0){
        cout<<"EL numero es neutro"<<endl;
    }
    else
        if(num>0){
        cout<<"EL NUMERO ES POSITIVO"<<endl;
    }
    else
        cout<<"El numero es negativo"<<endl;

return 0;
}
