#include <iostream>
#include <conio.h>
using namespace std;

int numero, exponente;
void pedirdato(){

    cout<<"Digite un numero: ";
    cin>>numero;
    cout<<"Digite el numero de elevacion: ";
    cin>>exponente;
}

void funpot(int x, int y){
    long resultado=1;
    for (int i=1; i<=y; i++){
        resultado= resultado * x;
    }

    cout<<"el resultado es: "<<resultado<<endl;
}

int main()
{
    pedirdato();
    funpot(numero,exponente);
    getch();
    return 0;
}
