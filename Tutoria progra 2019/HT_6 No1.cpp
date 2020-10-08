#include <iostream>
using namespace std;

int main(){
	float media=0,suma=0,valor;
	int contador=0,temp=0;
	
	
	cout<<"Cuantas Temperaturas desea Ingresar: ";
	cin>>temp;
	
	float temperatura[temp];
	
	for(int i=0; i<temp; i++){
		cout<<"Ingresar Numero de Temperatura: ";
		cin>>valor;
		temperatura[i] = valor;
		suma += valor;
		
	}
	
	media = suma / temp;
	for(int i=0; i<temp; i++){
		if(media <= temperatura[i]){
			contador++;
		}
	}
	cout<<"\nLa media es: "<<media<<endl;
	cout<<"Temperatura mayores o iguales que la media son: "<<contador<<endl;
	
}
