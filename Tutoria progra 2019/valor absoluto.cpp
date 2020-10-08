#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
template <class tipo>
void mostrarAbs(tipo numero);

int main(){
	mostrarAbs(-5.3);
	mostrarAbs(89.633245);
	mostrarAbs(-100.8);
	mostrarAbs(50);
	
	getch();
	return 0;
}


template <class tipo>
void mostrarAbs(tipo numero){
	if (numero < 0){
		numero = numero * -1;	
	}
	
	cout << "El valor absoluto del numero es: " << numero << endl;
}
