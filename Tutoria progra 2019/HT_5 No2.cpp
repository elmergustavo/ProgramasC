#include <iostream>

using namespace std;

float relacion(float a,float b){
	if(a>b){
		return 1;
	}else if(a<b){
		return -1;
	}else{
		return 0;
	}
}

int main(){
	float x,y,valor=0;
	
	cout<<"Ingrese el primero numero: ";
	cin>>x;
	cout<<"Ingrese el segundo numero: ";
	cin>>y;
	
	valor = relacion(x,y);
	cout<<valor;
	
	return 0;
}


