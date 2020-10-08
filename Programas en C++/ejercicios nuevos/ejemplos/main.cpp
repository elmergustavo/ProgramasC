#include <iostream>

using namespace std;

int main()
{
    int aux=0, A,B,C,otro;
    cout<<"ingrese primer valor"<<endl;
    cin>>A;
    cout<<"ingrese segundo valor"<<endl;
    cin>>B;
    cout<<"ingrese tercer valor"<<endl;
    cin>>C;

    aux=C;
    otro=A;
    A=C;
    B=B;
    C=otro;

    cout<<A<<" "<<B<<" "<<C<<endl;



    return 0;
}
