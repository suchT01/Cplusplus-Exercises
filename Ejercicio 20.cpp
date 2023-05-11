#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int x,y=1,z=1;
	cout<<"Digite el numero que desea saber su  factorial: ";
	cin>>x;
	while(z<=x){
		y=y*z;
		z=z+1;
	}
	cout<<"El factorial de "<<x<<" es "<<y<<endl;
	return 0;
}