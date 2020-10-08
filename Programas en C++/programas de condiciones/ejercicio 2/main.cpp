#include <iostream>
# include <conio.h>
using namespace std;

int main()
{
    int num1;
    cout << "ingrese un numero entero" << endl;
    cin>>num1;
    if (num1 != 0)
    {
        if (num1>0)

            cout<<"es positivo"<<endl;
            else
            {
                 cout<<"es negativo"<<endl;
            }

    }
    else
        cout<<"el numero es neutro"<<endl;


    getch ();
    return 0;
}
