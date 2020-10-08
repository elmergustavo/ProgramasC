#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int num, valor=0;
    cout<<"Ingrese un valor: "; cin>>num;

    for (int i=1; i<=num; i++){
        valor+=i;
    }
    cout<<"El resultado es: "<<valor<<endl;

system("pause");
return 0;
}
