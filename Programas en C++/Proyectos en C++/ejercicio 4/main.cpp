#include <iostream>

using namespace std;

int main()
{
    char cantidad_de_horas_trabajadas, precios_por_horas, cantidad_de_horas_extras, precios_de_horas_extras, nombre;
   char cant_precio, cantextra_precioextra, sueldoliq_igss, sueldo_liquido1, descuento_igss;
   float cantidad_horas, precio_hora, horas_extras, precios_horasextras, num5;
   float sueldo_total, igss, sueldo_liquido, nit;

   cout<<"Ingrese numero de nit"<<endl;
   cin>>nit;
   cout<<"Ingrese nombre"<<endl;
   cin>>nombre;
   cout<<"Ingrese cantidad de horas trabajadas"<<endl;
   cin>>cantidad_de_horas_trabajadas;
   cout<<"Ingresar precios por horas"<<endl;
   cin>>precios_por_horas;
   cout<<"Ingresar cantidad de horas extras"<<endl;
   cin>>cantidad_de_horas_extras;
   cout<<"Ingresar precios de horas extras"<<endl;
   cin>>precios_de_horas_extras;

   cant_precio=cantidad_horas*precio_hora;
   cantextra_precioextra=horas_extras*precio_hora;
   sueldo_liquido1= cant_precio+cantextra_precioextra;
   descuento_igss= sueldo_liquido1 * 0.0483;
   num5= sueldo_liquido1 - descuento_igss;


   cout<<"Cantidad de horas trabajadas por precios de horas es:"<<cant_precio<<endl;
   cout<<"Cantidad de hora extras por precios de horas extras es:"<<cantextra_precioextra<<endl;
   cout<<"cantidad de sueldo total es:"<<sueldo_liquido1<<endl;
   cout<<"cantidad de sueldo liquido es:"<<num5;



    return 0;
}
