#include <iostream>

using namespace std;

int main()
{
    int num, y, cont;
    string res="";

    cout<<"ingrese un numero"<<endl;
    cin>>num;

    cont=num;
    res="";

    while (cont>=1)
    {
        y=cont%2;
        cont= cont /2;
        res=y + res;

    cout<<"el numero binario es:"<<endl;
    }
    return 0;
}
