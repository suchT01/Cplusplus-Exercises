#include <iostream>
using namespace std;

int main()
{
	int ht;
	float ch, sueldo;
	cout<<"Ingrese las horas trabajadas:";
	cin>> ht;
	cout<<"Ingrese el costo por hora:";
	cin>> ch;
	sueldo=ht*ch;
	cout<<"El sueldo es:"<<sueldo<<endl;
	
	return 0;
}