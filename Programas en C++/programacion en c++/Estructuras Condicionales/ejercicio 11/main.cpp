#include <iostream>

using namespace std;

int main (){
    int extra, retiro, opcion, saldo_inicial=1000;
    double dinero, total;

    cout<<"\tBienvenido a su cajero automatico"<<endl;
    cout<<"1. Ingresar dinero en cuenta"<<endl;
    cout<<"2. Retirar Dinero de la cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: "; cin>>opcion;

    switch(opcion){
    case 1:
        cout<<"\nCuanto de dinero desea ingresar a su cuenta:' ";cin>>extra;
        dinero=saldo_inicial+extra;
        cout<<"La nueva cantidad de dinero es de: "<<dinero<<endl; break;
    case 2:
        cout<<"\Cuanto de dinero desea retirar en su cuenta: "; cin>>retiro;
        if (retiro > saldo_inicial){
            cout<<"No cuenta con esa cantidad: ";
        }
        total= saldo_inicial-retiro;
        cout<<"Dinero en cuenta"<<total<<endl; break;
    case 3: break;
    }
return 0;
}
