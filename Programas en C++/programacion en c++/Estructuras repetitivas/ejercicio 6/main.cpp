#include <iostream>

using namespace std;

int main (){
    int x,elevacion=1,y;
    cout<<"Ingrese el valor de x: "; cin>>x;
    cout<<"Ingrese el valor de y: "; cin>>y;

    for (int i=1; i<=y; i++){
        elevacion*=x;
    }
    cout<<"el resultado es: "<<elevacion<<endl;


return 0;
}
