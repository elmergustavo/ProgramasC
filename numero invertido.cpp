#include <iostream>

  using namespace std;
  
    int main (){
    	int num1,a,b,c,d,e,f,g,h,i,j,k,l ;
    	
    	cout <<"Numero de cuatro digitos invertido" << endl;
    	cin >> num1 ;
    	
    	a = num1/1000 ;
    	b = num1%1000 ;
    	c = b/100 ;
    	d = b%100 ;
    	e = d/10 ;
    	f = d%10 ;
    	g = f*1000 ;
    	h = e*100 ;
    	i = c*10 ;
    	j = a*1 ;
    	k = g+h+i+j ;
    	
    	cout <<" El numero invertido es:"<< k << endl ;
    	cout << " El numero partido a la mitad es:"<< endl;
    	l = k/2 ;
    	cout << l << endl;
    	
    	return 0 ;
    	
  	
    	
    	
    	
    }
