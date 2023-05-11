#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int array1[10], array2[10], array3[10], array4[6], suma1=0, suma2=0, suma3=0;
	int mayor1=0, mayor2=0, mayor3=0;
	
	for(int i=0;i<10;i++){
		cout<<"Digite el "<<i+1<<" valor del arreglo 1: ";
		cin>>array1[i];
		suma1 += array1[i];
		if(array1[i]>mayor1){
			mayor1=array1[i];
		}
	}
	for(int i=0;i<10;i++){
		cout<<"Digite el "<<i+1<<" valor del arreglo 2: ";
		cin>>array2[i];
		suma2 += array2[i];
		if(array2[i]>mayor2){
			mayor2=array2[i];
		}
	}
	for(int i=0;i<10;i++){
		cout<<"Digite el "<<i+1<<" valor del arreglo 3: ";
		cin>>array3[i];
		suma3 += array3[i];
		if(array3[i]>mayor3){
			mayor3=array3[i];
		}
	}
	array4[0]=suma1;
	array4[1]=suma2;
	array4[2]=suma3;
	array4[3]=mayor1;
	array4[4]=mayor2;
	array4[5]=mayor3;	
	for(int i=0;i<6;i++){
		cout<<"La "<<i+1<<" posicion del 4 arreglo es igual a: "<<array4[i]<<endl;
	}
	return 0;
}