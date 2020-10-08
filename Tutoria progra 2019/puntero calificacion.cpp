#include <iostream>
#include <conio.h>
#include <stdlib.h> 

using namespace std;

void pedirDatos();
void MostrarDatos();

int num, *calif;

int main(){
	pedirDatos();
	MostrarDatos();
	
	delete[] calif;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Cuantas notas desea Ingresar: ";
	cin>>num;
	
	calif = new int[num];
	for(int i=0; i<num; i++){
		cout<<"Ingresar nota: ";
		cin>>calif[i];
	}
}

void MostrarDatos(){
	cout<<"\nMostrando Notas del Usuario"<<endl;
	for(int i=0; i<num; i++){
		cout<<calif[i]<<endl;
	}
	
}
