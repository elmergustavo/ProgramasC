#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero[3][3];

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
            cin>>numero[i][j];
        }
    }
    cout<<"\nMATRIZ ORIGINAL\n";

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<numero[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\nMATRIZ TRANSPUESTA\n";

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<numero[j][i]<<" ";
        }
        cout<<"\n";
    }

    getch();
    return 0;
}
