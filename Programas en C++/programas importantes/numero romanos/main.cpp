#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, unidades, decenas, centenas, millares;

    cout<<"ingrese un numero"<<endl;
    cin>>num;

    unidades= num%10; num/=10;
    decenas = num%10; num/=10;
    centenas= num%10; num/=10;
    millares= num%10; num/=10;

    switch (millares)
    {
        case 1: cout<<"M"; break;
        case 2: cout<<"MM"; break;
        case 3: cout<<"MMM"; break;
    }

    switch (centenas)
    {
        case 1: cout<<"C"; break;
        case 2: cout<<"CC"; break;
        case 3: cout<<"CCC "; break;
        case 4: cout<<"CD "; break;
        case 5: cout<<"D "; break;
        case 6: cout<<"DC "; break;
        case 7: cout<<"DCC "; break;
        case 8: cout<<"DCCC "; break;
        case 9: cout<<"CM "; break;
    }

    switch (decenas)
    {
        case 1: cout<<"X"; break;
        case 2: cout<<"XX"; break;
        case 3: cout<<"XXX"; break;
        case 4: cout<<"XV"; break;
        case 5: cout<<"V"; break;
        case 6: cout<<"VX"; break;
        case 7: cout<<"VXX"; break;
        case 8: cout<<"VXXX"; break;
        case 9: cout<<"XC"; break;
    }
    switch (unidades)
    {
        case 1: cout<<"I"; break;
        case 2: cout<<"II"; break;
        case 3: cout<<"III"; break;
        case 4: cout<<"IV"; break;
        case 5: cout<<"V"; break;
        case 6: cout<<"VI"; break;
        case 7: cout<<"VII"; break;
        case 8: cout<<"VIII"; break;
        case 9: cout<<"IX"; break;

    }

    getch();
    return 0;
}
