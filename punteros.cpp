#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int x;
	int *y=&x;
	cout<<*y<<endl;
	x=15;
	cout<<*y<<endl<<&x<<endl;
	
	
	return 0;
}