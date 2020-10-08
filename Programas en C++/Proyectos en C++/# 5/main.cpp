//Ingresar el nombre, apellido y edad determine en que año nacio


#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    string nombre, apellido;
    int edad;

    cout<<"ingresar nombre"<<endl;
    cin>>nombre;
    cout<<"ingresar apellido"<<endl;
    cin>>apellido;
    cout<<"ingresar edad"<<endl;
    cin>>edad;

    edad= (2017 - edad);

    cout<<"el ano de nacimiento es:"<<edad;


    getch();
    return 0;
}
