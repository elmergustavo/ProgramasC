#include <iostream>

using namespace std;

int main (){
    int num, valor=1;
    cout<<"Dame un numero: "; cin>>num;

    for (int i=1; i<=num; i++){
        valor *=i;
    }
    cout<<"el resultado es: "<<valor<<endl;

return 0;
}
