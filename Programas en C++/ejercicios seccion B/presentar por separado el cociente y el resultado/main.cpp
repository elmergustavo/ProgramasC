#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
   int  num1, num2;
   float num_cociente, num_resultado;

   cout<<"ingresar primer numero"<<endl;
   cin>>num1;
   cout<<"ingresar segundo numero"<<endl;
   cin>>num2;


   num_cociente=num1/num2;
   num_resultado= (num1%num2);

   cout<<"el cociente es:"<<num_cociente<<endl;
   cout<<"el residuo es:"<<num_resultado<<endl;




    getch();

    return 0;
}
