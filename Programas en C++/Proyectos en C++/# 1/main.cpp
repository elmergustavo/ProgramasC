//ingresados dos numeros y encuentre la sumatoria de esos dos numeros

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num1, num2, suma;
    cout << "Ingresar primer numero"<< endl;
    cin>>num1;
    cout << "ingresar segundo numero"<<endl;
    cin>>num2;

    suma=num1+num2;
    cout<<"La suma es: " <<suma;


    getch();
    return 0;
}
