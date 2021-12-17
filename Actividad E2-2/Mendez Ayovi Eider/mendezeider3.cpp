//Algoritmo para calcular los 100 primeros números de la serio Fibonaci 

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n=100,p=0,b=1,z=1;
	
	do{
		cout<<"Ingrese la cantidad de digitos de la serie: ";
		cin>>n;
	}while(n<=0);
	
	cout<<"1 ";
	for(int i=1;i<n;i++){
		z = p + b;
		cout<<z<<" ";
		p = b;
		b = z;		
	}
	
	cout<<"\n";
	system("pause");
	return 0;
}
