//Ejercicio elaborado por Daniel Perez Proaño
#include<iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"ingrese el valor de a:"; cin>>a;//aqui se ingresa el valor que se almacenara en la variable a
	cout<<"ingrese el valor de b:"; cin>>b;//aqui se ingresa el valor que se almacenara en la variable b
	
	if(a==b){
		cout<<"El valor de a: "<<a<< " es igual que b: "<<b<<endl;//resultado de la igualdad de las variables		
		
	}else{
		if(a<b){
			cout<<"a es menor: "<<a<< " que b: "<<b<<endl;//resultado variable a es la menor
		}else{
			cout<<"b es menor: "<<b<< " que a: "<<a<<endl;//resultado la variable b es la menor
		}
	}
	
		
	return 0;
}
