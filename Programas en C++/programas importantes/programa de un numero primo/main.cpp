#include <iostream>
#include <conio.h>

using namespace std;

string   funcion(int v1)
{


        if (v1%2==0)
            return("\nel numero es par");
        else
            return ("\n es impar");

}



int main()
{
    int num1, i, factores = 0;
    cout<<"ingresar numero"<<endl;
    cin>>num1;

    for (i=1; i<=num1; i++)
    {
       if(num1 % i == 0)
       {
           factores = factores + 1;
       }
    }

    if(factores == 2)
    {
        cout<<"El numero: " <<num1 <<" es primo";
    }
    else
        cout<<"No es primo";

    cout<<funcion(num1);

    getch();
    return 0;
}
