#include<iostream>
using namespace std;

int main()
{
	float y,s=0,vb,piva=12,viva,pdesc=10,vdesc,vn;
	int i=0,c;
	cout<<"Ingrese c : ";
	cin>>c;
	do{
		cout<<"Ingrese y : ";
		cin>>y;
		i=i+1;
		s=s+y;
	  }while(i<c);
	   vb=s;
	   viva=vb*piva/100;
	   vdesc=vb*pdesc/100;
	   vn=vb+viva-vdesc;
	   cout<<"El valor a pagar es de :"<<vn<<endl<<endl;
	   return 0;

}
