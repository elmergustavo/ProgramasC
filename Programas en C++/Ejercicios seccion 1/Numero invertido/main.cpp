#include <iostream>

using namespace std;

int main()
{
    int n1, c1, c2, d1, d2, m1, m2, suma, u;

    cout<<"Ingrese Numero de 4 digitos: ";
    cin>>n1;
    cout<<endl;
    m1=n1/1000;
    m2=n1%1000;
    c1=m2/100;
    c2=m2%100;
    d1=c2/10;
    d2=c2%10;
    u=d2;

    suma=(u*1000)+(d1*100)+(c1*10)+m1;

    cout<<endl;
    cout<<"El Inverso es: "<<suma<<endl;
    cout<<"La Mitad del Inverso es: "<<suma/2<<endl;

}
