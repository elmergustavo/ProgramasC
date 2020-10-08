#include <iostream>

using namespace std;

void funcion(float num1, float num2, float operacion)
{
    float resul;
    if (operacion==1)
        resul=num1+num2;
        if (operacion==2)
            resul= num1-num2;
            if (operacion==3)
                resul=num1*num2;
                if (operacion==4)
                    resul=num1/num2;

        cout<<"el resultado es.."<<resul<<endl;
}




int main()
{
    float num1=0, num2=0, operacion=0, resultado;
    cout <<"ingrese primer valor" << endl;
    cin>>num1;
    cout<<"ingrese segundo valor"<<endl;
    cin>>num2;
    cout<<"que operacion desea realizar 1=suma, 2=resta, 3=multiplicacion, 4=division"<<endl;
    cin>>operacion;

    funcion(num1,num2,operacion);


    return 0;
}
