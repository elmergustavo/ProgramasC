#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct informacion{ //determinamos la estructura
	string nombre;
	int edad;
	string genero;
	double sueldo;
}empleado[50],temp; //arreglos con 50 posiciones


int main(){
	int opc=0,cont=0;
	char a;
	string f="femenino";
	
	do{
		cout<<"\tEmpresa Soluciones GT\n"<<endl;
		cout<<"1. Contratacion"<<endl;
		cout<<"2. Listado de Empleados de genero femenino"<<endl;
		cout<<"3. Listado de Empleados con sueldo mayor a Q5,000.00"<<endl;
		cout<<"4. Listado de Empleados con edad menor o igual a 30 anios"<<endl;
		cout<<"5. Listado de Empleados ordenados por sueldo en foma descendente"<<endl;
		cout<<"6. Salir"<<endl;
		cout<<"Eliga la Opcion: ";
		cin>>opc;
		
		switch(opc){
			case 1:
				
				for(int i=0; i<50; i++){
					cont++;
					cout<<"\nIngresar Nombre: ";
					cin>>empleado[i].nombre;
					cout<<"Ingresar edad: ";
					cin>>empleado[i].edad;
					cout<<"Ingresar su Genero: ";
					cin>>empleado[i].genero;
					cout<<"Ingresar Sueldo: ";
					cin>>empleado[i].sueldo;
					cout<<"Desea Ingresar otro empleado [s/n]?: ";
					cin>>a;
					
					if(a=='s'){ //cuando entra en esta condicion vuelve a pedir datos porque no hace nada 
						
					}else{
						break;
					}
					
				}
				
				
				break;
			case 2:
				cout<<"\n\tEmpleados de Genero femenino"<<endl;
				if(cont > 0){
					for(int i=0; i<50; i++){
						if(empleado[i].genero == f){
							cout<<"\nNombre: "<<empleado[i].nombre<<endl;
							cout<<"Edad: "<<empleado[i].edad<<endl;
							cout<<"Genero: "<<empleado[i].genero<<endl;
							cout<<"Sueldo: "<<empleado[i].sueldo<<endl;
						}
					}
					system("pause");
				
				}else{
					cout<<"\nNo existen Empleados en la Lista"<<endl;
					system("pause");
				}
				break;
			case 3:
				cout<<"\n\tListado de Empleados con sueldo mayor a Q5,000.00"<<endl;
				if(cont > 0){
					for(int i=0; i<50; i++){
						if(empleado[i].sueldo > 5000){
							cout<<"\nNombre: "<<empleado[i].nombre<<endl;
							cout<<"Edad: "<<empleado[i].edad<<endl;
							cout<<"Genero: "<<empleado[i].genero<<endl;
							cout<<"Sueldo: "<<empleado[i].sueldo<<endl;
						}
					}
					system("pause");
				
				}else{
					cout<<"\nNo existen Empleados en la Lista"<<endl;
					system("pause");
				}
				break;
			case 4:
				cout<<"\n\tListado de Empleados con edad menor o igual a 30 anios"<<endl;
				if(cont > 0){
					for(int i=0; i<50; i++){
						if((empleado[i].edad <=30) && (empleado[i].edad >0)){
							cout<<"\nNombre: "<<empleado[i].nombre<<endl;
							cout<<"Edad: "<<empleado[i].edad<<endl;
							cout<<"Genero: "<<empleado[i].genero<<endl;
							cout<<"Sueldo: "<<empleado[i].sueldo<<endl;
						}
					}
					system("pause");
				
				}else{
					cout<<"\nNo existen Empleados en la Lista"<<endl;
					system("pause");
				}
				break;
			case 5:
				cout<<"\n\tListado de Empleados ordenados por sueldo en foma descendente"<<endl;
				//metodo de ordenamiento Burbuja :v
				for(int i=0; i<50; i++){
					for(int j=0; j<50-1; j++){
						if(empleado[j].sueldo < empleado[j+1].sueldo){
							temp = empleado[j];
							empleado[j] = empleado[j+1];
							empleado[j+1] = temp;
						}
					}
				}
				
				for(int i=0; i<50; i++){
					if(empleado[i].edad > 0){
						cout<<"\nNombre: "<<empleado[i].nombre<<endl;
						cout<<"Sueldo: "<<empleado[i].sueldo<<endl;
					}
				}
				
				system("pause");
				break;
			case 6:
				break;
			default:
				cout<<"\nOpcion Incorrecta"<<endl;
				system("pause"); // Pausar el programa
		}
		system("cls");
	}while(opc !=6);

	getch();
	return 0;
}
