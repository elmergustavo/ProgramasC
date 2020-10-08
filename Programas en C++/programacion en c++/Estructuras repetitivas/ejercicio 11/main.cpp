#include <iostream>
#include <math.h>

using namespace std;

int main (){
    int num, elevacion=0, suma=0;
    cout<<"INgrese un valor: "; cin>>num;

    for (int i=1; i<=num; i++){
        elevacion= pow(2,i);
        suma+=elevacion;
    }
    cout<<"El resultado es: "<<suma<<endl;


return 0;
}
