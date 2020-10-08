/*Ingresados 3 numeros enteros multiplique la suma del primero con el segundo
con la resta del primero por el tercero */


#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num1, num2, num3, multiplicacion;

    cout<<"Ingrese primer numero"<<endl;
    cin>>num1;
    cout<<"ingrese segundo numero"<<endl;
    cin>>num2;
    cout<<"Ingrese tercer numero"<<endl;
    cin>>num3;


    multiplicacion= (num1+num2)*(num1-num3);

    cout<<"la multiplicacion de la suma del primero con el segundo con la resta del primero por el tercero es: "<<multiplicacion;

    getch();
    return 0;
}
