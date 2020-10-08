#include <iostream>

using namespace std;

int main (){
    int num,numero[50];

    cout<<"\tIngrese el tamaño del vector: "; cin>>num;
    cout<<endl;

    for (int i=0; i<num; i++){
        cout<<"Ingrese los valores: ";
        cin>>numero[i];
    }
    cout<<endl;
    for (int i=0; i<num; i++){
        cout<<i<<"-> "<< numero[i]<<endl;
    }


return 0;
}
