#include<iostream>
using namespace std;

int main()
{
	float y,s=0;
	int i=0,c;
	cout<<"Ingrese cantidad de egresos (c)  : ";
	cin>>c;

	cout<<"Ingrese saldo inicial (s)  : ";
	cin>>s;

	do{
	
	cout<<"Ingrese egreso(y)  : ";
	cin>>y;
	i=i+1;
	s=s+y;

        }while(i<c);

	cout<<"El saldo final es :"<<s<<endl;
	return 0;

}
