#include <iostream>
#include <conio.h>
#include<stdlib.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
void gotoxy(int x,int y)
{
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
}


void plantilla ()
{
    gotoxy(0,0);
    cout<<"ingresar nombre"<<endl;

    gotoxy(18,0);
    cout<<"IU"<<endl;

    gotoxy(23,0);
    cout<<"IIU"<<endl;

    gotoxy(29,0);
    cout<<"IIIU"<<endl;

    gotoxy(35,0);
    cout<<"IVU"<<endl;

    gotoxy(41,0);
    cout<<"SUMA";

    gotoxy(48,0);
    cout<<"PROMEDIO";

    gotoxy(59,0);
    cout<<"RESULTADO";

}
int main()
{
    plantilla();
    string nombre[10];
    int nota1[10];
    int nota2[10];
    int nota3[10];
    int nota4[10];
    int suma[10];
    float promedio[10];
    double result[10];


    for (int i=0; i<9; i++)
    {
        gotoxy(0,1);
        cin>>nombre[i];

        gotoxy(18,1);
        cin>>nota1[i];

        cout<<"IIU"<<endl;
        cin>>nota2[i];

        cout<<"IIIU"<<endl;
        cin>>nota3[i];

        cout<<"IVU"<<endl;
        cin>>nota4[i];

        suma[i]=nota1[i] + nota2[i] + nota3[i]+ nota4[i];
        cout<<"la suma es..."<<suma[i]<<endl;

        promedio[i]=promedio[i] + suma[i];
        result[i]= promedio[i]/4;

        //cout.precision(4);
        cout<<"el promedio es.."<<result[i]<<endl;

        if (result[i]>=60)
            cout<<"Aprobado"<<endl;
        else
            cout<<"Reprobado"<<endl;

    getch();
    system("cls");
    }


    getch();
    return 0;
}






