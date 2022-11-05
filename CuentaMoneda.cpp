// creador: Francisco Garcia
#include<iostream>
using namespace std;

int main()
{
	float FMGA_y,s=0,s1=0,s5=0;
	int i=0,FMGA_c,i1=0,i5=0;
	cout<<"Ingrese FMGA_c: ";
	cin>>FMGA_c;
	do{
		cout<<"Ingrese FMGA_y: ";
		cin>>FMGA_y;
		i=i+1;
		s=s+FMGA_y;
		if(FMGA_y==1){
		   i1=i1+1;
		   s1=s1+FMGA_y;
	        }else{

		 i5=i5+1;
		 s5=s5+FMGA_y;
		}

	   }while(i<FMGA_c);
	   cout<<"La cantidad de monedas fue :"<<i<<endl;
	   cout<<"El valor fue :"<<s<<endl;

	   cout<<"La cantidad de monedas de $1 fue :"<<i1<<endl;
	   cout<<"El valor fue :"<<s1<<endl;

	   cout<<"La cantidad de monedas de .50 fue :"<<i5<<endl;
           cout<<"El valor fue :"<<s5<<endl;


	   return 0;

}
