#include <iostream>

using namespace std;

int main(){
	float celsius, f,kelvin;
	
	
	cout<<"Ingrese la temperatura en grados Celsius: ";
	cin>>celsius;
	
	f = ((9*celsius) / 5 ) + 32;
	kelvin = celsius + 273.15;
	
	cout<<"\nTemperatura en grados Fahreheit: "<<f<<" F" <<endl;
	cout<<"Temperatura en grados Kelvin: "<<kelvin<<" K"<<endl;
	
	
	
	return 0;
}
