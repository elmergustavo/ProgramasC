#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main ()
{

    for (int i=1;i<=20;i++)
    {
 cout<<i;
 if (i%3==0) cout<<" Es multiplo de 3" <<endl;
 else cout<<" No es multiplo de 3"<<endl;
    }
    getch();
    return 0;
}
