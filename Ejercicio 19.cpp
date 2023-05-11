#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int x=0,y=1,z=1,t;
	cout<<"A continuacion vera la sucesion de Fibonacci"<<endl;
	while(z<=10){
		t=x+y;
		cout<<x<<endl;
		z=z+1;
		x=y;
		y=t;
		
	}
	return 0;
}