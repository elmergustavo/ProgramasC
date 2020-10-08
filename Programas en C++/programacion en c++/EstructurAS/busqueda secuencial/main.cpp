#include <iostream>
#include <string.h>

using namespace std;



int main (){
    struct escuela{
        char nombre[30];


    }alumnos[20];
    int n;

    cout<<"Ingrese la cantidad de alumnos que desee: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Ingresar nombre commpleto del alumno: ";
        cin.getline(alumnos[i].nombre,30,'\n');
    }




return 0;
}
