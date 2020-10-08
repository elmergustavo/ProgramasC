#include <iostream>

using namespace std;
int funcionparoimpar(int & n1, int & n2)
{

    n1=n1*5;
    n2=n2%2;



}

int main()
{
    int num1, num2, result;

    cout<<"ingrese primer numero"<<endl;
    cin>>num1;
    cout<<"ingrese el sugundo numero"<<endl;
    cin>>num2;


    result=funcionparoimpar(num1,num2);
    cout<<"el valor es:"<<num1<<endl;
    if (num2==0)
        cout<<"el numero es par:" <<endl;
    else
        cout<<"el numero es impar:"<<endl;





    return 0;
}
