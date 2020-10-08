#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int numeros[10];  aux=0;

    srand(time(NULL));

    for (int pos=0; pos<10; pos++){
        numeros[pos]= 30 + rand()%(70);
    }

    for (int pos=0; pos<10; pos++){
        for (int x=pos; x<10; x++){
            if (numeros[x]>numeros[pos]){
                aux=numeros[pos];
                numeros[pos]=numero[x];
                numeros[x]=aux;
            }

        }
    }
    cout<<numeros[pos];




    return 0;
}
