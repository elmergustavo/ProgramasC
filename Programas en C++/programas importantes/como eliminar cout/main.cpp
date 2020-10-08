#include <stdio.h>
#include<conio.h>
#include<iostream>
int main()
{
int a=0,b=0,c=0;
char letra='a';
int salir=1,cont1,cont2,cont3;

do
{
if(salir==1)
{
cout<<"La tombola esta dando vueltas oprime cualquier tecla para pararlo"<<endl;
while(!kbhit());
{
if(a==4)
{
a=1;
}
a+=1;
cout<<a;
//aqui no colocque system("cls"); por eso llena la pantalla
}
cont1=a;
cout<<"el numero de la bola es "<<a;
cout<<"\nve por el segundo intento"<<endl<<endl;
getch();
getch();
}

if(salir=2)
{
cout<<"La tombola esta dando vueltas oprime cualquier tecla para pararlo"<<endl;
while(!kbhit())
{
if(b==4)
{
b=1;
}
b+=1;
cout<<a;
system("cls");//esta funcion me borró todo y quieso que solo borre los numeros y no las letras que estan antes de los numeros.
}
cont2=b;
cout<<"el numero de la bola es "<<b;
cout<<"\nve por el tercer intento"<<endl<<endl;
getch();
getch();
}

if(salir=3)
{
cout<<"La tombola esta dando vueltas oprime cualquier tecla para pararlo"<<endl;
while(!kbhit())
{
if(c==4)
{
c=1;
}
c+=1;
cout<<a;
system("cls");
}
cont3=c;
cout<<"el numero de la bola es "<<c<<endl;
getch();
}
salir+=1;
}while(salir<4);
if(cont1!=cont2&&cont1!=cont3&&cont2!=cont3)
{
cout<<endl<<"Has perdido el juego, lo siento tio/a "<<endl;
}
if(cont1==cont2&&cont2!=cont3)
{
cout<<endl<<"Has empatado el juego"<<endl;
}
if(cont1!=cont2&&cont2==cont3)
{
cout<<endl<<"Has empatado el juego"<<endl;
}
if(cont1!=cont2&&cont1==cont3)
{
cout<<endl<<"Has empatado el juego"<<endl;
}
if(cont1==cont2&&cont2==cont3)
{
cout<<endl<<"Has ganado el juego, felicidades, los $1000 son tuyos "<<endl;
}
getch();
}
