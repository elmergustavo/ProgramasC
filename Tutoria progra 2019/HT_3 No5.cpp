#include <iostream>

using namespace std;

int main(){
	char opcion;
	float num,kilogramo,kilometro,galones;
	
	do{
		cout<<"a. Covertir libras a kilogramos"<<endl;
		cout<<"b. Covertir Metros a Kilometros"<<endl;
		cout<<"a. Covertir litros a galones"<<endl;
		cout<<"d. Salir"<<endl;
		cout<<"Eliga la opcion: ";
		cin>>opcion;
		switch(opcion){
			case 'a':
				cout<<"Ingrese libras: ";
				cin>>num;
				kilogramo = num / 2.20462;
				cout<<"Kilogramos: "<<kilogramo<<" Kg"<<endl;
				break;
			case 'b':
				
				break;	
		}
		
	}while(opcion != 'd');
	
	return 0;
}
