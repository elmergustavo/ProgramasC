#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct alumno{
    char nombre[35];
    int edad;
    float promedio;
}estudiante[3];

int main (){
    int mayor=0, pos;
    for (int i=0; i<3; i++){
        cout<<"Nombre: ";
        cin.getline(estudiante[i].nombre,35,'\n');
        cout<<"Edad: ";
        cin>>estudiante[i].edad;
        cout<<"Promedio: ";
        cin>>estudiante[i].promedio;

        if (estudiante[i].promedio>mayor){
            mayor =estudiante[i].promedio;
            pos=i;
        }

    }

    cout<<"Nombre: "<<estudiante[pos].nombre<<endl;
    cout<<"Edad: "<<estudiante[pos].edad<<endl;
    cout<<"Promedio: "<<estudiante[pos].promedio<<endl;




    getch();
    return 0;
}
