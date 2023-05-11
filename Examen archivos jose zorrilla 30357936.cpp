#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>

using namespace std;

int menu(){
	
	int opcion;
	system("cls");
	cout<<endl;
	cout<<"1. Buscar persona "<<endl;
	cout<<"2. Registrar persona "<<endl;
	cout<<"3. Salir";
	cout<<endl;
	cout<<endl;
	
	cin>>opcion;
	return opcion;
	
}

void registrar(ofstream &f){
	string cedula,nombre;
	system("cls");
	f.open ("datoscedula.txt",ios::out|ios::app);
	cout<<"Ingrese su cedula: "<<endl;
	cin>>cedula;
	cout<<"Ingrese su nombre: "<<endl;
	cin>>nombre;
	f<<cedula<<" "<<nombre<<endl;
	f.close();
	getch();
}

void buscar(ifstream &f){
	string cedula, nombre, cedulab;
	bool aux=false;
	system("cls");
	f.open ("datoscedula.txt",ios::in);
	cout<<"Ingrese la persona de la cedula a buscar: ";
	cin>>cedulab;
	f>>cedula;
	while(!f.eof()){
		if(cedula==cedulab){
			cout<<"CEDULA: "<<cedula<<endl;
			f>>nombre;
			cout<<"NOMBRE: "<<nombre<<endl;
			aux=true;
			break;
		}
		f>>cedula;
	}
	if(!aux){
		cout<<"ESTA PERSONA NO ESTA REGISTRADA.";
	}
	getch();
}

int main(){
	ofstream filer;
	ifstream file;
	int op;
	do{
		op=menu();
		switch(op){
			case 1:
				buscar(file);
				break;
			case 2:
				registrar(filer);
				break;
		}
	} while (op!=3);
}