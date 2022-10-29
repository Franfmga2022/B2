#include<iostream>
using namespace std;

int main()
{
	float y,s=0;
	int i=0,l;
	cout<<"Ingrese cantidad de egresos (l)  : ";
	cin>>l;

	cout<<"Ingrese saldo inicial (s)  : ";
	cin>>s;

	do{
	
	cout<<"Ingrese egreso(y)  : ";
	cin>>y;
	i=i+1;
	s=s+y;

        }while(i<l);

	cout<<"El saldo final es :"<<s<<endl;
	return 0;

}
