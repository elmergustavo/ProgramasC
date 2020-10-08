#include <iostream>

using namespace std;

int main (){
    float nota1, nota2, nota3;
    double promedio;

    cout<<"ingrese primera nota: "; cin>>nota1;
    cout<<"ingrese segunda nota: "; cin>>nota2;
    cout<<"ingrese tercera nota: "; cin>>nota3;

    promedio= (nota1+nota2+nota3) / 3;

    cout<<"el promedio final es: "<<promedio<<endl;
    cout<<"\n";

    if (promedio>60){
        cout<<"APROVADO";
    }
    else
        cout<<"REPROBADO";

return 0;
}
