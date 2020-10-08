#include <iostream>
#include <conio.h>
#include <stdlib.h>
 
using namespace std;

int main (){
	char cad1[10], cad2[10];
	float suma;
	float num1;
	float num2;
	
	
	cout << "Ingrese un numero: ";
	cin.getline(cad1,10,'\n');
	
	cout << "Ingrese otro numero: ";
	cin.getline(cad2,10,'\n');
	
	num1 = atof(cad1);
	num2 = atof(cad2);
	
	suma = num1 + num2;
	
	cout << "La suma es: " << suma << endl;

	
	getch();
	return 0;
			
}
  
