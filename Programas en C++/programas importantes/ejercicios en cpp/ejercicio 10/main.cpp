//realiza un programa que calcele las soluciones de segundo grado de la formula cuadratica
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, resultado_1, resultado_2;

    cout<<"ingrese el valor de a"<<endl;
    cin>>a;
    cout<<"ingrese el valor de b"<<endl;
    cin>>b;
    cout<<"ingrese el valor de c"<<endl;
    cin>>c;

    resultado_1= (-b+sqrt(pow(b,2)-4*a*c)) / (2*a);
    resultado_2= (-b-sqrt(pow(b,2)-4*a*c)) / (2*a);

    cout<<"el resultado 1 es:"<<resultado_1<<endl;
    cout<<"el resultado 2 es:"<<resultado_2<<endl;

    getch();
    return 0;
}
