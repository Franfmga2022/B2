// creador: Francisco Garcia
#include<iostream>
using namespace std;

int main()
{
	float FMGA_y,pm=0;
	int i=0,FMGA_c;
	cout<<"Ingrese FMGA_c: ";
	cin>>FMGA_c;
	do{
		cout<<"Ingrese FMGA_y: ";
		cin>>FMGA_y;
		i=i+1;
		if(FMGA_y>pm){
			pm=FMGA_y;
	  }
	}while(i<FMGA_c);
	   cout<<"El promedio maximo del curso fue :"<<pm<<endl<<endl;
	   return 0;

}
