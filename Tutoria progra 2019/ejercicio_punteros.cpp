#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int num, *dir_num;
	int cont=0;
	cout<<"Ingrese un numero: "; cin>>num;
	
	dir_num = &num;
	
	for(int i=1; i<=*dir_num; i++){
		if(*dir_num % i ==0){
			cont++;
		}
	}
	
	if(cont == 2){
		cout<<"El numero es primo"<<endl;
		cout<<"Direccion de memoria: "<<dir_num<<endl;
	}else{
	
		cout<<"El numero no es primo"<<endl;
		cout<<"Direccion de memoria: "<<*dir_num<<endl;
	}
	
	getch();
	return 0;
}
