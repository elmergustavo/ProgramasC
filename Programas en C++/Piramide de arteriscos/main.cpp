9//programa que dado un numero entero size, contruye una piramide de asteriscos de altura size;

#include <iostream>

using namespace std;

int main (){
    int size;

    cout<<"dame el tama�o: ";
    cin>>size;
    for (int i=1; i<=size; i++ ){
        for (int j=1; j<=i; j++)
            cout<< "*";
            cout<<endl;
    }
    return 0;
    }
