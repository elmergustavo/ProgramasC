#include <iostream>

using namespace std;

int main(){
	int num[4];
	int numero;
	int temp;
	
	for(int i=0; i<4; i++){
		cout<<"Ingrese un numero: ";
		cin>>numero;
		num[i] = numero;
	}
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4-1; j++)
		{
			if(num[j] > num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
				
		}
	}
	
	for(int i=3; i>=0;i--){
		cout<<num[i]<<endl;
	}
	
}
