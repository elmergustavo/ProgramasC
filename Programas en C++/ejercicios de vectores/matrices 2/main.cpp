#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int vector [5][5];
    int c = 0,  r = 4;

    for (int fila = 0; fila < 5; fila ++)
    {
        for (int columna = 0; columna < 5; columna ++)
        {
            vector [fila][columna] = rand ()%100 + 1;
        }
    }

    for (int f = 0; f < 5; f++)
    {

            cout <<vector [f][c];
            cout<< endl;
            c = c + 1;

    }

     for (int f2 = 0; f2 < 5; f2++)
    {

            cout <<vector [f2][r];
            r = r - 1;

    }





    return 0;
}
