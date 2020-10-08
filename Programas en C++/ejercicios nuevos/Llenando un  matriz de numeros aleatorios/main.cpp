/* Hacer una matriz preguntando al usuario numeros de filas y columnas, llenarla de numeros aleatorios copiar el conteniado a otra matriz
y por ultimo motrarlo en pantalla*/

#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main (){
    int matriz1[100][100], filas, columnas;
    int matriz2[100][100], dato=0;

    cout<<"Digite el numero de filas:  "; cin>>filas;
    cout<<"Digite el numero de columnas:  "; cin>>columnas;

    srand(time(NULL));

    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; i++){
            dato= 1 + rand()%(100);
            matriz1[i][j]=dato;
        }
    }

    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            matriz2[i][j]=matriz1[i][j];
        }
    }

    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            cout<<matriz2[i][j];
        }
        cout<<"\n";
    }
    system("pause");
    return 0;
}
