#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
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
int main()
{

    string nombre[10],resul[10];
    int notaI[10];
    int notaII[10];
    int notaIII[10];
    int notaIV[10];
    int suma[10],prom[10];

    gotoxy(2,2);
    cout<<"Nombre Alumno"<<endl;
    gotoxy(16,2);
    cout<<"IU"<<endl;
    gotoxy(21,2);
    cout<<"IIU"<<endl;
     gotoxy(26,2);
    cout<<"IIIU"<<endl;
    gotoxy(31,2);
    cout<<"IVU"<<endl;
    gotoxy(36,2);
    cout<<"Suma"<<endl;
    gotoxy(42,2);
    cout<<"Promedio"<<endl;
    gotoxy(52,2);
    cout<<"Resultado"<<endl;
    int cont=0;
    while(cont<10)
    {
        gotoxy(2,3+cont);
        cin>>nombre[cont];
        gotoxy(16,3+cont);
        cin>>notaI[cont];
        gotoxy(21,3+cont);
        cin>>notaII[cont];
        gotoxy(26,3+cont);
        cin>>notaIII[cont];
        gotoxy(31,3+cont);
        cin>>notaIV[cont];
        suma[cont]=notaI[cont]+notaII[cont]+notaIII[cont]+notaIV[cont];
        prom[cont]=suma[cont]/4;
        if(prom[cont]>=60)
            resul[cont]="Aprobado";
        else
            resul[cont]="Reprobado";
        gotoxy(36,3+cont);
        cout<<suma[cont];
        gotoxy(42,3+cont);
        cout<<prom[cont];
        gotoxy(52,3+cont);
        cout<<resul[cont];
        //programar
        cont++;
    }

    return 0;
}
