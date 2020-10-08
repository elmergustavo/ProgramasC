#include <iostream>

using namespace std;

int mantener(int x){
	if(x % 2 != 0){
		return descartar(x);
		
	}else
	    return x;
}

int descartar(int x){
	return x;
}

int main(){
	int numeros[5];
	char opcion;
	
	for(int i=0; i<5; i++){
		cout<<"Ingrese un numero: ";
		cin>>numeros[i];
	}
	
	do{
		cout<<"\n      Menu  "<<endl;
		cout<<"a. Numeros Pares"<<endl;
		cout<<"b. Numeros Impares"<<endl;
		cout<<"c. Multiplos de 5"<<endl;
		cout<<"d. Salir"<<endl;
		cout<<"Eliga la opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 'a':
				for(int j=0; j<5; j++){
					mantener(numeros[j]);
				}
				break;
			case 'b':
				break;
			case 'c':
				break;
				
		}
		
	}while(opcion != 'd');
	
	
	return 0;
}
