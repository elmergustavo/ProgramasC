#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int opcion, num, valor=0;
    cout<<"\t Bienvenido al programa"<<endl;
    cout<<"[1] Cubo de un numero"<<endl;
    cout<<"[2] Numero par o impar"<<endl;
    cout<<"[3] Salir"<<endl;
    cout<<"opcion: "; cin>>opcion;

    switch(opcion){
case 1:
    cout<<"Ingrese el valor del numero: "; cin>>num;
    valor= pow(num,3);
    cout<<"El Resultado es: "<<valor<<endl; break;
case 2:
    cout<<"Ingrese un numero: "; cin>>num;
    if(num%2==0){
        cout<<"El numero es par";
    }
    else
        cout<<"EL numero es impar";
case 3:
    break;


    }

return 0;
}
