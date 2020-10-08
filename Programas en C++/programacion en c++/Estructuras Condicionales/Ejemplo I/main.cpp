/*Programa que calcula la energia necesaria para la combustion de un compuesto dada la cantidad de atomos x e y de dos diferentes elementos,
de acuardo a la siguiente formula:*/

#include <iostream>
#include <math.h>

using namespace std;
double x,y, res;

int main(){
    cout<<"Dame los valores de x e y: "; cin>>x>>y;

    if (y>=0)
        if (x>0)
        res= 4*x+3*pow(x,2)*y-2*y;
            else
        res= pow (x,2)-4*(y-x)+ pow(y,2);
    else
        res= pow(x,2)+y+y*(x-2);

    cout<<"El Resultado es: " <<res<<endl;


return 0;
}
