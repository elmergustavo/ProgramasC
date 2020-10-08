#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int examen1, examen2, examen3, aprobaron_todos_examen=0,aprobaron_un_examen=0, aprobaron_ultimo_examen=0;


    for (int i=1; i<=5; i++){
        cout<<i<<" Digite la nota del primer examen: "; cin>>examen1;
        cout<<i<<" Digite la nota del segundo examen: "; cin>>examen2;
        cout<<i<<" Digite la nota del tercer examen: "; cin>>examen3;
        cout<<"\n";

        if ((examen1>10.5)&&(examen2>10.5)&&(examen3>10.5)){
            aprobaron_todos_examen++;
        }
        if ((examen1>10.5)|| (examen2>10.5)|| (examen3>10.5)){
            aprobaron_un_examen++;
        }
        if ((examen1<10.5)&&(examen2<10.5)&&(examen3>10.5)){
            aprobaron_ultimo_examen++;

        }
    }

    cout<<"\n";
    cout<<"Alumnos que aprobaron todos los examenes: "<<aprobaron_todos_examen<<endl;
    cout<<"Alumnos que aprobaron al menos un examen: "<<aprobaron_un_examen<<endl;
    cout<<"Alumnos que aprobaron unicamente el ultimo examen: "<<aprobaron_ultimo_examen<<endl;



return 0;
}
