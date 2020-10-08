#include <iostream>

using namespace std;

int main (){
    int num, i=1,contador=0;

    cout<<"Ingresar un numero: ";
    cin>>num;

    while (i<=num){
        if (num%i==0){
            contador+=1;
        }
        i++;

    }

    if (num==2){
        cout<<"el numero es primo";
    }
    else
        cout<<"el numero no es primo";

return 0;
