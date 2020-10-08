#include <iostream>

using namespace std;

double hacer_operacion(double nu1, double nu2, double op)
{
    double result;

        if (op==1)
        result=nu1+nu2;
        else

            if (op==2)
            result= nu1-nu2;
            else

                if(op==3)
                    result=nu1*nu2;
                else

                    if (op==4)
                        result=nu1/nu2;

             return result;

        }


int main()
{
   double num1=0, num2=0, resp=0;
   double operacion;
   cout<<"ingrese primer numero valor"<<endl;
   cin>>num1;
    cout<<"ingrese segundo numero valor"<<endl;
   cin>>num2;
   cout<<"Que operacion desea realizar? 1=suma, 2=resta, 3=multiplicacion 4=division"<<endl;
   cin>>operacion;

   resp= hacer_operacion(num1, num2, operacion);
   cout<<"el resultado es:"<<resp<<endl;
    return 0;
}
