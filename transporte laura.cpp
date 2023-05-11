#include<iostream>
#include<stdlib.h>
using namespace std;

struct Usuarios{
	int sexo;
	int edad;
	string ruta;
	int condicion1;
	int condicion2;
	int condicion3;
}personas[30], *ppersonas = personas;

int main(){
	int cantidad,condicion, estudiantes=0,em=0,ef=0,emm=0,emmm=0,un=0,mayores=0,menores=0;
	cout<<"Persona en el autobus: ";cin>>cantidad;
	for (int i=0;i<cantidad;i++){
		cout<<"Eres: 1. Usuario normal / 2. Estudiante / 3. Empleado publico"<<endl;
		cin>>condicion;
		if (condicion==1){
			(ppersonas+i)->condicion1=1;
			(ppersonas+i)->condicion2=1;
			(ppersonas+i)->condicion3=1;
			cout<<"Sexo: 1. Masculino / 2. Femenino"<<endl;
			cin>>(ppersonas+i)->sexo;
			cout<<"Edad: ";cin>>(ppersonas+i)->edad;
			fflush(stdin);
			cout<<"Ruta: ";getline(cin,(ppersonas+i)->ruta);
			system("PAUSE");
			system("cls");
		}
		
		else if (condicion==2){
			(ppersonas+i)->condicion2=2;
			(ppersonas+i)->condicion1=2;
			(ppersonas+i)->condicion3=2;
			cout<<"Sexo: 1. Masculino / 2. Femenino"<<endl;
			cin>>(ppersonas+i)->sexo;
			cout<<"Edad: ";cin>>(ppersonas+i)->edad;
			fflush(stdin);
			cout<<"Ruta: ";getline(cin,(ppersonas+i)->ruta);
			system("PAUSE");
			system("cls");
		}
		
		else if (condicion==3){
			(ppersonas+i)->condicion3=3;
			(ppersonas+i)->condicion1=3;
			(ppersonas+i)->condicion2=3;
			cout<<"Sexo: 1. Masculino / 2. Femenino"<<endl;
			cin>>(ppersonas+i)->sexo;
			cout<<"Edad: ";cin>>(ppersonas+i)->edad;
			fflush(stdin);
			cout<<"Ruta: ";getline(cin,(ppersonas+i)->ruta);
			system("PAUSE");
			system("cls");
		}
		
	}
	
	for (int i=0;i<cantidad;i++){
		if  ((ppersonas+i)->condicion2==2){ //cantidad estudiantes
			estudiantes++;
		}
	}
	
	for (int i=0;i<cantidad;i++){
		if ((ppersonas+i)->condicion3==3 and (ppersonas+i)->sexo==1){
			em++; //empleados sexo 
		}
		else if ((ppersonas+i)->condicion3==3 and (ppersonas+i)->sexo==2){
			ef++;
		}
	}
	
	for (int i=0;i<cantidad;i++){
		if ((ppersonas+i)->condicion3==3 and (ppersonas+i)->edad<18){//empleados por edad
			emm++;
		}
		else if ((ppersonas+i)->condicion3==3 and (ppersonas+i)->edad>=18){
			emmm++;
		}
	}
	
	for (int i=0;i<cantidad;i++){
		if ((ppersonas+i)->condicion1==1){
			un++;//cantidad de usuarios normales
		}
	}
	
	for (int i=0;i<cantidad;i++){
		if ((ppersonas+i)->edad <18){
			menores++;
		}
		else
			mayores++;
	}
	
	system("cls");
	cout<<"ESTUDIANTES: "<<estudiantes<<endl;
	cout<<"EMPLEADOS HOMBRES: "<<em<<endl;
	cout<<"EMPLEADOS MUJERES: "<<ef<<endl;
	cout<<"EMPLEADOS MENORES DE 18: "<<emm<<endl;
	cout<<"EMPLEADOS MAYORES DE 18: "<<emmm<<endl;
	cout<<"CANTIDAD DE USUARIOS NORMALES: "<<un<<endl;
	cout<<"PERSONAS MENORES DE 18: "<<menores<<endl;
	cout<<"PERSONAS MAYORES DE 18: "<<mayores<<endl;
	system("PAUSE");
	
	return 0;
}