#include <iostream>
#include <windows.h>

using namespace std;

int main (){
    int num;
    cout<<"Ingrese la altura de la piramide: "; cin>>num;

    for(int i=num; i>=1; i--){
        for (int k=i; k<num; k++)
            cout<<" ";
        for (int j=1; j<=i; j++)
            cout<<"*";
        cout<<endl;
    }



return 0;
}
