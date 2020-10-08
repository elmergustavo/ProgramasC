#include <iostream>
#include <windows.h>

using namespace std;

int main (){
    int num;
    cout<<"INgrese un valor de la piramide: "; cin>>num;

    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
                  Sleep(100);
            cout<<"*";
        }

        cout<<endl;
    }


return 0;
}
