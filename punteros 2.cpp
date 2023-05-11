#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	int x,y;
	int *point=&y;
	
	do{
		cout<<"Ingrese un numero mayor a 10.5"<<endl;
		cin>>y;
	}while(y<10.5);
	
	cout<<*point<<endl;
	x=*point;
	cout<<x<<endl;
	cout<<&y<<endl;
	cout<<&x<<endl;
	
	
	return 0;
}