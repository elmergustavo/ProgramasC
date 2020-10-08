#include <iostream>

using namespace std;

void valores(int & n1, int& n2)
{
    n1=n1*5;
    n2=n2+5;
}






int main()
{
    int num1, num2;
    cout<<"ingrese el primer numero"<<endl;
    cin>>num1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>num2;

    valores(num1,num2);

    cout<<"el primer valor es:"<<num1<<endl;
    cout<<"el segundo valor es:"<<num2<<endl;




    return 0;
}
