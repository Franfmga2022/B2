#include<iostream>
using namespace std;

int main()
{
	float imc,peso,altura;
	cout<<"Ingresebel peso (kg) : ";
	cin>>peso;
	cout<<"Ingrese la altura (metros) : ";
	cin>>altura;
	imc=peso/(altura*altura);
	if(imc<18.5){
		cout<<"Usted tiene bajo peso "<<endl;
        }
	if(imc>=18.5 && imc<24.9){
		cout<<"Usted tiene peso normal "<<endl;
	}
	if(imc>=25 && imc<26.9){
                cout<<"Usted tiene sobrepeso grado I "<<endl;         }
	if(imc>=27 && imc<29.9){
                cout<<"Usted tiene sobrepeso grado II "<<endl;        }
	if(imc>=30 && imc<34.9){
                cout<<"Usted tiene obesidad de tipo I "<<endl;        }
	if(imc>=35 && imc<39.9){
                cout<<"Usted tiene obesidad de tipo II "<<endl;       }
	if(imc>=40 && imc<49.9){
                cout<<"Usted tiene obesidad de tipo III (morbida) "<<endl;      }
	if(imc>50){
                cout<<"Usted tiene obesidad de tipo IV (extrema) "<<endl;               }
	  
       return 0;

}
