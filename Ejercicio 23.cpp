#include<iostream>
using namespace std;

int main(){
	int x, y;
	cout<<"Ingrese un numero: ";
	cin>>x;
	while(x>0){
		y = y + x%10;
		x=x/10;
	}
	cout<<"La suma de los digitos es: "<<y;
	return 0;
}