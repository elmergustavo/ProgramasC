#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void conversor_longitud(){      // funcion donde no va a retornar ningun valor
    double centimetros, metros, x, kilometros;
    int op, op1;
    cout<<"\tEliga la Unidad Inicial: "<<endl;
    cout<<"     1. Centimetros"<<endl;
    cout<<"     2. Metros"<<endl;
    cout<<"     3. Kilometros"<<endl;
    cout<<endl;
    cin>>op;
    system("cls"); // para limpiar mi pantalla
    switch (op){
    case 1:  // de centimetros a metros o kilometros
        cout<<"\tEliga la unidad a convertir"<<endl;
        cout<<"\t   De Centimetros a: "<<endl;
        cout<<"     1. Metros"<<endl;
        cout<<"     2. Kilometros"<<endl;
        cout<<endl;
        cin>>op1;
        system("cls");
        cout<<"Ingrese el dato: ";
        cin>>x;
        if (op1==1){    //conversion de centimetros a metros:
            metros=x*0.01;
            cout<<"\nla conversion de Centimetros a Metros es: "<<metros<<" Mts"<<endl;
        }
        if (op1==2){
            kilometros=x * 0.000010;  //conversion de centimetros a kilometros
            cout<<"\nLa Conversion de Centimetros a Kilometros es: "<<kilometros<<" Km"<<endl;
        }
        break;

    case 2:  //con version de metros a centimetros o a kilometros
        cout<<"\tEliga la unidad a Convertir"<<endl;
        cout<<"\t   De Metros a: "<<endl;
        cout<<"     1. Centimetros"<<endl;
        cout<<"     2. Kilometros"<<endl;
        cout<<endl;
        cin>>op1;
        system("cls");
        cout<<"Ingrese el dato: ";
        cin>>x;
            if (op1==1){
                centimetros= x *100;
                cout<<"\nla conversion de Metros a Centimetros es: "<<centimetros<<" Cm"<<endl;
            }
            if (op1==2){
                kilometros= x * 0.001;
                cout<<"\nLa Conversion de Metros a Kilometros es: "<<kilometros<<" Km"<<endl;
                }
        break;

    case 3:  // de kilometros a centimetros o metros
        cout<<"\tEliga la Unidad a Convertir"<<endl;
        cout<<"\t   De Kilometros a: "<<endl;
        cout<<"     1. Centimetros"<<endl;
        cout<<"     2. Metros"<<endl;
        cout<<endl;
        cin>>op1;
        system("cls");  // sirve para limpiar mi pantalla
        cout<<"Ingrese el dato: ";
        cin>>x;
            if (op1==1){
                centimetros= x * 100000;
                cout<<"\nLa Conversion de Kilometros a Centimetros es: "<<centimetros<<" Cm"<<endl;
            }
            if (op1==2){
                metros = x * 1000;
                cout<<"\nLa conversion de Kilometros a Metros es: "<<metros<<" Mts"<<endl;
                }
          break; // el break me sirve para finalizar la opcion que el usuaria desea utilizar
    }
}

void conversor_peso(){
    float onzas, libras, kilogramos, x;
    int op, op1;

    cout<<"\tEliga la Unidad Inicial: "<<endl;
    cout<<"     1. Onzas"<<endl;
    cout<<"     2. Libras"<<endl;
    cout<<"     3. Kilogramos"<<endl;
    cout<<endl;
    cin>>op;
    system("cls");
    switch(op){
    case 1:
        cout<<"\tEliga la unidad a convertir"<<endl;
        cout<<"\t   De Onzas a: "<<endl;
        cout<<"     1. Libras"<<endl;
        cout<<"     2. Kilogramos"<<endl;
        cout<<endl;
        cin>>op1;
        system("cls");
        cout<<"Ingrese el dato: ";
        cin>>x;
        if (op1==1){
            libras= x*0.0625;
            cout<<"\nLa Conversion de onzas a Libras es: "<<libras<<" Lbs"<<endl;
        }
        if (op1==2){
            kilogramos = x * 0.0284;
            cout<<"\nLa conversion de onzas a kilogramos es: "<<kilogramos<<" Kg"<<endl;
            }
        break;
    case 2:
        cout<<"\tEliga la unidad a convertir"<<endl;
        cout<<"\t   De Libras a: "<<endl;
        cout<<"     1.  Onzas"<<endl;
        cout<<"     2.  Kilogramos"<<endl;
        cout<<endl;
        cin>>op1;
        system("cls");
        cout<<"Ingrese el dato: "<<endl;
        cin>>x;
        if (op1==1){
            onzas= x * 16;
            cout<<"\nLa Conversion de Libras a Onzas es: "<<onzas<<" onz"<<endl;
        }
        if (op1==2){
            kilogramos = x * 0.454;
            cout<<"\nLa Conversion de Libras a Kilogramos es: "<<kilogramos<<" Kg"<<endl;}
            break;
    case 3:
        cout<<"\Eliga la unidad a convertir"<<endl;
        cout<<"\t   De Kilogramos a: "<<endl;
        cout<<"     1. Onzas"<<endl;
        cout<<"     2. Libras"<<endl;
        cout<<endl;
        cin>>op1;
        system("cls");
        cout<<"Ingrese el dato: "<<endl;
        cin>>x;
        if (op1 ==1){
            onzas= x * 35.2;
            cout<<"\nLa conversion de Kilogramos a Onza es: "<<onzas<<" Onz"<<endl;
        }
        if (op1==2){
            libras = x * 2.2;
            cout<<"\nLa Conversion de Kilogramos a Libras es: "<<libras<<" Lbs"<<endl;}
        break;
    }
}

void conversion_bytes(){
    float x, bytes, kilobytes, megabytes;
    int op1=0, op=0;
    cout<<"\tEliga la Unidad Inicial: "<<endl;
    cout<<"     1. Bytes"<<endl;
    cout<<"     2. Kilobytes"<<endl;
    cout<<"     3. Megabytes"<<endl;
    cout<<endl;
    cin>>op;
    system("cls");
    switch(op){
    case 1:
        cout<<"\tEliga la unidad a convertir"<<endl;
        cout<<"\t   De Bytes a: "<<endl;
        cout<<"     1. Kilobytes"<<endl;
        cout<<"     2. Megabytes"<<endl;
        cout<<endl;
        cin>>op1;
        system("cls");
        cout<<"Ingrese el dato: ";
        cin>>x;
        if (op1==1){
            kilobytes= x / 1000;
            cout<<"\nLa conversion de Bytes a Kilobytes es: "<<kilobytes<<" KB"<<endl;
        }
        if (op1==2){
            megabytes = x / 1000000;
            cout<<"\nLa Conversion de Bytes a Magabytes es: "<<megabytes<<" MB"<<endl;}
            break;
    case 2:
        cout<<"\tEliga la unidad a convertir"<<endl;
        cout<<"\t   De Kilobytes a: "<<endl;
        cout<<"     1. Bytes"<<endl;
        cout<<"     2. Megabytes"<<endl;
        cout<<endl;
        cin>>op1;
        system("cls");
        cout<<"Ingrese el dato: ";
        cin>>x;
        if (op1==1){
            bytes = x / 0.001;
            cout<<"\nLa Conversion de Kilobytes a Bytes: "<<bytes<<" B"<<endl;
        }
        if (op1==2){
            megabytes= x / 1000;
            cout<<"\nLa Conversion de Kilobytes a Megabytes: "<<megabytes<<" MB"<<endl;}
        break;
    case 3:
        cout<<"\tEliga la unidad a convertir"<<endl;
        cout<<"\t   De Megabytes a: "<<endl;
        cout<<"     1. Bytes"<<endl;
        cout<<"     2. Kilobytes"<<endl;
        cout<<endl;
        cin>>op1;
        system("cls");
        cout<<"Ingrese el dato: ";
        cin>>x;
        if (op1==1){
            bytes = x * 1000000;
            cout<<"\nLa Conversion de Megabytes a Bytes es: "<<bytes<<" B"<<endl;
        }
        if (op1==2){
            kilobytes = x / 0.001;
            cout<<"\nLa Conversion de Megabytes a Kilobytes es: "<<kilobytes<<" KB"<<endl;}
        break;
        }
    }


int main (){
    int opcion=0;
    system("color F0");
do{
     system("cls");

    cout<<"\tBienvenido"<<endl;
    cout<<"\nQue unidad de medida desea utilizar: "<<endl;
    cout<<"\n 1. Conversor de longitud"<<endl;
    cout<<"\n 2. Conversor de peso"<<endl;
    cout<<"\n 3. Conversor de Bytes"<<endl;
    cout<<"\n 4. Salir"<<endl;
    cout<<endl;
    cin>>opcion;

    while ( opcion != 4){

    system("cls");
    switch(opcion){
    case 1:    conversor_longitud(); break;
    case 2:    conversor_peso(); break;
    case 3:    conversion_bytes(); break;
    } break;
    }
    getch();
  } while (opcion!=4);
    getch();
    return 0;
}
