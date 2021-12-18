#include<iostream>
using namespace std;
int main(){
	int c=0,v;
	float a=0,l;
	cout<<"ingrese cuantos numeros va a sumar:"; 
	cin>>l;
	do{
		cout<<"ingrese el numero:"; 
		cin>>v;
		c=c+1;
		a=a+v;
		
	}while (c<l);
	cout<<"La suma de los elementos fue:"<<a<<endl;
	
	
	
	return 0;
}
