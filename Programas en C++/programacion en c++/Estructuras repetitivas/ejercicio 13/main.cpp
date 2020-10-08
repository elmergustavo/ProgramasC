#include <iostream>

using namespace std;

int main()
{
    int num, z=1, y=1, x=0;
    cout<<"Ingrese un valor: "; cin>>num;
    cout<<"1 ";
    for (int i=1; i<num; i++){
        z=x+y;
        cout<<z<<" ";
        x=y;
        y=z;
    }

    return 0;
}
