#include <iostream>

using namespace std;

int main(){
	int num,contador =0;
	
	cout<<"Ingrese el numero: ";
	cin>>num;
	
	for(int i=1; i<=num; i++){
		if(num % i == 0){
			contador = contador + i;
		}
	}
	contador -=num;
	
	if(num == contador){
		cout<<"El numero es perfecto";
	}else if(contador > num){
		cout<<"El numero es abundante";
	}else{
		cout<<"El numero es deficiente";
	}
	
	
	return 0;
}
