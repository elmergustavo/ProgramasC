#include <iostream>

using namespace std;

double funcion(double n1, double n2,double op)
{
    double resul;
        if (op==1)
            resul=n1+n2;
        else
            if (op==2)
            resul= n1-n2;
        else
            if (op==3)
            resul= n1*n2;
        else
            if (op==4)
            resul= n1 / n2;
        return resul;

}






int main()
{
    double num1=0, num2=0, resp=0, operacion;

    cout<<"que operacion desea realizar? 1=suma, 2=resta, 3=multiplicacion, 4=division"<<endl;
    cin>>operacion;

    cout<<"ingrese el primer numero"<<endl;
    cin>>num1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>num2;

    resp=funcion(num1,num2,operacion);

    cout<<"el resultado es... "<<resp<<endl;


    return 0;
}
