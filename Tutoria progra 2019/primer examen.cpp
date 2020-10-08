#include <iostream>

using namespace std;

int main(){
	int num=0,p=0,c=0,guan=0,go=0,b=0,pan=0,suma=0;
	int pantalones=0,camisas=0,guantes=0, gorras=0,bufandas=0,panuelos=0;
	
	cout<<"PRENDAS DE VESTIR:"<<endl;
	cout<<"Ingrese minutos alquilados: ";
	cin>>num;
	
	pantalones = num / 100;
	num %=100;
	camisas = num / 50;
	num %=50;
	guantes = num/20;
	num %=20;
	gorras = num / 10;
	num %=10;
	bufandas = num/5;
	num %=5;
	panuelos = num / 1;
	
	if(pantalones > 0){
		p = pantalones * 60;
	} 
	if(camisas > 0){
		c = camisas * 50;
	} 
	if(guantes > 0){
		guan = guantes * 40;
	} 
	if(gorras > 0){
		go = gorras * 30;
	} 
	if(bufandas > 0){
		b = bufandas * 20;
	} 
	if(panuelos > 0){
		pan = panuelos * 10;
	}
	
	suma = (p + c + guan + go + b + pan);
	
	cout<<"\nPantalones (100 m): "<<pantalones<<endl;
	cout<<"Camisas (50 m): "<<camisas<<endl;
	cout<<"Guantes (20 m): "<<guantes<<endl;
	cout<<"Gorras (10 m): "<<gorras<<endl;
	cout<<"Bufandas (5 m): "<<bufandas<<endl;
	cout<<"Pañuelos (1 m): "<<panuelos<<endl;
	cout<<"\nTotal de ventas estimado: Q."<<suma<<endl;
	
	return 0;
}
