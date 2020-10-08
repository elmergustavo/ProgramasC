#include <iostream>

using namespace std;

bool primo(int a)
{
    int i, s=0;
    bool c;

    for(i=2; i<=a; i++)
    {
        if(a%i==0)
        {
            s+=+1;
        }
    }

    if(s==1)
    {
        c=true;
    }
    else
    {
        c=false;
    }
    return (c);
}
int main()
{
    int num;
    bool p;
    cout<<"Ingrese un Numero: ";
    cin>>num;
    p=primo(num);
    cout<<endl;
    cout<<"¿El Numero es Primo?"<<endl;
    cout<<endl;
    if(p==true)
    {
        cout<<"es primo"<<endl;
    }
    else
    {
        cout<<"no es primo"<<endl;
    }
    cout<<endl;
    return 0;
}
