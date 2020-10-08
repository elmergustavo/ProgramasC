/*2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que
muestre la diagonal principal de la matriz.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int numeros[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }


    cout<<"\n Diagonal principal de la matriz\n";

    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if (i==j){
                cout<<numeros[i][j];
                 cout<<"\n";
            }
        }
    }










system("pause");
return 0;
}
