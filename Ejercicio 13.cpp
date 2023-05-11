#include <iostream>
using namespace std;

int main(){
	int x,y,z; // xyz xzy yxz yzx zxy zyx
	cout<<"Ingrese el primer numero: ";
	cin>>x;
	cout<<"Ingrese el segundo numero: ";
	cin>>y;
	cout<<"Ingrese el tercer numero: ";
	cin>>z;
	
	if(x>y && y>z){
		cout<<"El primer numero es: "<<x<<endl;
		cout<<"El segundo numero es: "<<y<<endl;
		cout<<"El tercer numero es: "<<z<<endl;
		cout<<"El menor es: "<<z<<endl;	
	}
	else if(x>z && z>y){
		cout<<"El primer numero es: "<<x<<endl;
		cout<<"El segundo numero es: "<<z<<endl;
		cout<<"El tercer numero es: "<<y<<endl;
		cout<<"El menor es: "<<y<<endl;	
	}
	else if(y>x && x>z){
		cout<<"El primer numero es: "<<y<<endl;
		cout<<"El segundo numero es: "<<x<<endl;
		cout<<"El tercer numero es: "<<z<<endl;	
		cout<<"El menor es: "<<z<<endl;
	}
	else if(y>z && z>x){
		cout<<"El primer numero es: "<<y<<endl;
		cout<<"El segundo numero es: "<<z<<endl;
		cout<<"El tercer numero es: "<<x<<endl;	
		cout<<"El menor es: "<<x<<endl;
	}
	else if(z>x && x>y){
		cout<<"El primer numero es: "<<z<<endl;
		cout<<"El segundo numero es: "<<x<<endl;
		cout<<"El tercer numero es: "<<y<<endl;
		cout<<"El menor es: "<<y<<endl;	
	}
	else if(z>y && y>x){
		cout<<"El primer numero es: "<<z<<endl;
		cout<<"El segundo numero es: "<<y<<endl;
		cout<<"El tercer numero es: "<<x<<endl;
		cout<<"El menor es: "<<x<<endl;	
	}
	return 0;
}