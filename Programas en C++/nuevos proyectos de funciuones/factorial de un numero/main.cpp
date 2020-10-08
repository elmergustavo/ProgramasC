#include <iostream>

using namespace std;

int main()
{
    int num1, factorial=1;
    cout << "ingresar un numero" << endl;
    cin>>num1;

    for (int i=1; i<=num1; i++ )
    {
        factorial=i*factorial;
    }
    cout<<"el factorial del numero es..."<<factorial<<endl;


    return 0;
}
