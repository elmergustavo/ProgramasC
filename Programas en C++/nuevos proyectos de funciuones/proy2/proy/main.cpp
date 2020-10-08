#include <iostream>

using namespace std;

int main()
{
    int n1, n2, i, a, b, c;

    cout<<"Ingrese Rango Inicial: ";
    cin>>n1;
    cout<<"Ingrese Rango Final: ";
    cin>>n2;
    cout<<endl;

    for(i=n1; i<n2; i++)
        {
    while(i>n2);
    {
        if(i%2==0)
        {
            cout<<i<<" es divisible dentro de 2"<<endl;
        }

        if(i%3==0)
        {
            cout<<i<<" es divisible dentro de 3"<<endl;
        }

        if(i%5==0)
        {
            cout<<i<<" es divisible dentro de 5"<<endl;
        }
        }
    }
    return 0;
}
