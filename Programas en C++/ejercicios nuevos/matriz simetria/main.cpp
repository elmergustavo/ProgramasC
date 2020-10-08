/*7. Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz
es simétrica si es cuadrada y si es igual a su matriz transpuesta.


|8 1 3|        |8 1 3|
|1 7 4|  -->   |1 7 4|
|3 4 9|        |3 4 9|

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int numero[100][100], filas, columnas;
    char band='F';


    cout<<"Digite el numeros de filas:  "; cin>>filas;
    cout<<"Digite el numeros de columnas:  "; cin>>columnas;

    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>numero[i][j];
        }
    }

    if (filas==columnas){
        for (int i=0; i<filas; i++){
            for (int j=0; j<columnas; j++){
                if (numero[i][j]==numero[j][i]){
                band='V';
                }
            }
        }
    }

    if (band='V'){
        cout<<"\nLA MATRIZ SI ES SIMETRIA\n";
    }
    else{
        cout<<"LA MATRIZ NO ES SIMETRIA"<<endl;
    }

    getch();
    return 0;
}
