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
  gotoxy(5,2);
  cout<<"Hola mundo"<<endl;
gotoxy(60,2);
  cout<<"Hola pupilos"<<endl;
    return 0;
}
