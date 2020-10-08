#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;


int main (){
    struct corredor{
        char nombre[20];
        int edad;
        char sexo [10];
        char club [20];


    }corredor;
    char categoria[20];

    cout<<"Ingresar Nombre: ";
    cin.getline(corredor.nombre,20,'\n');
    cout<<"Ingrese su edad: ";
    cin>>corredor.edad;
	fflush(stdin);
    cout<<"Ingresar sexo: ";
    cin.getline(corredor.sexo,10,'\n');
    cout<<"Ingresar club: ";
    cin.getline(corredor.club,20,'\n');

	if(corredor.edad<=18){
        strcpy(categoria,"Juvenil");
    }
		else if (corredor.edad<=48){
            strcpy(categoria,"Señor");
        }
        else
            strcpy(categoria,"veterano");


    cout<<"Nombre: "<<corredor.nombre<<endl;
    cout<<"Edad: "<<corredor.edad<<endl;
    cout<<"Sexo: "<<corredor.sexo<<endl;
    cout<<"Categoria: "<<categoria<<endl;
    cout<<"Club: "<<corredor.club<<endl;




	getch();
    return 0;
}

