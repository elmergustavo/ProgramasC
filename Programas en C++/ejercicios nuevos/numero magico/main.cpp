#include <iostream>
#include <stdlib.h>
#include <time.h> //generar numero aleatorio

using namespace std;

int main()
{
    int numero, dato, contador=0;

    srand(time(NULL));
    dato= 1 + rand()%(100);

    do{
        cout<<"digite un numero:  ";  cin>>numero;
        if (numero>dato){
            cout<<"\ndigite un numero menor\n";
        }
        if (numero < dato ){
            cout<<"\nDigite un numero mayor\n";
        }
            contador++;
    } while(numero != dato);

    cout<<"\nFELICIDADES ADIVINATES EL NUMERO\n";
    cout<<"numeros de intentos:  "<<contador<<endl;

    return 0;
}
