//ingresa un numero decimal presente por separado la parte entera y la parte decimal.


#include <iostream>

using namespace std;

int main()
{
   float num_decimal1, decimal,  p_decimal;
   int entero, p_entera;



   cout<<"ingresar numero decimal"<<endl;
   cin>>num_decimal1;

    p_entera= entero(num_decimal1);
    p_decimal= num_decimal1-entero;

    cout<<"la parte entera es:"<<p_entera<<endl;
    cout<<"la parte decimal es:"<<p_decimal;






    return 0;
}
