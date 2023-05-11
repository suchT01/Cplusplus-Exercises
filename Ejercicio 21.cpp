#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int q,w,e,r,t,y,u=0,i=0;
	float z,m;
	cout<<"Numero 1: ";cin>>q;
	cout<<"Numero 2: ";cin>>w;
	cout<<"Numero 3: ";cin>>e;
	cout<<"Numero 4: ";cin>>r;
	cout<<"Numero 5: ";cin>>t;
	cout<<"Numero 6: ";cin>>y;
	if(q<0){
		u=u+q;
	}
	if(q>0){
		z=z+q;
		i=i+1;
	}
	if(w<0){
		u=w+u;
	}
	if(w>0){
		z=z+w;
		i=i+1;
	}
	if(e<0){
		u=e+u;
	} 
	if(e>0){
		z=z+e;
		i=i+1;
	}
	if(r<0){
		u=r+u;
	} 
	if(r>0){
		z=z+r;
		i=i+1;
	}
	if(t<0){
		u=t+u;
	} 
	if(t>0){
		z=z+t;
		i=i+1;
	}
	if(y<0){
		u=y+u;
	}  
	if(y>0){
		z=z+y;
		i=i+1;
	}
	cout<<"Sumatoria de los negativos: "<<u<<endl;
	m=z/i;
	cout<<"Promedio de los positivos: "<<m<<endl;
	return 0;
}