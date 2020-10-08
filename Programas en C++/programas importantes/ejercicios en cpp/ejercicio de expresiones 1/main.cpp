#include <iostream>

using namespace std;

int main()
{
  float a, b, resultado;

  cout<<"ingrese valor a"<<endl; cin>>a;
  cout<<"ingrese valor b"<<endl; cin>>b;

  resultado= (a/b) + 1;

  cout.precision(4);
  cout<<"el resultado es:" <<resultado<<endl;

}
