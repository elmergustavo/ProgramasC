#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct inf_empleado{
    char direccion[40];
    char ciudad[30];
    char provincia[30];
};

struct plantilla{
    char nombre[50];
    struct inf_empleado dir_empleado;
    float salario;
    char nacimiento[30];
}empleado[50];

int main (){
    int num;

    cout<<"Cuantos empleados desea ingresar: ";
    cin>>num;

    for (int i=0; i<num; i++){
        fflush(stdin);
        cout<<"\nNombre: ";
        cin.getline(empleado[i].nombre,50,'\n');
        cout<<"Direccion: ";
        cin.getline(empleado[i].dir_empleado.direccion,40,'\n');
        cout<<"Ciudad: ";
        cin.getline(empleado[i].dir_empleado.ciudad,30,'\n');
        cout<<"Provincia: ";
        cin.getline(empleado[i].dir_empleado.provincia,30,'\n');
        cout<<"Salario: ";
        cin>>empleado[i].salario;
        cout<<"Nacimiento: ";
        cin.getline(empleado[i].nacimiento,30,'\n');
        cout<<endl;
    }



    getch();
    return 0;
}
