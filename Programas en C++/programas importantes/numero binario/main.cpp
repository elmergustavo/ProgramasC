#include <iostream>

using namespace std;

int main()
{
    int num, y, cont, ;
    string d,res;

    cout<<"ingresar un valor"<<endl;
    cin>>num;
    cont=num;
    d=res="";

    while(cont>=1)
    {
        y=cont % 2;
        cont=cont /2;
        res= y + d;

        cout<<"el numero binario es:"<<res<<endl;
    }



    return 0;
}
