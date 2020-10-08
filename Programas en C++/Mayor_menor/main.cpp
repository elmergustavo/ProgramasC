#include <iostream>

using namespace std;

int main()
{
     int N1,N2;
    cout<<"ingrese un numero"<<endl;
    cin>>N1;
    cout<<"ingrese un segundo numero"<<endl;
    cin>>N2;
    if(N1 != N2)
    {
    if(N1<N2)
    {
        cout<<"el mayor es..."<<N2<<endl;
        cout<<"el menor es..."<<N1<<endl;
    }

    else
    {
         cout << "el menor es..."<<N2<< endl;
    cout<<"el mayor es..."<<N1<<endl;
    }

  }
  else
        cout<<"los numeros son iguales"<<endl;
    return 0;
}
