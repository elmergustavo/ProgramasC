#include <iostream>

using namespace std;

int main()
{
    float practica, teorica, participacion;
    double prac,teo,part, resultado;

    cout<<"Ingrese el valor de practica: "; cin>>practica;
    cout<<"ingrese el valor de teorica: "; cin>>teorica;
    cout<<"Ingrese el valor de participacion: "; cin>>participacion;

    prac= (practica)*(0.30);
    teo= (teorica)*(0.60);
    part= (participacion)*(0.10);

    resultado=prac+teo+part;

    cout<<"el resultado es: "<<resultado;

    return 0;
}
