#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct Usuario_Normal{
	int condicion;
	int sexo;
	int edad;
	string ruta;
};

struct Estudiante{
	int condicion;
	int sexo;
	int edad;
	string ruta;
};

struct Empleado_Publico{
	int condicion;
	int sexo;
	int edad;
	string ruta;
};

struct Transporte_Publico{
	struct Usuario_Normal Condicion1;
	struct Estudiante Condicion2;
	struct Empleado_Publico Condicion3;
};

void cantidad_estudiantes(Transporte_Publico *, int n);
void cantidad_empleados(Transporte_Publico *, int n);
void cantidad_condicion1(Transporte_Publico *,int n);
void cantidad_menores(Transporte_Publico *,int n);
void promedio_personas(Transporte_Publico *,int n);

int main(){
	
	int n,op;
	
	cout<<"Cuantas personas hay en el Transporte Publico: ";cin>>n;
	Transporte_Publico personas[n],*p_personas = personas;
	system("PAUSE");
	system("cls");
		
	for (int i=0;i<n;i++){
		
		fflush(stdin);	
		system("cls");
		cout<<endl;
		cout<<"Condicion de vida: "<<endl;
		cout<<endl;
		cout<<"1 . Usuario Normal."<<endl;
		cout<<"2 . Estudiante."<<endl;
		cout<<"3 . Empleado Publico."<<endl;
		cout<<endl;
		cout<<"Opcion (Ingresada en numero 1,2,3): ";
		cin>>op;
		
		if (op==1){
			(p_personas+i)->Condicion1.condicion=1;
			cout<<endl;
			cout<<"Sexo: "<<endl;
			cout<<"1 . Masculino."<<endl;
			cout<<"2 . Femenino."<<endl;
			cin>>(p_personas+i)->Condicion1.sexo;
			cout<<"Edad: ";cin>>(p_personas+i)->Condicion1.edad;
			cout<<"Ruta: ";getline(cin,(p_personas+i)->Condicion1.ruta);
			system("PAUSE");
		}
		
		else if (op==2){
			(p_personas+i)->Condicion2.condicion=2;
			cout<<endl;
			cout<<"Sexo: "<<endl;
			cout<<"1 . Masculino."<<endl;
			cout<<"2 . Femenino."<<endl;
			cin>>(p_personas+i)->Condicion2.sexo;
			cout<<"Edad: ";cin>>(p_personas+i)->Condicion2.edad;
			cout<<"Ruta: ";getline(cin,(p_personas+i)->Condicion2.ruta);
			system("PAUSE");
		}
		
		else if (op==3){
			(p_personas+i)->Condicion3.condicion=3;
			cout<<endl;
			cout<<"Sexo: "<<endl;
			cout<<"1 . Masculino."<<endl;
			cout<<"2 . Femenino."<<endl;
			cin>>(p_personas+i)->Condicion3.sexo;
			cout<<"Edad: ";cin>>(p_personas+i)->Condicion3.edad;
			cout<<"Ruta: ";getline(cin,(p_personas+i)->Condicion3.ruta);
			system("PAUSE");
		}
		
		else {
			cout<<"Opcion no existe";
			break;
		}
			
	}
	system("cls");
	cantidad_estudiantes(p_personas,n);
	cantidad_empleados(p_personas,n);
	cantidad_condicion1(p_personas,n);
	cantidad_menores(p_personas,n);
	promedio_personas(p_personas,n);
	
	return 0;
}

void cantidad_estudiantes(Transporte_Publico *p_personas, int n){
	int cantidad=0;
	for (int i=0;i<n;i++){
		if ((p_personas+i)->Condicion2.condicion==2){
			cantidad++;
		}
	}
	
	cout<<endl;
	cout<<"La cantidad de estudiantes que usan el transporte publico son: "<<cantidad<<endl;
}

void cantidad_empleados(Transporte_Publico *p_personas, int n){
	int cantidad1=0,cantidad2=0;
	for (int i=0;i<n;i++){
		if ((p_personas+i)->Condicion3.condicion==3 and (p_personas+i)->Condicion3.sexo==1)
			cantidad1++;
		else if ((p_personas+i)->Condicion3.condicion==3 and (p_personas+i)->Condicion3.sexo==2)
			cantidad2++;
	}
	
	cout<<endl;
	cout<<"La cantidad de empleados masculinos son: "<<cantidad1<<endl;
	cout<<"La cantidad de empleados femeninos son: "<<cantidad2<<endl;
	
}

void cantidad_condicion1(Transporte_Publico *p_personas,int n){
	int cantidad=0;
	for (int i=0;i<n;i++){
		if ((p_personas+i)->Condicion1.condicion==1){
			cantidad++;
		}
	}
	
	cout<<endl;
	cout<<"La cantidad de usuarios normales que usan el transporte publico son: "<<cantidad<<endl;
}

void cantidad_menores(Transporte_Publico *p_personas,int n){
	int cantidad=0;
	for (int i=0;i<n;i++){
		if ((p_personas+i)->Condicion1.edad<18)
			cantidad++;
		else if ((p_personas+i)->Condicion2.edad<18)
			cantidad++;
		else if ((p_personas+i)->Condicion3.edad<18)
			cantidad++;
		else
			cantidad=0;
	}
	
	cout<<endl;
	cout<<"La cantidad de personas menores de 18 son: "<<cantidad<<endl;
}

void promedio_personas(Transporte_Publico *p_personas,int n){
	int cantidad=0;
	for (int i=0;i<n;i++){
		if ((p_personas+i)->Condicion1.condicion==1)
			cantidad++;
		else if ((p_personas+i)->Condicion2.condicion==2)
			cantidad++;
		else if ((p_personas+i)->Condicion3.condicion==3)
			cantidad++;
	}
	
	cout<<endl;
	cout<<"La cantidad de personas que usan el transporte publico son: "<<cantidad<<endl;
}