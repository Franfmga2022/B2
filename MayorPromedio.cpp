#include<iostream>
using namespace std;

int main()
{
	float y,pm=0;
	int i=0,c;
	cout<<"Ingrese c: ";
	cin>>c;
	do{
		cout<<"Ingrese y: ";
		cin>>y;
		i=i+1;
		if(y>pm){
			pm=y;
	  }
	}while(i<c);
	   cout<<"El promedio maximo del curso fue :"<<pm<<endl<<endl;
	   return 0;

}
