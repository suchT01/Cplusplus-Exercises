#include <string.h>
#include <iostream>
using namespace std;

int main(){
	string usuario;
	string contra;
	cout<<"Ingrese nombre de usuario"<<endl;
	cin>>usuario;
	cout<<"Ingrese contraseña"<<endl;
	cin>>contra;
	
	if(usuario=="Gwenevere" && contra=="excalibur"){
		cout<<"Usuario y contraseña correctos. Puede ingresar a Camelot"<<endl;
	}
	else{
		cout<<"Acceso denegado"<<endl;
	}
	return 0;
}