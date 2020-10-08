#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num;

    cout<<"ingrese un numero entre 1-5"<<endl;
    cin>>num;

    switch(num)
    {
        case 1: cout<<"te quiero mucho"; break;
        case 2: cout<<"te amo con todo mi corazon"; break;
        case 3: cout<<"te quieres casar conmigo"; break;
        case 4: cout<<"eres lo mejor de mi vida"; break;
        case 5: cout<<"quiero pasar el resto de mi vida a tu lado";break;

        default: cout<<"debes de ingresar un numero que este en el rengo de 1-5 porfa v";
    }

    getch();
    return 0;
}
