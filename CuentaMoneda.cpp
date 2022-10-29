#include<iostream>
using namespace std;

int main()
{
	float y,s=0,s1=0,s5=0;
	int i=0,c,i1=0,i5=0;
	cout<<"Ingrese c: ";
	cin>>c;
	do{
		cout<<"Ingrese y: ";
		cin>>y;
		i=i+1;
		s=s+y;
		if(y==1){
		   i1=i1+1;
		   s1=s1+y;
	        }else{

		 i5=i5+1;
		 s5=s5+y;
		}

	   }while(i<c);
	   cout<<"La cantidad de monedas fue :"<<i<<endl;
	   cout<<"El valor fue :"<<s<<endl;

	   cout<<"La cantidad de monedas de $1 fue :"<<i1<<endl;
	   cout<<"El valor fue :"<<s1<<endl;

	   cout<<"La cantidad de monedas de .50 fue :"<<i5<<endl;
           cout<<"El valor fue :"<<s5<<endl;


	   return 0;

}
