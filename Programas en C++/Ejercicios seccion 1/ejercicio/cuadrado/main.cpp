#include <iostream>
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
    for (int x=1; x<=74; x++)
    {

        gotoxy(x,1);
        Sleep(1000);
        cout<<"*"<<endl;
        gotoxy (x,20);
        cout<<"*"<<endl;
    }
    for(int y=1; y<=20; y++)
    {

        gotoxy(1,y);
        Sleep(1000);
        cout<<"*"<<endl;
        gotoxy(74,y);
        cout<<"*"<<endl;

    }



    return 0;
}
