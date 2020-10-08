#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int num[10], *dir_num;
	
	for(int i=0; i<10; i++){
		cout<<"Ingrese un numero: ";
		cin>>num[i];
	}
	
	dir_num = num;
	
	for(int j=0; j<10; j++){
		if(*dir_num % 2 ==0){
			cout<<"El numero "<<*dir_num<<" es par"<<endl;
			cout<<"Direccion de memoria: "<<dir_num<<endl;
		}
		dir_num++;
	}
	
	getch();
	return 0;
}
