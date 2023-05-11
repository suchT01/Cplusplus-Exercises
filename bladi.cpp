#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct nodo{
	int dato;
	nodo *sig;
};

void insertar(nodo*&, int);
void mostrar(nodo*);
int cantidad(nodo*);
void eliminar(nodo*&,int);
void copiado(nodo*, nodo *&);
void menu();
int cv(string valor){
	int n = atoi(valor.c_str());
	return n;
}

int main(){
	menu();
	return 0;
}

void menu(){
	nodo *lista = NULL;
	nodo *lista2 = NULL;
	srand(time(NULL));
	string op;
	int dato,limite,opcion,y;
	do{
		system("cls");
		cout<<"1. RELLENAR LISTA."<<endl;
		cout<<"2. VER LISTA 1."<<endl;
		cout<<"3. NUMERO LIMITE A ELIMINAR."<<endl;
		cout<<"4. COPIAR LISTA A OTRA."<<endl;
		cout<<"5. VER LISTA COPIADA."<<endl;
		cout<<"6. SALIR."<<endl;
		cout<<"RESPUESTA: ";
		getline(cin,op);
		
		while(!isdigit(op[0])){
			fflush(stdin);
			getline(cin,op);
		}
		
		opcion=cv(op);
		
		switch(opcion){
			case 1:{
				system("cls");
				string h;
				int x;
				cout<<"NUMERO A INGRESAR: "; getline(cin,h);
				
				while(!isdigit(h[0])){
					fflush(stdin);
					getline(cin,h);
				}
		
				x=cv(h);
				
				insertar(lista,x);
				system("PAUSE");
				y+=1;
				break;
				}
			case 2:
				system("cls");
				mostrar(lista);
				system("PAUSE");
				system("cls");
				break;
			case 3:
				system("cls");
				if (y==0){
					
				}
				else{
					string m;
					int z;
					cout<<"NUMERO LIMITE: "; getline(cin,m);
					
					while(!isdigit(m[0])){
						fflush(stdin);
						getline(cin,m);
					}
					
					z=cv(m);
					
					for (int i=0;i<y;i++){
						eliminar(lista,z);
					}
				}
				y = cantidad(lista);
				system("PAUSE");
				system("cls");
				break;
			case 4:
				system("cls");
					copiado(lista,lista2);
				system("PAUSE");
				break;
			case 5:
				system("cls");
				mostrar(lista2);
				system("PAUSE");
				break;
			case 6:
				break;
		}		
		
	}while(opcion!=6);
}

void insertar(nodo*&lista, int n){
	nodo *nuevo_nodo = new nodo();
	nuevo_nodo->dato = n;
	nodo *aux1=lista;
	nodo *aux2;
	
	while((aux1 != NULL) and (aux1->dato < n)){
		aux2=aux1;
		aux1 = aux1->sig;
	}
	
	if (lista == aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->sig = nuevo_nodo;
	}
	
	nuevo_nodo->sig = aux1;
}

void mostrar(nodo*lista){
	nodo *actual =new nodo();
	actual = lista;
	
	while(actual!=NULL){
		cout<<actual->dato<<" ,";
		actual = actual->sig;
	}
}

int cantidad(nodo*lista){
	nodo *actual =new nodo();
	actual = lista;
	int n=0;
	while(actual!=NULL){
		n+=1;
		actual = actual->sig;
	}
	return n;
}

void eliminar(nodo*&lista,int n ){

	if (lista!=NULL){
		nodo *aux_borrar;
		nodo *anterior = NULL;
		aux_borrar = lista;		
		
		while ((aux_borrar != NULL) and (aux_borrar->dato < n)){
			anterior = aux_borrar;
			aux_borrar = aux_borrar->sig;
		}	
		if (aux_borrar == NULL){
		}
		else if(anterior == NULL){
			lista = lista->sig;
			delete aux_borrar;
		}
		else{
			anterior->sig = aux_borrar->sig;
			delete aux_borrar;
		}
	}
}
void copiado(nodo*lista, nodo *&lista2){
	
	nodo *actual =new nodo();	
	actual = lista;
	int l;
	
	while(actual!=NULL){
		
		l=actual->dato;
		
		insertar(lista2,l);
		insertar(lista2,l);
		
		actual = actual->sig;
	}
}