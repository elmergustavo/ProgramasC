#include <iostream>

using namespace std;

int main (){
    int matriz[3][3];

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<"ingrese un valor ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    cout<<"\n Matriz Original\n"<<endl;
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nDiagonal principal\n"<<endl;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++)
        if(i==j){
            cout<<matriz[i][j];
        }
        cout<<endl;
    }



    return 0;
}
