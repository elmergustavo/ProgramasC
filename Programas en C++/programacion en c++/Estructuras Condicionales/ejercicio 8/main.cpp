#include <iostream>

using namespace std;

int main()
{
   int  num1,  num2, num3, num4;

   cout<<"Ingrese primer numero: "; cin>>num1;
   cout<<"Ingrese el segundo numero: "; cin>>num2;
   cout<<"Ingrese el tercer numero: "; cin>>num3;
   cout<<"\n";
   cout<<"Ingrese el cuarto numero: "; cin>>num4;
   if ((num4==num1)|| (num4==num2)|| (num4==num3)){
    cout<<"El numero coincide con los datos anteriores";
   }
   else
    cout<<" El numero no coincide";


    return 0;
}
