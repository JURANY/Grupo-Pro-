#include <iostream>
using namespace std;
int main()
{
float x, c=0,l=30,Ca=0,Cr=0;
do{
cout<<"Ingrese el promedio: "; cin>>x;
c=c+1;
if(x>7){
	Ca=Ca+1;
}else{
	if(x<5){
		Cr=Cr+1;
	}else{}
}
}while(c<l);
cout<<"Aprueban "<<Ca<<endl;
cout<<"Reprueban "<<Cr<<endl;
return (0) ;
}
