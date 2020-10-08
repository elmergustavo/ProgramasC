#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct datos_personales{
	int posicion;
	char nombre[20];
	char nacimiento[40];
	char telefono[10];
	char direccion[20];
	double DPI;
	double deposito;
}monetaria[50], ahorro[50];

int main (){
	int opcion=0, elija, contador=0, contador1=0, incremento=0,  i=1, opcion1=0, opcion2=0, busqueda=0, opcion3=0, j=1, deposito=0, deposito1=0;
	int retiro=0, retiro1=0;
	do{
		cout<<"\tBienvenido Banco URL"<<endl<<endl;
		cout<<"Menu principal"<<endl<<endl;
		cout<<"[1]. Registro de nueva cuenta"<<endl;
		cout<<"[2]. Depositos"<<endl;
		cout<<"[3]. Retiros"<<endl;
		cout<<"[4]. Estado de cuenta"<<endl;
		cout<<"[5]. Historial"<<endl;
		cout<<"[6]. Salir"<<endl;
		cout<<"\nSeleccione una opcion: ";
		cin>>opcion;
		system("cls");
		switch(opcion){
		case 1: 
			cout<<"\tRegistro de nueva cuenta"<<endl<<endl;
			cout<<"[1] Cuenta Monetaria: "<<endl;
			cout<<"[2] Cuenta De Ahorro: "<<endl<<endl;
			cout<<"Que opcion desea: ";
			cin>>opcion1;
			system("cls");
				if (opcion1==1){ incremento++;
						do {
						cout<<"\tCuenta Monetaria"<<endl<<endl;
						contador=contador +1;
						cout<<"\nCuenta No. "<<i;
						monetaria[i].posicion=i;
						fflush(stdin);
						cout<<"\nIngrese su nombre: ";
						cin.getline(monetaria[i].nombre,20,'\n');
						fflush(stdin);
						cout<<"\nIngrese su numero de DPI: ";
						cin>>monetaria[i].DPI;
						fflush(stdin);
						cout<<"\nIngrese fecha de nacimiento: ";
						cin.getline(monetaria[i].nacimiento,20,'\n');
						fflush(stdin);
						cout<<"\nIngrese numero de telefono: ";
						cin.getline(monetaria[i].telefono,10,'\n');
						cout<<"\nIngrese su Direccion: ";
						cin.getline(monetaria[i].direccion,20,'\n');
						cout<<endl;
						cout<<"\nIngrese el deposito Inicial de la cuenta: ";
						cin>>monetaria[i].deposito;
						cout<<"\nDesea ingresar una nueva Cuenta: ";
						cout<<"\n[1] SI"<<endl;
						cout<<"[2] NO"<<endl;
						cout<<"\nEliga la opcion: ";
						cin>>opcion2;
						system("cls");
						if (opcion2 ==1){
							i= i+1;
						}
						else
							if (opcion2==2){
							opcion1=3;
							i=i+1; }
						}while (opcion1 < 2);
						}
						
				if (opcion1==2){ 
					
					do{ incremento++;
					contador1++;
					opcion2=0;
					cout<<"\tCuenta de Ahorro"<<endl<<endl;
					cout<<"\nCuenta No. "<<j;
					ahorro[j].posicion=j;
					fflush(stdin);
					cout<<"\nIngrese su nombre: ";
					cin.getline(ahorro[j].nombre,20,'\n');
					cout<<"\nIngrese su numero de DPI: ";
					cin>>ahorro[j].DPI;
					fflush(stdin);
					cout<<"\nIngrese fecha de nacimiento: ";
					cin.getline(ahorro[j].nacimiento,20,'\n');
					cout<<"\nIngrese numero de telefono: ";
					fflush(stdin);
					cin.getline(ahorro[j].telefono,10,'\n');
					cout<<"\nIngrese su Direccion: ";
					cin.getline(ahorro[j].direccion,20,'\n');
					cout<<"\nIngrese Deposito inicial de la Cuenta: ";
					cin>>ahorro[j].deposito;
					cout<<"\nDesea ingresar una nueva Cuenta: ";
					cout<<"\n[1] SI"<<endl;
					cout<<"[2] NO"<<endl;
					cout<<"\nEliga la opcion: ";
					cin>>opcion2;
					system("cls");
					j= j+1;
					if (opcion2==2){
						j=j+1;
						opcion1=3;
							 }
					}while (opcion2 < 2);	
				
					}
			break;
		 case 2:
		 	cout<<"\tDepositos"<<endl<<endl;
			cout<<"[1] Cuenta Monetaria: "<<endl;
			cout<<"[2] Cuenta De Ahorro: "<<endl<<endl;
			cout<<"Que opcion desea: ";
			cin>>opcion3;
			if (incremento>0){
			system("cls");
				switch (opcion3){
					case 1:
						cout<<"\nPersonas registradas para realizar el deposito Monetaria"<<endl<<endl;	
						for (int i=1; i<=contador; i++){
							cout<<"["<<i<<"] "<<monetaria[i].nombre<<endl;
						}
						cout<<"\n\tSeleccione la opcion: ";
						cin>>busqueda;
						j=1;
							while (j<=contador){
								if (busqueda==monetaria[j].posicion){
									cout<<"\nCuanto dinero desea depositar: ";
									cin>>deposito;
									monetaria[j].deposito+=deposito;
									cout<<"\nEl deposito a sido exitoso!"<<endl<<endl; 
								}
								j++;
								
							}
						break;
					case 2:
						cout<<"\nPersonas registradas para realizar el deposito de ahorro"<<endl<<endl;	
						for (int i=1; i<=contador1; i++){
							cout<<"["<<i<<"] "<<ahorro[i].nombre<<endl;
						}
						cout<<"\n\tSeleccione la opcion: ";
						cin>>busqueda;
						j=1;
							while (j<=contador1){
								if (busqueda==ahorro[j].posicion){
									cout<<"\nCuanto dinero desea depositar: ";
									cin>>deposito1;
									ahorro[j].deposito+=deposito1;
								}
								j++;
								
							}
							cout<<"\nEl deposito a sido exitoso!"<<endl<<endl; 
						}
				}
					else
						cout<<"\nNo hay cuentas registradas"<<endl<<endl; system("pause");	system("cls");
						
			break;
		case 3:
			cout<<"\tRetiros"<<endl<<endl;
			cout<<"[1] Cuenta Monetaria: "<<endl;
			cout<<"[2] Cuenta De Ahorro: "<<endl<<endl;
			cout<<"Que opcion desea: ";
			cin>>opcion3;
			if (incremento>0){
			system("cls");
				switch (opcion3){
					case 1:
						cout<<"\nPersonas registradas para realizar Retiros Monetarios"<<endl<<endl;	
						for (int i=1; i<=contador; i++){
							cout<<"["<<i<<"] "<<monetaria[i].nombre<<endl;
						}
						cout<<"\n\tSeleccione la opcion: ";
						cin>>busqueda;
						j=1;
							while (j<=contador){
								if (busqueda==monetaria[j].posicion){
									cout<<"\nCuanto dinero desea Retirar: ";
									cin>>retiro;
									monetaria[j].deposito-=retiro;
									if (monetaria[j].deposito<=0){
										cout<<"\nNo se puede realizar el retiro no hay suficiente dinero en su cuenta"<<endl;
										cout<<"\nTiene una penalizacion de Q125"<<endl;
									}
									else
									cout<<"\nRetiro exitoso!"<<endl; 
								}
								j++;
							}
						break;
					case 2:
						cout<<"\nPersonas registradas para realizar Retiros de ahorros"<<endl<<endl;	
						for (int i=1; i<=contador1; i++){
							cout<<"["<<i<<"] "<<ahorro[i].nombre<<endl;
						}
						cout<<"\n\tSeleccione la opcion: ";
						cin>>busqueda;
						j=1;
							while (j<=contador1){
								if (busqueda==ahorro[j].posicion){
									cout<<"\nCuanto dinero desea Retirar: ";
									cin>>retiro1;
									ahorro[j].deposito-=retiro1;
									if (ahorro[j].deposito<0){
										cout<<"\nNo se puede realizar el retiro no hay suficiente dinero en su cuenta"<<endl;
									}
									else
									cout<<"\nEl Retiro a sido exitoso!"<<endl<<endl;
								}
								j++;
								
							}
			
						}
				}
					else
						cout<<"\nNo hay cuentas registradas"<<endl<<endl; system("pause");	system("cls");
			break;	
		case 4:
			cout<<"\tEstado de Cuenta"<<endl<<endl;
			cout<<"[1] Cuenta Monetaria: "<<endl;
			cout<<"[2] Cuenta De Ahorro: "<<endl<<endl;
			cout<<"Que opcion desea: ";
			cin>>opcion3;
			if (incremento>0){
			system("cls");
				switch (opcion3){
					case 1:
						cout<<"\nEstados de Cuentas Monetarios"<<endl<<endl;	
						for (int i=1; i<=contador; i++){
							cout<<"["<<i<<"] "<<monetaria[i].nombre<<endl;
						}
						cout<<"\n\tSeleccione la opcion: ";
						cin>>busqueda;
						j=1;
							while (j<=contador){
								if (busqueda==monetaria[j].posicion){
									cout<<"\nSu estado de Cuenta es de: "<<monetaria[j].deposito<<endl;
								}
								j++;
							}
						break;
					case 2:
						cout<<"\nEstado de ahorros"<<endl<<endl;	
						for (int i=1; i<=contador1; i++){
							cout<<"["<<i<<"] "<<ahorro[i].nombre<<endl;
						}
						cout<<"\n\tSeleccione la opcion: ";
						cin>>busqueda;
						j=1;
							while (j<=contador1){
								if (busqueda==ahorro[j].posicion){
									cout<<"\nSu estado de Cuenta es de: "<<ahorro[j].deposito<<endl;
								}
								j++;
							}
			
						}
				}
					else
						cout<<"\nNo hay cuentas registradas"<<endl<<endl; system("pause");	system("cls");
			break;	
		case 5:
			if (incremento>0){
			cout<<"\tHistorial de Cuentas monetarias"<<endl<<endl;
			j=1;
			while (j<=contador){
				cout<<"Numero de Cuenta: "<<j<<endl;
				cout<<"Nombre: "<<monetaria[j].nombre<<endl;
				cout<<"Numero de DPI: "<<monetaria[j].DPI<<endl;
				cout<<"Fecha de Nacimiento: "<<monetaria[j].nacimiento<<endl;
				cout<<"Numero de telefono: "<<monetaria[j].telefono<<endl;
				cout<<"Direccion: "<<monetaria[j].direccion<<endl;
				cout<<"Dinero actual: "<<monetaria[j].deposito<<endl<<endl;
				j++;
			}
			cout<<"\tHistorial de Cuentas de Ahorro"<<endl<<endl;
			i=1;
			while (i<=contador1){
				cout<<"Numero de Cuenta: "<<i<<endl;
				cout<<"Nombre: "<<ahorro[i].nombre<<endl;
				cout<<"Numero de DPI: "<<ahorro[i].DPI<<endl;
				cout<<"Fecha de Nacimiento: "<<ahorro[i].nacimiento<<endl;
				cout<<"Numero de telefono: "<<ahorro[i].telefono<<endl;
				cout<<"Direccion: "<<ahorro[i].direccion<<endl;
				cout<<"Dinero actual: "<<ahorro[i].deposito<<endl<<endl;
				i++;
			}
		
			}
			else
				cout<<"\nNo hay cuentas registradas"<<endl<<endl; system("pause");	system("cls");
				break;
		case 6:
			cout<<"Esta seguro de salir del programa"<<endl<<endl;
			cout<<"[1] SI"<<endl;
			cout<<"[2] NO"<<endl;
			cout<<"\nElija la opcion: ";
			cin>>elija;
					if (elija==1){
						cout<<"\n\tUNIVERSIDAD RAFAEL LANDIVAR"<<endl;
						cout<<"AUTOR: Elmer Gustavo Pú Tzunux"<<endl;
						cout<<"CARNET: 1535017"<<endl;
						cout<<"CURSO: Ingeniería Informatica Y Sistemas"<<endl;
						cout<<"SEMESTRE: Segundo Semestre"<<endl<<endl;
					    system("pause");
					    opcion=7;
						system("cls");	
					}
						else
						opcion=1;
						system("cls");
			break;
		
		}
	}while (opcion != 7);
	return 0;
}
