#include <iostream>

using namespace std;

int main()
{
    int x,y,inter;

    cout<<"ingresar el valor de x"<<endl; cin>>x;
    cout<<"ingresar el valor de y"<<endl; cin>>y;

    inter=x;
    x=y;
    y=inter;


    cout<<"el nuevo valor de x es:"<<x<<endl;
    cout<<"el nuevo valor de y es:"<<y<<endl;





    return 0;
}
