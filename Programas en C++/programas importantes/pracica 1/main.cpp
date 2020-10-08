#include <iostream>

using namespace std;

int funcion(int num, int num2)
{
    int resul;
    resul=num*num2;
    return resul;
}




int main()
{
    int num, num2, resultado;
    cout<<"ingrese un valor"<<endl;
    cin>>num;
    cout<<"ingrese el segundo valor"<<endl;
    cin>>num2;
    resultado=funcion(num,num2);

    cout<<"el resultado es:"<<resultado;

    return 0;
}
