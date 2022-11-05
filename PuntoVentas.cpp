// creador: Francisco Garcia
#include<iostream>
using namespace std;

int main()
{
	float FMGA_y,s=0,vb,piva=12,viva,pdesc=10,vdesc,vn;
	int i=0,FMGA_c;
	cout<<"Ingrese FMGA_c : ";
	cin>>FMGA_c;
	do{
		cout<<"Ingrese FMGA_y : ";
		cin>>FMGA_y;
		i=i+1;
		s=s+FMGA_y;
	  }while(i<FMGA_c);
	   vb=s;
	   viva=vb*piva/100;
	   vdesc=vb*pdesc/100;
	   vn=vb+viva-vdesc;
	   cout<<"El valor a pagar es de :"<<vn<<endl<<endl;
	   return 0;

}
