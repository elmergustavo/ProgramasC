#include <iostream>

using namespace std;

int main()
{
    struct alumnos{
        int carnet;
        char nombre[20];

    }alumno[3];

    for (int i=0; i<3; i++){
        cout<<"Ingrese carnet: ";
        cin>>alumno[i].carnet;
        cout<<"Ingresar nombre: ";
        cin.getline(alumno[i].nombre,20,'\n');
    }





    return 0;
}
