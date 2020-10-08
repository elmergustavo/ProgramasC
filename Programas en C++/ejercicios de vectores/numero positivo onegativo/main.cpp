#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout<<"ingresar un valor"<<endl;
    cin>>numero;

    if (numero==0){
        cout<<"el numero es neutro"<<endl;
        }
        if(numero>0)
            cout<<"el numero es positivo"<<endl;
            if(numero<0)
            cout<<"el numero es negativo"<<endl;

    return 0;
}
