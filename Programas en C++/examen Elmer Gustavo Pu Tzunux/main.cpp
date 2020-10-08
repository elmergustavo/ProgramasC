#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int main (){
    int matriz1[5][5], dato=0;
  //  int matriz2[5][5],

    srand(time(NULL));
    cout<<"MATRIZ CON NUMEROs ALEATORIO"<<endl;
     cout<<"\n";
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
                 dato=rand()%150-50;
                int cont=0;
                for (int i=0; i<5; i++){
                    for (int j=0; j<5; j++){
                        if (matriz1[i][j]==dato)
                    cont=cont + 1;
                    }
                }
                if (cont==0){
                    matriz1[i][j]=dato;
                }
        }
    }

    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            cout<<matriz1[i][j]<<"  ";
        }
                cout<<"\n";
                cout<<"\n";
    }

    int vectorpares[10];
    cout<<"VECTOR CON NUMEROS PARES"<<endl;
     cout<<"\n";

      for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            //matriz1[i][j];
                if( matriz1[i][j]%2==0){
                    for (int x=0; x<10; x++){
                    vectorpares[x]=matriz1[i][j];
                }
        }

      }
      }


            for (int x=0; x<10; x++){
            cout<<vectorpares[x]<<" ";
             cout<<"\n";
            }


        int vectornegativos[10][10];
    cout<<"NUMEROS NEGATIVOS"<<endl;
for (int x=0; x<10; x++){
        for (int y=0; y<=1; y++){
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            //matriz1[i][j];
                if( matriz1[i][j]<0){
                    for (int x=0; x<10; x++){
                    vectornegativos[x][y]=matriz1 [i][j];

                }
        }

      }
      }
}
}

for (int x=0; x<10; x++){
    for (int y=0; y<=1; y++){
        cout<<vectornegativos[x] [y]<<" ";
    }
    cout<<"\n";
}







    system("pause");
    return 0;
}
