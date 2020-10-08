#include <iostream>

using namespace std;

int main(){
	int num,contador=0,resultado;
	float suma;
	do{
		cout<<"Ingrese un numero: ";
		cin>>num;
		resultado = resultado + num;
		contador++;
	}while(num>0);
	suma = resultado / contador;
	cout<<"El promedio es: "<<suma<<endl;	
	return 0;
}
