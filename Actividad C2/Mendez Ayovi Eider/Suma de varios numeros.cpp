//Hola soy Mendez Eider 
#include<iostream>
using namespace std;
int main(){
	int c=0,v;
	float a=0,l;
	cout<<" Digite cuantos numeros va a sumar: "; //aqui se ingresa el numero limite para la operacion matematica
	cin>>l;
	do{
		cout<<" Digite el numero: ";//aqui ingresa los numeros a ser sumandos 
		cin>>v;
		c=c+1;//contador 
		a=a+v;//acumulador mas la variable
		
	}while (c<l);
	cout<<"La suma de los elementos fue: "<<a<<endl;//resultado de la suma total
	
	
	
	return 0;
}
