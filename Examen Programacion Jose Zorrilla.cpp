#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int materia1=0, materia2=0, materia3=0, materia4=0, materia5=0, materia6=0, materia7=0, x, q=1, z=1,t=0;
	float edad1, w=0, edad2, edad3, edad4, edad5, edad6, edad7;
	float nf1, nf2, nf3, nf4, nf5, nf6, nf7;
	int codigo1;
	
	cout<<"Cuantos alumnos hay en la materia 1: "; cin>>materia1;
	while (q<=materia1){
		cout<<"Edad de alumno "<<z++<<" ";
		cin>>edad1;
		w=w+edad1;
		t=t+1;
		
		cout<<"Nota final: ";
		cin>>nf1;
		
		
		cout<<"Codigo alumno: ";
		cin>>codigo1;
		q=q+1;
	}
	x=w/t;
	cout<<"Promedio de notas: "<<x<<endl;
	
	z=1;
	t=0;
	w=0;
	x=0;
	q=1;
	cout<<"Cuantos alumnos hay en la materia 2: "; cin>>materia2;
	while (q<=materia2){
		cout<<"Edad de alumno "<<z++<<" ";
		cin>>edad2;
		w=w+edad2;
		t=t+1;
		
		cout<<"Nota final: ";
		cin>>nf2;
		
		
		cout<<"Codigo alumno: ";
		cin>>codigo1;
		q=q+1;
	}
	
	x=w/t;
	cout<<"Promedio de notas: "<<x<<endl;
	
	z=1;
	t=0;
	w=0;
	x=0;
	q=1;
	cout<<"Cuantos alumnos hay en la materia 3: "; cin>>materia3;
	while (q<=materia3){
		cout<<"Edad de alumno "<<z++<<" ";
		cin>>edad3;
		w=w+edad3;
		t=t+1;
		
		cout<<"Nota final: ";
		cin>>nf3;
		
		
		cout<<"Codigo alumno: ";
		cin>>codigo1;
		q=q+1;
	}
	
	x=w/t;
	cout<<"Promedio de notas: "<<x<<endl;
	
	z=1;
	t=0;
	w=0;
	x=0;
	q=1;
	cout<<"Cuantos alumnos hay en la materia 4: "; cin>>materia4;
	while (q<=materia4){
		cout<<"Edad de alumno "<<z++<<" ";
		cin>>edad4;
		w=w+edad4;
		t=t+1;
		
		cout<<"Nota final: ";
		cin>>nf4;
		
		
		cout<<"Codigo alumno: ";
		cin>>codigo1;
		q=q+1;
	}
	
	x=w/t;
	cout<<"Promedio de notas: "<<x<<endl;
	
	z=1;
	t=0;
	w=0;
	x=0;
	q=1;
	cout<<"Cuantos alumnos hay en la materia 5: "; cin>>materia5;
	while (q<=materia5){
		cout<<"Edad de alumno "<<z++<<" ";
		cin>>edad5;
		w=w+edad5;
		t=t+1;
		
		cout<<"Nota final: ";
		cin>>nf5;
		
		
		cout<<"Codigo alumno: ";
		cin>>codigo1;
		q=q+1;
	}
	
	x=w/t;
	cout<<"Promedio de notas: "<<x<<endl;
	
	z=1;
	t=0;
	w=0;
	x=0;
	q=1;
	cout<<"Cuantos alumnos hay en la materia 6: "; cin>>materia6;
	while (q<=materia6){
		cout<<"Edad de alumno "<<z++<<" ";
		cin>>edad6;
		w=w+edad6;
		t=t+1;
		
		cout<<"Nota final: ";
		cin>>nf6;
		
		
		cout<<"Codigo alumno: ";
		cin>>codigo1;
		q=q+1;
	}
	
	x=w/t;
	cout<<"Promedio de notas: "<<x<<endl;
	
	z=1;
	t=0;
	w=0;
	x=0;
	q=1;
	cout<<"Cuantos alumnos hay en la materia 7: "; cin>>materia7;
	while (q<=materia7){
		cout<<"Edad de alumno "<<z++<<" ";
		cin>>edad7;
		w=w+edad7;
		t=t+1;
		
		cout<<"Nota final: ";
		cin>>nf7;
		
		
		cout<<"Codigo alumno: ";
		cin>>codigo1;
		q=q+1;
	}
	
	x=w/t;
	cout<<"Promedio de notas: "<<x<<endl;
	
	return 0;
}