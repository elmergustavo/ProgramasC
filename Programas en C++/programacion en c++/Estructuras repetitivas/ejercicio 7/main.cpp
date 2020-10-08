#include <iostream>

using namespace std;

int main (){
    int num,suma=0;
    cout<<"Ingresar un valor: "; cin>>num;
    for (int i=0; i<=num; i++){
        suma+=i;
    }
    cout<<"la suma es: "<<suma<<endl;

return 0;
}
