//ejemplo encontrar el mayor
#include <iostream>
#include <conio.h>

using namespace std;

int encontrarMax(int x, int y)
{
    int mayor;

    if (x>y){
        mayor=x;
    }
    else{
        mayor=y;
    }

    return mayor;
}

int main(){
    int n1, n2, resultado;

    cout<<"ingrese el primer numero: "; cin>>n1;
    cout<<"ingrese el segundo numero: "; cin>>n2;

    resultado= encontrarMax(n1,n2);

    cout<<"el mayor es:  "<<resultado<<endl;




    getch();
    return 0;
}
