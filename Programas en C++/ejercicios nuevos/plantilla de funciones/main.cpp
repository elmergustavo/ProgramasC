//valor absoluto de un numero
#include <iostream>
#include <conio.h>

using namespace std;
template <class tipo>
void valorabsoluto(tipo numero){
    if (numero<0){
        numero=numero*-1;
    }

    cout<<"el valor absoluto del numero es: "<<numero<<endl;


}


int main()
{
    int num1=-85;
   float num2= -5.85;
   double num3=-78.2569;
   int num4;

    valorabsoluto(num1);
    valorabsoluto(num2);
    valorabsoluto(num3);

    cout<<"Digite un numero: "; cin>>num4;
    valorabsoluto(num4);




    return 0;
}
