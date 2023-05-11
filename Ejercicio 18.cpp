#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char frase[30];
	int vocales,vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0;
	cout<<"Escriba una frase: ";
	cin.getline(frase,30,'\n');
	
	for(int i=0;i<30;i++){
		switch(frase[i]){
			case 'a': vocal_a++; break;
			case 'e': vocal_e++; break;
			case 'i': vocal_i++; break;
			case 'o': vocal_o++; break;
			case 'u': vocal_u++; break;
		}
	}
	vocales=vocal_a+vocal_e+vocal_i+vocal_o+vocal_u;
	cout<<"Vocales:  "<<vocales;
	
	return 0;
}