// creador: Francisco Garcia
#include<iostream>
using namespace std;

int main()
{
	float FMGA_y,s=0;
	int i=0,FMGA_c;
	cout<<"Ingrese cantidad de egresos (FMGA_c)  : ";
	cin>>FMGA_c;

	cout<<"Ingrese saldo inicial (s)  : ";
	cin>>s;

	do{
	
	cout<<"Ingrese egreso(FMGA_y)  : ";
	cin>>FMGA_y;
	i=i+1;
	s=s+FMGA_y;

        }while(i<FMGA_c);

	cout<<"El saldo final es :"<<s<<endl;
	return 0;

}
