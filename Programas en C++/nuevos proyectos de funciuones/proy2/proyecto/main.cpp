#include <iostream>

using namespace std;

int suma(int n1, int n2)
{
    int result;
    result=n1 + n2;
    return result;
}


int main()
{
    int num1, num2, fin;
   cout<<"ingresar primer numero"<<endl;
   cin>>num1;
   cout<<"ingresar segundo numero"<<endl;
   cin>>num2;

   fin=suma(num1,num2);

   cout<<"el resultado es:"<<fin<<endl;




    return 0;
}
