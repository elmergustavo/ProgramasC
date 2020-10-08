#include <iostream>
#include <windows.h>
#include <conio.h>


using namespace std;
void gotoxy(int x,int y)
{
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
}

void plantilla ()
{
    gotoxy(0,0);
    cout<<"No"<<endl;

    gotoxy(5,0);
    cout<<"cliente"<<endl;

    gotoxy(30,0);
    cout<<"precio de "<<endl;
    gotoxy(31,1);
    cout<<"periodo"<<endl;

    gotoxy(50,0);
    cout<<"cantidad de"<<endl;
    gotoxy(51,1);
    cout<<"periodos"<<endl;

    gotoxy(67,0);
    cout<<"tipo de"<<endl;
    gotoxy(65,1);
    cout<<"contribuyente";

    gotoxy(80,0);
    cout<<"Total sueldo";

    gotoxy(95,0);
    cout<<"inpuestos";

    gotoxy(105,0);
    cout<<"Liquido";
    gotoxy(105,1);
    cout<<"clases";

   gotoxy(115,0);
   cout<<"cantidad de";
   gotoxy(116,1);
   cout<<"billetes";

}

void cantidadbilletes(int liquido, int y)
{
   int billetes200, billetes100, billetes50, billetes20, billetes10, billetes5, billetes1, residuo;

   if (liquido> 2000)
    {
    billetes200=liquido / 200;
    residuo = liquido % 200;
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

    gotoxy(115, y);
    cout<<" la cantidad en billetes de 200 son.." <<billetes200<<endl;
    gotoxy(115, y+1);
    cout<<" la cantidad en billetes de 100 son.." <<billetes100<<endl;
    gotoxy(115, y+2);
    cout<<" la cantidad de billetes de 50 son.."  <<billetes50<<endl;
    gotoxy(115, y+3);
    cout<<" la cantidad de billetes de 20 son.."  <<billetes20<<endl;
    gotoxy(115, y+4);
    cout<<" la cantidad de billetes de 10 son.."  <<billetes10<<endl;
    gotoxy(115, y+5);
    cout<<" la cantidad de billetes de 5 son.."   <<billetes5<<endl;
    gotoxy(115, y+6);
    cout<<" la cantidad de billetes de Q1 son.."  <<residuo<<endl;
    }
    else
        if  (liquido<2000)
    {
        int billetes200, billetes100, billetes50, billetes20, billetes10, billetes5, billetes1, residuo;

    billetes100=liquido / 100;
    residuo = liquido % 100;
    billetes50 = residuo / 50;
    residuo = residuo % 50;
    billetes20= residuo / 20;
    residuo = residuo % 20;
    billetes10 = residuo / 10;
    residuo = residuo% 10;
    billetes5 = residuo / 5;
    residuo = residuo% 5;

    gotoxy(115, y);
    cout<<" la cantidad en billetes de 100 son..."<<billetes100<<endl;
    gotoxy(115, y+1);
    cout<<" la cantidad de billetes de 50 son..." <<billetes50<<endl;
    gotoxy(115, y+2);
    cout<<" la cantidad de billetes de 20 son..." <<billetes20<<endl;
    gotoxy(115, y+3);
    cout<<" la cantidad de billetes de 10 son:..."<<billetes10<<endl;
    gotoxy(115, y+4);
    cout<<" la cantidad de billetes de 5 son..."  <<billetes5<<endl;
    gotoxy(115, y+5);
    cout<<" la cantidad de billetes de Q1 son..." <<residuo<<endl;
    }


}



bool AjustarVentana(int Ancho, int Alto);


bool AjustarVentana(int Ancho, int Alto) {
	_COORD Coordenada;
	Coordenada.X = Ancho;
	Coordenada.Y = Alto;

	_SMALL_RECT Rect;
	Rect.Top = 0;
	Rect.Left = 0;
	Rect.Right = Ancho - 1;
	Rect.Bottom = Alto - 1;

	// Obtener el handle de la consola
	HANDLE hConsola = GetStdHandle(STD_OUTPUT_HANDLE);

	// Ajustar el buffer al nuevo tamaño
	SetConsoleScreenBufferSize(hConsola, Coordenada);

	// Cambiar tamaño de consola a lo especificado en el buffer
	SetConsoleWindowInfo(hConsola, TRUE, &Rect);
	return TRUE;
}


int main()
{
    string nombre, apellido, contribuyente;
    int nivelacademico, cantidadperiodos, tipocontribuyente, totalsueldo;
    double precioperiodo, impuesto, totalimpuesto, liquidoclase;

    AjustarVentana(200,200);
    plantilla();

     gotoxy(0,2);
    cout<<"1.- ";

    gotoxy(5,85);
    cout<<"ingrese nombre: ";
    cin>>nombre;

     gotoxy(5,85);
    cout<<"ingrese apellido: ";
    cin>>apellido;

    gotoxy(5, 2);
    cout<<nombre + " " + apellido;


     gotoxy(5,85);
    cout<<"elija nivel academico: 1= maestro; 2= licenciatura; 3=doctor...";
    cin>>nivelacademico;

    if(nivelacademico==1)
    {
        precioperiodo = 120;
    }else if(nivelacademico==2)
    {
        precioperiodo = 100;

    }else if(nivelacademico==3)
    {
        precioperiodo = 150;

    }

    gotoxy(30, 2);
    cout<<precioperiodo;

     gotoxy(5,85);
    cout<<"ingrese cantidad de periodos...";
    cin>>cantidadperiodos;

    gotoxy(50, 2);
    cout<<cantidadperiodos;

    gotoxy(5,85);
    cout<<"elija tipo de contribuyente 1= normal; 2=pequeño...";
    cin>>tipocontribuyente;

      if(tipocontribuyente==1)
    {
        contribuyente = "normal";
        impuesto = 0.17;
    }else if(tipocontribuyente==2)
    {
        contribuyente = "pequeño";
        impuesto = 0.05;
    }

    gotoxy(65, 2);
    cout<<contribuyente;

    totalsueldo = precioperiodo * cantidadperiodos;
    gotoxy(80, 2);
    cout<<totalsueldo;

    totalimpuesto = totalsueldo * impuesto;
    gotoxy(95, 2);
    cout<<totalimpuesto;

    liquidoclase = totalsueldo - totalimpuesto;
     gotoxy(105, 2);
    cout<<liquidoclase;

    cantidadbilletes(liquidoclase, 2);


    //-----------------------------------------------------------
    gotoxy(0,10);
    cout<<"2.- ";

    gotoxy(5,85);
    cout<<"ingrese nombre: ";
    cin>>nombre;

     gotoxy(5,85);
    cout<<"ingrese apellido: ";
    cin>>apellido;

    gotoxy(5, 10);
    cout<<nombre + " " + apellido;


     gotoxy(5,85);
    cout<<"elija nivel academico: 1= maestro; 2= licenciatura; 3=doctor";
    cin>>nivelacademico;

    if(nivelacademico==1)
    {
        precioperiodo = 120;
    }else if(nivelacademico==2)
    {
        precioperiodo = 100;

    }else if(nivelacademico==3)
    {
        precioperiodo = 150;

    }

    gotoxy(30, 10);
    cout<<precioperiodo;

     gotoxy(5,85);
    cout<<"ingrese cantidad de periodos";
    cin>>cantidadperiodos;

    gotoxy(50, 10);
    cout<<cantidadperiodos;

    gotoxy(5,85);
    cout<<"elija tipo de contribuyente 1= normal; 2=pequeño...";
    cin>>tipocontribuyente;

      if(tipocontribuyente==1)
    {
        contribuyente = "normal";
        impuesto = 0.17;
    }else if(tipocontribuyente==2)
    {
        contribuyente = "pequeño";
        impuesto = 0.05;
    }

    gotoxy(65, 10);
    cout<<contribuyente;

    totalsueldo = precioperiodo * cantidadperiodos;
    gotoxy(80, 10);
    cout<<totalsueldo;

    totalimpuesto = totalsueldo * impuesto;
    gotoxy(95, 10);
    cout<<totalimpuesto;

    liquidoclase = totalsueldo - totalimpuesto;
     gotoxy(105, 10);
    cout<<liquidoclase;

    cantidadbilletes(liquidoclase, 10);

    //-----------------------------------------------------

     gotoxy(0,18);
    cout<<"3.- ";

    gotoxy(5,85);
    cout<<"ingrese nombre: ";
    cin>>nombre;

     gotoxy(5,85);
    cout<<"ingrese apellido: ";
    cin>>apellido;

    gotoxy(5, 18);
    cout<<nombre + " " + apellido;


     gotoxy(5,85);
    cout<<"elija nivel academico: 1= maestro; 2= licenciatura; 3=doctor";
    cin>>nivelacademico;

    if(nivelacademico==1)
    {
        precioperiodo = 120;
    }else if(nivelacademico==2)
    {
        precioperiodo = 100;

    }else if(nivelacademico==3)
    {
        precioperiodo = 150;

    }

    gotoxy(30, 18);
    cout<<precioperiodo;

     gotoxy(5,85);
    cout<<"ingrese cantidad de periodos";
    cin>>cantidadperiodos;

    gotoxy(50, 18);
    cout<<cantidadperiodos;

    gotoxy(5,85);
    cout<<"elija tipo de contribuyente 1= normal; 2=pequeño";
    cin>>tipocontribuyente;

      if(tipocontribuyente==1)
    {
        contribuyente = "normal";
        impuesto = 0.17;
    }else if(tipocontribuyente==2)
    {
        contribuyente = "pequeño";
        impuesto = 0.05;
    }

    gotoxy(65, 18);
    cout<<contribuyente;

    totalsueldo = precioperiodo * cantidadperiodos;
    gotoxy(80, 18);
    cout<<totalsueldo;

    totalimpuesto = totalsueldo * impuesto;
    gotoxy(95, 18);
    cout<<totalimpuesto;

    liquidoclase = totalsueldo - totalimpuesto;
     gotoxy(105, 18);
    cout<<liquidoclase;

    cantidadbilletes(liquidoclase, 18);

    //------------------------------------------------------

     gotoxy(0,26);
    cout<<"4.- ";

    gotoxy(5,85);
    cout<<"ingrese nombre: ";
    cin>>nombre;

     gotoxy(5,85);
    cout<<"ingrese apellido: ";
    cin>>apellido;

    gotoxy(5, 26);
    cout<<nombre + " " + apellido;


     gotoxy(5,85);
    cout<<"elija nivel academico: 1= maestro; 2= licenciatura; 3=doctor";
    cin>>nivelacademico;

    if(nivelacademico==1)
    {
        precioperiodo = 120;
    }else if(nivelacademico==2)
    {
        precioperiodo = 100;

    }else if(nivelacademico==3)
    {
        precioperiodo = 150;

    }

    gotoxy(30, 26);
    cout<<precioperiodo;

     gotoxy(5,85);
    cout<<"ingrese cantidad de periodos";
    cin>>cantidadperiodos;

    gotoxy(50, 26);
    cout<<cantidadperiodos;

    gotoxy(5,85);
    cout<<"elija tipo de contribuyente 1= normal; 2=pequeño";
    cin>>tipocontribuyente;

      if(tipocontribuyente==1)
    {
        contribuyente = "normal";
        impuesto = 0.17;
    }else if(tipocontribuyente==2)
    {
        contribuyente = "pequeño";
        impuesto = 0.05;
    }

    gotoxy(65, 26);
    cout<<contribuyente;

    totalsueldo = precioperiodo * cantidadperiodos;
    gotoxy(80, 26);
    cout<<totalsueldo;

    totalimpuesto = totalsueldo * impuesto;
    gotoxy(95, 26);
    cout<<totalimpuesto;

    liquidoclase = totalsueldo - totalimpuesto;
     gotoxy(105, 26);
    cout<<liquidoclase;

    cantidadbilletes(liquidoclase, 26);

    //-----------------------------------------------------

    gotoxy(0,35);
    cout<<"5.- ";

    gotoxy(5,85);
    cout<<"ingrese nombre: ";
    cin>>nombre;

     gotoxy(5,85);
    cout<<"ingrese apellido: ";
    cin>>apellido;

    gotoxy(5, 35);
    cout<<nombre + " " + apellido;


     gotoxy(5,85);
    cout<<"elija nivel academico: 1= maestro; 2= licenciatura; 3=doctor";
    cin>>nivelacademico;

    if(nivelacademico==1)
    {
        precioperiodo = 120;
    }else if(nivelacademico==2)
    {
        precioperiodo = 100;

    }else if(nivelacademico==3)
    {
        precioperiodo = 150;

    }

    gotoxy(30, 35);
    cout<<precioperiodo;

     gotoxy(5,85);
    cout<<"ingrese cantidad de periodos";
    cin>>cantidadperiodos;

    gotoxy(50,35 );
    cout<<cantidadperiodos;

    gotoxy(5,85);
    cout<<"elija tipo de contribuyente 1= normal; 2=pequeño";
    cin>>tipocontribuyente;

      if(tipocontribuyente==1)
    {
        contribuyente = "normal";
        impuesto = 0.17;
    }else if(tipocontribuyente==2)
    {
        contribuyente = "pequeño";
        impuesto = 0.05;
    }

    gotoxy(65, 35);
    cout<<contribuyente;

    totalsueldo = precioperiodo * cantidadperiodos;
    gotoxy(80, 35);
    cout<<totalsueldo;

    totalimpuesto = totalsueldo * impuesto;
    gotoxy(95, 35);
    cout<<totalimpuesto;

    liquidoclase = totalsueldo - totalimpuesto;
     gotoxy(105, 35);
    cout<<liquidoclase;

    cantidadbilletes(liquidoclase, 35);
    //-----------------------------------------------------

    gotoxy(0,43);
    cout<<"6.- ";

    gotoxy(5,85);
    cout<<"ingrese nombre: ";
    cin>>nombre;

     gotoxy(5,85);
    cout<<"ingrese apellido: ";
    cin>>apellido;

    gotoxy(5, 43);
    cout<<nombre + " " + apellido;


     gotoxy(5,85);
    cout<<"elija nivel academico: 1= maestro; 2= licenciatura; 3=doctor";
    cin>>nivelacademico;

    if(nivelacademico==1)
    {
        precioperiodo = 120;
    }else if(nivelacademico==2)
    {
        precioperiodo = 100;

    }else if(nivelacademico==3)
    {
        precioperiodo = 150;

    }

    gotoxy(30, 43);
    cout<<precioperiodo;

     gotoxy(5,85);
    cout<<"ingrese cantidad de periodos";
    cin>>cantidadperiodos;

    gotoxy(50,43 );
    cout<<cantidadperiodos;

    gotoxy(5,85);
    cout<<"elija tipo de contribuyente 1= normal; 2=pequeño";
    cin>>tipocontribuyente;

      if(tipocontribuyente==1)
    {
        contribuyente = "normal";
        impuesto = 0.17;
    }else if(tipocontribuyente==2)
    {
        contribuyente = "pequeño";
        impuesto = 0.05;
    }

    gotoxy(65, 43);
    cout<<contribuyente;

    totalsueldo = precioperiodo * cantidadperiodos;
    gotoxy(80, 43);
    cout<<totalsueldo;

    totalimpuesto = totalsueldo * impuesto;
    gotoxy(95, 43);
    cout<<totalimpuesto;

    liquidoclase = totalsueldo - totalimpuesto;
     gotoxy(105, 43);
    cout<<liquidoclase;

    cantidadbilletes(liquidoclase, 43);
    //---------------------------------------------------
    gotoxy(0,51);
    cout<<"7.- ";

    gotoxy(5,85);
    cout<<"ingrese nombre: ";
    cin>>nombre;

     gotoxy(5,85);
    cout<<"ingrese apellido: ";
    cin>>apellido;

    gotoxy(5, 51);
    cout<<nombre + " " + apellido;


     gotoxy(5,85);
    cout<<"elija nivel academico: 1= maestro; 2= licenciatura; 3=doctor";
    cin>>nivelacademico;

    if(nivelacademico==1)
    {
        precioperiodo = 120;
    }else if(nivelacademico==2)
    {
        precioperiodo = 100;

    }else if(nivelacademico==3)
    {
        precioperiodo = 150;

    }

    gotoxy(30, 51);
    cout<<precioperiodo;

     gotoxy(5,85);
    cout<<"ingrese cantidad de periodos";
    cin>>cantidadperiodos;

    gotoxy(50,51);
    cout<<cantidadperiodos;

    gotoxy(5,85);
    cout<<"elija tipo de contribuyente 1= normal; 2=pequeño";
    cin>>tipocontribuyente;

      if(tipocontribuyente==1)
    {
        contribuyente = "normal";
        impuesto = 0.17;
    }else if(tipocontribuyente==2)
    {
        contribuyente = "pequeño";
        impuesto = 0.05;
    }

    gotoxy(65, 51);
    cout<<contribuyente;

    totalsueldo = precioperiodo * cantidadperiodos;
    gotoxy(80, 51);
    cout<<totalsueldo;

    totalimpuesto = totalsueldo * impuesto;
    gotoxy(95, 51);
    cout<<totalimpuesto;

    liquidoclase = totalsueldo - totalimpuesto;
     gotoxy(105, 51);
    cout<<liquidoclase;

    cantidadbilletes(liquidoclase, 51);
    //------------------------------------------------
     gotoxy(0,59);
    cout<<"8.- ";

    gotoxy(5,85);
    cout<<"ingrese nombre: ";
    cin>>nombre;

     gotoxy(5,85);
    cout<<"ingrese apellido: ";
    cin>>apellido;

    gotoxy(5, 59);
    cout<<nombre + " " + apellido;


     gotoxy(5,85);
    cout<<"elija nivel academico: 1= maestro; 2= licenciatura; 3=doctor";
    cin>>nivelacademico;

    if(nivelacademico==1)
    {
        precioperiodo = 120;
    }else if(nivelacademico==2)
    {
        precioperiodo = 100;

    }else if(nivelacademico==3)
    {
        precioperiodo = 150;

    }

    gotoxy(30, 59);
    cout<<precioperiodo;

     gotoxy(5,85);
    cout<<"ingrese cantidad de periodos";
    cin>>cantidadperiodos;

    gotoxy(50,59);
    cout<<cantidadperiodos;

    gotoxy(5,85);
    cout<<"elija tipo de contribuyente 1= normal; 2=pequeño";
    cin>>tipocontribuyente;

      if(tipocontribuyente==1)
    {
        contribuyente = "normal";
        impuesto = 0.17;
    }else if(tipocontribuyente==2)
    {
        contribuyente = "pequeño";
        impuesto = 0.05;
    }

    gotoxy(65, 59);
    cout<<contribuyente;

    totalsueldo = precioperiodo * cantidadperiodos;
    gotoxy(80, 59);
    cout<<totalsueldo;

    totalimpuesto = totalsueldo * impuesto;
    gotoxy(95, 59);
    cout<<totalimpuesto;

    liquidoclase = totalsueldo - totalimpuesto;
     gotoxy(105, 59);
    cout<<liquidoclase;

    cantidadbilletes(liquidoclase, 59);
    //-------------------------------------------------------

     gotoxy(0,67);
    cout<<"9.- ";

    gotoxy(5,85);
    cout<<"ingrese nombre: ";
    cin>>nombre;

     gotoxy(5,85);
    cout<<"ingrese apellido: ";
    cin>>apellido;

    gotoxy(5, 67);
    cout<<nombre + " " + apellido;

     gotoxy(5,85);
    cout<<"elija nivel academico: 1= maestro; 2= licenciatura; 3=doctor";
    cin>>nivelacademico;

    if(nivelacademico==1)
    {
        precioperiodo = 120;
    }else if(nivelacademico==2)
    {
        precioperiodo = 100;

    }else if(nivelacademico==3)
    {
        precioperiodo = 150;

    }

    gotoxy(30, 67);
    cout<<precioperiodo;

     gotoxy(5,85);
    cout<<"ingrese cantidad de periodos";
    cin>>cantidadperiodos;

    gotoxy(50,67);
    cout<<cantidadperiodos;

    gotoxy(5,85);
    cout<<"elija tipo de contribuyente 1= normal; 2=pequeño";
    cin>>tipocontribuyente;

      if(tipocontribuyente==1)
    {
        contribuyente = "normal";
        impuesto = 0.17;
    }else if(tipocontribuyente==2)
    {
        contribuyente = "pequeño";
        impuesto = 0.05;
    }

    gotoxy(65, 67);
    cout<<contribuyente;

    totalsueldo = precioperiodo * cantidadperiodos;
    gotoxy(80, 67);
    cout<<totalsueldo;

    totalimpuesto = totalsueldo * impuesto;
    gotoxy(95, 67);
    cout<<totalimpuesto;

    liquidoclase = totalsueldo - totalimpuesto;
     gotoxy(105, 67);
    cout<<liquidoclase;

    cantidadbilletes(liquidoclase, 67);
    //------------------------------------------------
    gotoxy(0,75);
    cout<<"10.- ";

    gotoxy(5,85);
    cout<<"ingrese nombre: ";
    cin>>nombre;

     gotoxy(5,85);
    cout<<"ingrese apellido: ";
    cin>>apellido;

    gotoxy(5, 75);
    cout<<nombre + " " + apellido;

     gotoxy(5,85);
    cout<<"elija nivel academico: 1= maestro; 2= licenciatura; 3=doctor";
    cin>>nivelacademico;

    if(nivelacademico==1)
    {
        precioperiodo = 120;
    }else if(nivelacademico==2)
    {
        precioperiodo = 100;

    }else if(nivelacademico==3)
    {
        precioperiodo = 150;

    }

    gotoxy(30, 75);
    cout<<precioperiodo;

     gotoxy(5,85);
    cout<<"ingrese cantidad de periodos";
    cin>>cantidadperiodos;

    gotoxy(50,75);
    cout<<cantidadperiodos;

    gotoxy(5,85);
    cout<<"elija tipo de contribuyente 1= normal; 2=pequeño";
    cin>>tipocontribuyente;

      if(tipocontribuyente==1)
    {
        contribuyente = "normal";
        impuesto = 0.17;
    }else if(tipocontribuyente==2)
    {
        contribuyente = "pequeño";
        impuesto = 0.05;
    }

    gotoxy(65, 75);
    cout<<contribuyente;

    totalsueldo = precioperiodo * cantidadperiodos;
    gotoxy(80, 75);
    cout<<totalsueldo;

    totalimpuesto = totalsueldo * impuesto;
    gotoxy(95, 75);
    cout<<totalimpuesto;

    liquidoclase = totalsueldo - totalimpuesto;
     gotoxy(105, 75);
    cout<<liquidoclase;

    cantidadbilletes(liquidoclase, 75);
    //-------------------------------------------------
    cout<<"fin de mi plantilla"<<endl;
    getch();
    return 0;
}
