#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct corredor{
    char nombre[30];
    int edad;
    char sexo[10];
    char club [20];
}c1;

int main (){
    char categoria[20];

    cout<<"Nombre: ";
    cin.getline(c1.nombre,30,'\n');
    cout<<"Edad: ";
    cin>>c1.edad;
    cout<<"Sexo: ";
    cin.getline(c1.sexo,10,'\n');
    cout<<"Club: ";
    cin.getline(c1.club,20,'\n');

    if (c1.edad<=18){
        strcpy(categoria,"Juvenil");
    }
    else if (c1.edad<=40){
        strcpy(categoria,"Senior");
    }
    else
        cout<<"Veterano";

    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Edad: "<<c1.edad<<endl;
    cout<<"Sexo: "<<c1.sexo<<endl;
    cout<<"Club: "<<c1.club<<endl;
    cout<<"Categoria: "<<categoria<<endl;


    getch();
    return 0;
}
