#include<iostream>

using namespace std; 
int main (){
	
	int x,y;  
	 
	cout<< "digite un numero: "; cin>>x;
	cout<< "digite un numero: "; cin>>y;
	
	if (x==y){
		cout<<x<<"esigual a: " ,cout<<y;
		
	}
	else {
		if (x<y){
		cout << x<<   " es menor que : " ,cout<<y ;	
		}
		else {
			cout << y<<  " es menor que : ",cout<<x  ;
		}
	}
	
	
	return 0;
}
