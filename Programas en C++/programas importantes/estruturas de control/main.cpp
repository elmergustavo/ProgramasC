//programa que pide 10 numeros y calcula y muestra la suma de todos los que furon pares

#include <iostream>

using namespace std;

int main (){
    int suma=0, cont=10, num;

    while (cont>0){
        cout<<"dame el numero"<<endl;
        cin>>num;
        if (num% 2==0)
            suma += num;
        cont--;
    }
    cout<<"la suma de los numeros pares proporcionados es"<<suma<<endl;

return 0;
}
