#include<iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"ingrese el valor de a:"; cin>>a;
	cout<<"ingrese el valor de b:"; cin>>b;
	
	if(a==b){
		cout<<"El valor de a: "<<a<< " es igual que b: "<<b<<endl;		
		
	}else{
		if(a<b){
			cout<<"a es menor: "<<a<< " que b: "<<b<<endl;
		}else{
			cout<<"b es menor: "<<b<< " que a: "<<a<<endl;
		}
	}
	
		
	return 0;
}
