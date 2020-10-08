#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int num, contador, x=1, primo, i;

    cout<<"ingresar el valor: ";
    cin>>num;

    cout<<"1 ";
    while (x<=num){
    	i=1;
    	contador=0;
        while (i<=num){

            if (x%i==0){
                contador=contador+1;
            }
            primo =x;
			i++;
        }
        if (contador==2){
            cout<<primo<<" ";
        }
    x++;
}
	getch ();
    return 0;
}

