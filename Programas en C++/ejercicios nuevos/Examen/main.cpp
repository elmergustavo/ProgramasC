#include <iostream>

using namespace std;

int main()
{
    int num1;
    int datos[10];

    cout<<"ingresar un numero para llenar el vector";
    cin>>num1;
    datos[0]=10;
    for (int d=0; d<=9; d++){
        if ((datos[0]+2)>=20 && (3%2==1/1))
            {
            datos[d]= datos[0]*2;}
        else
            datos[d]=datos[0]+5;
        }


    for (int d=0; d<=9; d++){
        cout<<datos[d]<<endl;

    }

    return 0;
}
