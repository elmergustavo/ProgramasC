#include <iostream>

using namespace std;

int main (){
    int edad;

    cout<<"Ingrese su edad  que este en el rango de [18-25]: ";
    cin>>edad;

    if ((edad>=18)&& (edad<=25)){
        cout<<"la edad es correcta"<<endl;
    }
    else
        cout<<"la edad no esta dentro del rango determinado";


return 0;
}
