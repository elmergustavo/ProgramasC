#include <iostream>

using namespace std;

int main()
{
   int N1,N2,N3;
    cout<<"ingrese primer numero"<<endl;
    cin>>N1;
    cout<<"ingrese segundo numero"<<endl;
    cin>>N2;
    cout<<"ingrese tercer numero"<<endl;
    cin>>N3;
    if(N1 != N2 && N2 != N3 && N1!= N3)
    {
    if(N1 > N2 && N1 > N3)
        if (N2 > N3)
    {
        cout<<"el mayor es..."<<N1<<endl;
        cout<<"el mediano es..."<<N2<<endl;
        cout<<"el menor es..."<<N3<<endl;
    }
    else
    {
         cout << "el Mediano es..."<<N3<< endl;
         cout<<"el menor es..."<<N2<<endl;
    }


        if(N2 > N1 && N2 > N3)
            if (N1 > N3)
    {
        cout<<"el mayor es..."<<N2<<endl;
        cout<<"el mediano es..."<<N1<<endl;
        cout<<"el menor es..."<<N3<<endl;
    }
    else
    {
         cout << "el Mediano es..."<<N3<< endl;
         cout<<"el menor es..."<<N1<<endl;
    }


             if(N3 > N1 && N3 > N2)
                 if (N2 > N1)
    {
        cout<<"el mayor es..."<<N3<<endl;
        cout<<"el mediano es..."<<N2<<endl;
        cout<<"el menor es..."<<N1<<endl;
    }
    else
    {
         cout << "el Mediano es..."<<N1<< endl;
         cout<<"el menor es..."<<N2<<endl;
    }
  }
  else
        cout<<"los numeros son iguales"<<endl;
    return 0;
}
