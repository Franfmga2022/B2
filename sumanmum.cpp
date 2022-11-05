// creador: Francisco Garcia
#include<iostream>
using namespace std;

int main()
{
  float FMGA_y,s=0.0;
  int i=0,FMGA_c;
  cout<<"Ingrese el valor de FMGA_c: ";
  cin>>FMGA_c;
  do{

  cout<<"Ingrese el valor de FMGA_y: ";
  cin>>FMGA_y;
  i=i+1;
  s=s+FMGA_y;


 }while(i<FMGA_c);

 cout<<"La suma de los numeros fue: "<<s<<endl;
  return 0;

}


























