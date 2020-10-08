//serie de fibonacci
#include <iostream>

using namespace std;

int main (){
    int z=0,y=0,x=1, num;

    cout<<"ingrese un numero: ";
    cin>>num;

    cout<<"1 ";
    for (int i=1; i<num; i++){
        z=x+y;
        cout<<z<<" ";
        y=x;
        x=z;
    }
    return 0;
}
