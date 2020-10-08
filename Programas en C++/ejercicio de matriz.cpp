#include <iostream>
#include <stdlib.h>
#include <conio.h>


using namespace std;
int main (){
	int matriz[100][100], opcion, fila=0, columna=0, contador=0, mayor=0;
	
	do {
		cout<<"Menu Principal"<<endl<<endl;
		cout<<"[1]. llenar matriz"<<endl;
		cout<<"[2]. Diagonal"<<endl;
		cout<<"[3]. numero mayor de la matriz"<<endl;
		cout<<"[4]. Salir"<<endl;
		cout<<"\neliga la opcion: ";
		cin>>opcion;
		system("cls");
		
		switch (opcion){
			case 1: 
			contador++;
				cout<<"Ingrese el tamaño de filas: ";
				cin>>fila;
				cout<<"Ingrese el tamaño de columnas: ";
				cin>>columna;
					if (fila==columna){
						for (int f=0; f<fila; f++){
							for (int c=0; c<columna; c++){
								cout<<"Ingrese numero fila ["<<f<<"] columna ["<<c<<"]: ";
								cin>>matriz[f][c];
							}
						}
					}
					else
					cout<<"\nNo es una matriz cuadrada"<<endl<<endl;
					system("pause");
					system("cls");
					break;
			case 2:
				if (contador>0){
					for (int i=0; i<fila; i++){
						for (int j=0; j<columna; j++){
							if (i==j){
								cout<<matriz[i][j]<<" ";
							}
							else
							cout<<"0"<<" ";
						}
						cout<<"\n";
					}
				}
				else
				cout<<"no existe ningun dato en la matriz"<<endl;
				system("pause");
				system("cls");
					break;
			case 3:
				cout<<"\nNumero mayor"<<endl<<endl;
			
				
					for (int f=0; f<fila; f++){
						for (int c=0; c<columna; c++){
							if (matriz[f][c] > mayor){
								mayor=matriz[f][c];
							}
						}
					}
				cout<<"El numero mayor es: "<<mayor<<endl;
				getch ();
				system("cls");
				break;
			default:
				cout<<"Opcion Incorrecta "<<endl<<endl;
				system("pause");
				system("cls");
				break;
			case 4: opcion==4;
		}
	
	}while (opcion != 4);
	system("pause");
	return 0;
}
