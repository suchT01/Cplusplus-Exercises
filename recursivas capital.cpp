#include <iostream>
using namespace std;

float capital(float capi,float porce, float tiempo){
	if (capi==0 or porce==0 or tiempo==0)
		return capi;
	else
		return (capi+capital(capi+(capi*porce/100),porce,tiempo-1));
}

int main(){
	
	float num1,num2,num3;
	cout<<"Capital: ";cin>>num1;
	cout<<"Porcentaje: ";cin>>num2;
	cout<<"Tiempo: ";cin>>num3;
	cout<<"Tu capital es: "<<capital(num1,num2,num3);
	
	return 0;
}