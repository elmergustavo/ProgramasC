#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
void PedirNombre();
void ContadorVocal(char *);

char nombreUsuario[30];

int main(){
	int opc=0;
	
	do{
		cout<<"1. Ingresar Nombre"<<endl;
		cout<<"2. Salir"<<endl;
		cout<<"Ingrese la opcion: "; cin>>opc;
		
		switch(opc){
			case 1:
				PedirNombre();
				ContadorVocal(nombreUsuario);
				break;
			case 2:
				break;
		}
		
	}while(opc != 2);
	
	
	getch();
	return 0;
}

void PedirNombre(){
	fflush(stdin);
	cout<<"Ingrese su nombre: ";
	cin.getline(nombreUsuario,30,'\n');
	
	strupr(nombreUsuario);
	
}

void ContadorVocal(char *nombre){
	int contador=0;
	
	while(*nombre){
		switch(*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				contador++;
		}
		nombre++;
	}
	
	cout << "Total de vocales: "<<contador<<endl;
	
}
