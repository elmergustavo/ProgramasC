#include <iostream>
#include <Math.h>

using namespace std;

int main(){
	int num, contador=0,resultado;
	int suma=0,cuadrado=0;
	cout<<"Ingrese el numero: ";
	cin>>num;
	
	for(int i=1; i<=num; i++){
		contador = contador + i;
		suma = i * i;
		cuadrado += suma;
	}
	
	contador = pow(contador,2);
	resultado = contador - cuadrado;
	
	cout<<"El resultado es: "<<resultado<<endl;
	


	return 0;
}
