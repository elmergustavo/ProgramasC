#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{

    int vector [8][5];
    int count = 0;

    for(int i = 0; i<8; i ++)
    {
        for(int j = 0; j < 5; j++)
        {
            //cout <<"Ingrese el numero"<< endl;
           // cin >> vector [i][j];
           vector[i][j]= rand()%100 + 1;

        }
    }

    for(int v = 0; v < 8; v++)
    {
        for (int b = 0; b < 5; b++)
        {

            if( (v + b)  % 2 ==0)
            {
                cout <<vector [v][b];

            }
              cout <<"-";
        }

                cout<<endl;
    }
    getch ();
    return 0;
}
