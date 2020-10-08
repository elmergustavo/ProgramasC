#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main (){
    int dato=0, num,contador=0;

    srand(time(NULL));
    dato= 1 + rand()%(101-1);


    do{
        cout<<"INGRESE UN VALOR: "; cin>>num;
        if(num>dato){
            cout<<"Es un numero menor"<<endl;
        }
        else{
            cout<<"Ea un numero mayor"<<endl;
        }
        contador++;
    }while (num!=dato);

    cout<<" FELICIDADES HAS ECONTRADO EL VALOR CORRECTO"<<endl;
    cout<<" NUMERO DE INTENTO"<<contador<<endl;









return 0;
}
