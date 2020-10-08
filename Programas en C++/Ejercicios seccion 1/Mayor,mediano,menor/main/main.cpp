#include <iostream>

using namespace std;

//creacion de funciones

int mayor(int &x, int &y, int &z)
{
   if((x>y)&&(y>z))
   {
       cout<<"El Numero "<<x<<" es mayor"<<endl;
   }
   if((x>z)&&(z>y))
   {
       cout<<"El Numero "<<x<<" es mayor"<<endl;
   }
   if((y>x)&&(x>z))
   {
       cout<<"El Numero "<<y<<" es mayor"<<endl;
   }
   if((y>z)&&(z>x))
   {
       cout<<"El Numero "<<y<<" es mayor"<<endl;
   }
   if((z>y)&&(y>x))
   {
       cout<<"El Numero "<<z<<" es mayor"<<endl;
   }
   if((z>x)&&(x>y))
   {
       cout<<"El Numero "<<z<<" es mayor"<<endl;
   }
}

int mediano(int &m, int &h, int &c)
{
   if((m>h)&&(h>c))
   {
       cout<<"El Numero "<<h<<" es mediano"<<endl;
   }
   if((m>c)&&(c>h))
   {
       cout<<"El Numero "<<c<<" es mediano"<<endl;
   }

   if((h>m)&&(m>c))
   {
       cout<<"El Numero "<<m<<" es mediano"<<endl;
   }

   if((h>c)&&(c>m))
   {
       cout<<"El Numero "<<c<<" es mediano"<<endl;
   }
   if((c>h)&&(h>m))
   {
       cout<<"El Numero "<<h<<" es mediano"<<endl;
   }
   if((c>m)&&(m>h))
   {
       cout<<"El Numero "<<m<<" es mediano"<<endl;
   }
}

int menor(int &a, int &b, int &d)
{
   if((a>b)&&(b>d))
   {
       cout<<"El Numero "<<d<<" es menor"<<endl;
   }
   if((a>d)&&(d>b))
   {
       cout<<"El Numero "<<d<<" es menor"<<endl;
   }

   if((b>d)&&(d>a))
   {
       cout<<"El Numero "<<a<<" es menor"<<endl;
   }

   if((b>a)&&(a>d))
   {
       cout<<"El Numero "<<d<<" es menor"<<endl;
   }
   if((d>a)&&(a>b))
   {
       cout<<"El Numero "<<b<<" es menor"<<endl;
   }
   if((d>b)&&(b>a))
   {
       cout<<"El Numero "<<a<<" es menor"<<endl;
   }
}

int main()
{
    int dato1, dato2, dato3, resultado;
    cout<<"Declaraion de Funciones"<<endl;
    cout<<"Ingrese Primer Valor: ";
    cin>>dato1;
    cout<<"Ingrese Segundo Valor: ";
    cin>>dato2;
    cout<<"Ingresar Tercer Valor: ";
    cin>>dato3;
    cout<<'\n';
    mayor(dato1, dato2, dato3);
    mediano(dato1, dato2, dato3);
    menor(dato1, dato2, dato3);
    return 0;
}
