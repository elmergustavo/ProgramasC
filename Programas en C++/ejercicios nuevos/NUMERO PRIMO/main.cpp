#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num1,  factores = 0;
    cout<<"ingresar numero"<<endl;
    cin>>num1;

    for (int i=1; i<=num1; i++)
    {
    	for (int j=1; j<=num1; j++){
    		 if(i % j == 0)	
             factores = factores + 1;
       		
		}
		if (factores == 2)
			cout<<i<<endl;
      
    }


    getch();
    return 0;
}
