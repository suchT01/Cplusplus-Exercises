#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int x, y=1;
	cout<<"Ingrese un numero entero: ";
	cin>>x;
	while(y<=x){
		if(x%y==0){
			cout<<y<<endl;
		}
		y=y+1;
	}
	return 0;
}