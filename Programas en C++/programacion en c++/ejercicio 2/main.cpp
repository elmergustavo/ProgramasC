#include <iostream>

using namespace std;

int main (){
    int num, contador=0;

    do{
        cout<<"Ingres un valor: ";
        cin>>num;
        if (num>0){
            contador++;
        }
    }while(num!=0);

    cout<<"Cantidad de veces de numero mayores a ceros es: "<<contador<<endl;


return 0;
}
