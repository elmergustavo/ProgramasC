#include <iostream>

using namespace std;

int main(){
	int precio,cantidad,total,resultado;
	
	cout<<"Ingrese el precio de la calculadora: ";
	cin>>precio;
	cout<<"Ingrese cantidad de unidades vendidas: ";
	cin>>cantidad;
	
	total = precio * cantidad;
	
	if(total > 10000){
		resultado = total * 0.19;
	}
	else{
		resultado = total * 0.05;
	}
	
	cout<<"\nPrecio a pagar es: "<<resultado<<" Q";
	
		
	
	
	return 0;
}
