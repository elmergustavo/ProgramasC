#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char frases[100];

    cout<<"Digite una cadena de caracteres"<<endl;
    cin.getline(frases,100,'\n');

    if (strlen(frases)>10){
        cout<<frases<<endl;

    }

    else{
        cout<<"\n La cadena no supera los 10 caracteres"<<endl;
    }



    getch();
    return 0;
}
