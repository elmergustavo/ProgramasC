#include <iostream>

using namespace std;

int main (){
    int num, contador=0;
    do{
        cout<<"Introduzca un valor: "; cin>>num;
        if (num>0){
            contador++;
        }
    }while (num!=0);

    cout<<"LA CANTIDAD DE VECES MAYORES A CERO ES: "<<contador;

return 0;
}
