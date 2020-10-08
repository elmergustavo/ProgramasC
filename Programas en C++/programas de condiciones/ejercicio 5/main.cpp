#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout<<"ingresar primer numero"<<endl;
    cin>>num1;
    cout<<"ingresar segundo numero"<<endl;
    cin>>num2;
    cout<<"ingresar tercer nuemro"<<endl;
    cin>>num3;

    if (num1!=num2 && num2!=num3 && num1!=num3)
    {
        if (num1>num2 && num1> num3)
            if (num2>num3)
            {
                cout<<"el mayor es:"<<num1<<endl;
                cout<<"el mediano es:"<<num2<<endl;
                cout<<"el menor es:" <<num3<<endl;
            }
            else
            {
                cout<<"el mediano es:"<<num3<<endl;
                cout<<"el menor es:"<<num2<<endl;
            }


            if (num2>num1 && num2>num3)
            if (num1>num3)
            {
                cout<<"el mayor es:" <<num2<<endl;
                cout<<"el mediano es:"<<num1<<endl;
                cout<<"el menor es:"<<num3<<endl;
            }
            else
            {
                cout<<"el mediano es:"<<num3<<endl;
                cout<<"el menor es:"<<num1<<endl;

            }
            if (num3>num1 && num3>num2)
            if (num2>num1)
            {
                cout<<"el mayor es:"<<num3<<endl;
                cout<<"el mediano es:"<<num2<<endl;
                cout<<"el menor es:"<<num1<<endl;
            }
            else
            {
                cout<<"el mediano es:"<<num1<<endl;
                cout<<"el menor es:"<<num2<<endl;
            }

        }
        else
            cout<<"todos los numeros son iguales"<<endl;


    getch();
    return 0;
}
