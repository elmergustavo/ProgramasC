//realiza un programa que calcule el valor que toma la suguiente funcion valores dados de x e y:

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
   float x, y, resultado;
   cout<<"ingrese el valor de x"<<endl;
   cin>>x;
   cout<<"ingrese le valor de y"<<endl;
   cin>>y;

   resultado= (sqrt(x))/(pow(y,2)-1);

   cout<<"el resultado es..."<<resultado<<endl;

    getch();
    return 0;
}
