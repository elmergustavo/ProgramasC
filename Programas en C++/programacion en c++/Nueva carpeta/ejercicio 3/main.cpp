#include <iostream>

using namespace std;

int main (){
    int vectores[2][2],nuevo[2][2];

    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout<<"Ingrese los valore ["<<i<<"]["<<j<<"]: ";
            cin>>vectores[i][j];
            nuevo[i][j]=vectores[i][j];
        }
    }
    cout<<"\notra matriz\n";
    for ( int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout<<nuevo[i][j];
        }
        cout<<endl;
    }



    return 0;
}
