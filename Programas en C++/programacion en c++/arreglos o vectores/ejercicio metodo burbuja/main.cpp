#include <iostream>

using namespace std;


int main (){
    int n,numero[100],tem=0;

    cout<<"Digite el tamños del vector: "; cin>>n;

    for (int i=0; i<n; i++){
        cout<<"Ingrese los valores del vector: ";
        cin>>numero[i];
    }

    for (int x=0; x<n; x++){
        for(int k=0; k<n; k++)
            if (numero[k]>numero[k+1]){
                tem=numero[k];
                numero[k]=numero[k+1];
                numero[k+1]=tem;
            }
    }


    for (int j=0; j<n; j++){
        cout<<numero[j]<<endl;
    }



return 0;
}
