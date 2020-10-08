#include <iostream>
#include <conio.h>
 #include<stdlib.h>
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
    string nombre[10], result[10];
    int nota1[10];
    int nota2[10];
    int nota3[10];
    int nota4[10];
    int suma[10];
    float promedio[10];

    gotoxy(0,0);
    cout<<"ingresar nombre"<<endl;
    gotoxy(17,0);
    cout<<"UI"<<endl;
    gotoxy(21,0);
    cout<<"UII"<<endl;
    gotoxy(26,0);
    cout<<"UIII"<<endl;
    gotoxy(32,0);
    cout<<"UIV"<<endl;
    gotoxy(37,0);
    cout<<"suma"<<endl;
    gotoxy(43,0);
    cout<<"promedio"<<endl;
    gotoxy(53,0);
    cout<<"Resultado"<<endl;


    for(int i=0; i<10; i++)
    {
        gotoxy(0,1+ i);
        cin>>nombre[i];
        gotoxy(17,1+i);
        cin>>nota1[i];
        gotoxy(21,1+i);
        cin>>nota2[i];
        gotoxy(26,1+i);
        cin>>nota3[i];
        gotoxy(32,1+ i);
        cin>>nota4[i];
        suma[i]= nota1[i]+nota2[i]+nota3[i]+nota4[i];
        promedio[i]= suma[i]/4;
            if (promedio[i]>=60)
                result[i]="Aprobado";
            else
                result[i]="Reprobado";
        gotoxy(37,1+i);
        cout<<suma[i];
        gotoxy(43,1+i);
        cout<<promedio[i];
        gotoxy(53,1+i);
        cout<<result[i];
    }
    getch();
    return 0;
}






