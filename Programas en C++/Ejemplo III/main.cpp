#include <iostream>
#include <windows.h>
using namespace std;

int main (){
    int size;

    cout<<"ingrese el tamaño: ";
    cin>>size;

    for (int i=size; i>=1; i--){
        for (int k=i; k<size; k++)
            cout<<" ";
        for (int j=1; j<=i; j++)
            cout<<"*";
            cout<<endl;
            Sleep(150);
    }




return 0;
}
