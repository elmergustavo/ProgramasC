#include <iostream>

using namespace std;

void cantidadbilletes(int liquidoclases )
{
    int billetes200, billetes100, billetes50, billetes20, billetes10, billetes5, billetes1, residuo;

    if (liquidoclases> 2000)
    {
    billetes200=liquidoclases / 200;
    residuo = liquidoclases % 200;
    billetes100=residuo / 100;
    residuo = residuo % 100;
    billetes50 = residuo / 50;
    residuo = residuo % 50;
    billetes20= residuo / 20;
    residuo = residuo % 20;
    billetes10 = residuo / 10;
    residuo = residuo% 10;
    billetes5 = residuo / 5;
    residuo = residuo% 5;


    cout<<" la cantidad en billetes de 200 son.." <<billetes200<<endl;
    cout<<" la cantidad en billetes de 100 son.." <<billetes100<<endl;
    cout<<" la cantidad de billetes de 50 son.."  <<billetes50<<endl;
    cout<<" la cantidad de billetes de 20 son.."  <<billetes20<<endl;
    cout<<" la cantidad de billetes de 10 son.."  <<billetes10<<endl;
    cout<<" la cantidad de billetes de 5 son.."   <<billetes5<<endl;
    cout<<" la cantidad de billetes de Q1 son.."  <<residuo<<endl;
    }
    else
        if  (liquidoclases<2000)
    {
        int billetes200, billetes100, billetes50, billetes20, billetes10, billetes5, billetes1, residuo;

    billetes100=liquidoclases / 100;
    residuo = liquidoclases % 100;
    billetes50 = residuo / 50;
    residuo = residuo % 50;
    billetes20= residuo / 20;
    residuo = residuo % 20;
    billetes10 = residuo / 10;
    residuo = residuo% 10;
    billetes5 = residuo / 5;
    residuo = residuo% 5;

    cout<<" la cantidad en billetes de 100 son..."<<billetes100<<endl;
    cout<<" la cantidad de billetes de 50 son..." <<billetes50<<endl;
    cout<<" la cantidad de billetes de 20 son..." <<billetes20<<endl;
    cout<<" la cantidad de billetes de 10 son:..."<<billetes10<<endl;
    cout<<" la cantidad de billetes de 5 son..."  <<billetes5<<endl;
    cout<<" la cantidad de billetes de Q1 son..." <<residuo<<endl;
    }


}



int main()
{

   int liquidoclases;
    cout<<"ingrese cantidad"<<endl;
    cin>>liquidoclases;

    cantidadbilletes(liquidoclases);

    return 0;
}
