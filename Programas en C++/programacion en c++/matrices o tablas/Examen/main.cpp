#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

using namespace std;

void gotoxy(int x,int y)
{
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
}
void ingresoalumno1(){
    int carne[20];
    char nombre[30];

    gotoxy(1,1);
    cout<<"CARNE";
    gotoxy(12,1);
    cout<<"NOMBRE COMPLETO"<<endl;

    for (int i=0; i<20; i++){
            for (int x=1; x<9; x++){
                for (int y=2; y<22; y++){
            gotoxy(x,y);
            cout<<""; cin>>carne[i];
            gotoxy(x+11,y);
            cout<<"";
            cin.getline(nombre,30,'\n');
        }
    }
    }





}




void ingresoalumno(){
    int n;
    struct ingreso{
    int carnet;
    char nombre[20];
    }alumnos[20];


    cout<<"cuantos alumnos desea ingresar: ";
    cin>>n;
    system("cls");

    gotoxy(1,1);
    cout<<"CARNE";
    gotoxy(12,1);
    cout<<"NOMBRE COMPLETO"<<endl;

    for (int i=0; i<n; i++){
            fflush(stdin);
            cout<<"Ingresar carnet: ";
            cin>>alumnos[i].carnet;
            cout<<"Ingresar nombre completo: ";
            cin.getline(alumnos[i].nombre,20,'\n');
        }






    }














int main()
{
   int opcion;


   cout<<"\tEscuela la Semilla del conocimiento"<<endl;
   cout<<"[1] Ingreso de alumnos"<<endl;
   cout<<"[2] Ingreso de notas (I,II,III,IV)"<<endl;
   cout<<"[3] Buscar Notas de Alumno"<<endl;
   cout<<"[4] Modificar notas de alumnos"<<endl;
   cout<<"[5] Eliminar alumno"<<endl;
   cout<<"[6] Salir"<<endl;
   cout<<"OPCION: "; cin>>opcion;

   system("cls");

   switch(opcion){
   case 1:
       int n;
    struct ingreso{
    int carnet;
    char nombre[20];
    }alumnos[20];


    cout<<"cuantos alumnos desea ingresar: ";
    cin>>n;
    system("cls");

    gotoxy(1,1);
    cout<<"CARNE";
    gotoxy(12,1);
    cout<<"NOMBRE COMPLETO"<<endl;

    for (int i=0; i<n; i++){
            fflush(stdin);
            cout<<"Ingresar carnet: ";
            cin>>alumnos[i].carnet;
            cout<<"Ingresar nombre completo: ";
            cin.getline(alumnos[i].nombre,20,'\n');
        }

   }




    getch();
    return 0;
}
