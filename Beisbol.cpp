#include<iostream>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

using namespace std;

struct Pitcher{
	int IP; // ENTRADAS LANZADAS
	int BB; // BASES POR BOLA CONCEDIDAS
	int K; // PONCHADOS
	int CL; // CARRERAS LIMPIAS PERMITIDAS
	int G; // JUEGOS GANADOS
	int P; // JUEGOS PERDIDOS
	float EDP; // EFECTIVIDAD DE PITCHER	
};

struct Bateador{
	int VB; // VECES AL BATE
	int H; // HITS
	int HR; // JONRONES
	int H3; // TRIPLES
	int H2; // DOBLES
	int CA; // CARRERAS ANOTADAS
	int CI; // CARRERAS IMPULSADAS
	int BR; // BASES ROBADAS	
	float PDB; // PROMEDIO DE BATEO
};

struct Jugador{
	char nombre[20];
	char f_nacimiento[20];
	char pais_origen[30];
	double peso;
	double estatura;
	char lado_bateo[10];
	char lado_tiro[10];
	char equipo[30];
	char posicion[30];
	struct Pitcher d_jugadores;
	struct Bateador d_jugadoress;
	float promedio;
}jugadores[50];

int main(){
	float aux1=0;
	char eleccion;
	for(int i=0;i<2;i++){
		fflush(stdin);
		cout<<"Jugador "<<i+1<<endl;
		cout<<"Ingrese su nombre: ";
		fflush(stdin);
		cin.getline(jugadores[i].nombre,20,'\n');
		fflush(stdin);
		cout<<"Ingrese su fecha de nacimiento dd/mm/aaaa: ";
		fflush(stdin);
		cin.getline(jugadores[i].f_nacimiento,20,'\n');
		fflush(stdin);
		cout<<"Ingrese su pais de origen: ";
		cin.getline(jugadores[i].pais_origen,30,'\n');
		fflush(stdin);
		cout<<"Ingrese su peso (kg) : ";
		cin>>jugadores[i].peso;
		fflush(stdin);
		cout<<"Ingrese su estatura (m) : ";
		cin>>jugadores[i].estatura;
		fflush(stdin);
		cout<<"Ingrese su lado de bateo: ";
		cin.getline(jugadores[i].lado_bateo,10,'\n');
		fflush(stdin);
		cout<<"Ingrese su lado de pitcheo: ";
		cin.getline(jugadores[i].lado_tiro,10,'\n');
		fflush(stdin);
		cout<<"Ingrese su equipo: ";
		cin.getline(jugadores[i].equipo,30,'\n');
		fflush(stdin);
		cout<<"Ingrese la posicion donde juega: ";
		cin.getline(jugadores[i].posicion,30,'\n');
		fflush(stdin);
		cout<<"Es usted bateador o pitcher [Responder con B/P]: ";
		cin>>eleccion;
		
		if (toupper(eleccion) == 'B'){
			cout<<"Veces al bate: ";
			cin>>jugadores[i].d_jugadoress.VB;
			fflush(stdin);
			cout<<"Cuantos hits hizo: ";
			cin>>jugadores[i].d_jugadoress.H;
			fflush(stdin);
			cout<<"Cuantos jonrones hizo: ";
			cin>>jugadores[i].d_jugadoress.HR;
			fflush(stdin);
			cout<<"Cuantas triples carreras hizo: ";
			cin>>jugadores[i].d_jugadoress.H3;
			fflush(stdin);
			cout<<"Cuantas dobles carreras hizo: ";
			cin>>jugadores[i].d_jugadoress.H2;
			fflush(stdin);
			cout<<"Cuantas carreras anotadas hizo: ";
			cin>>jugadores[i].d_jugadoress.CA;
			fflush(stdin);
			cout<<"Cuantas carreras impulsadas hizo: ";
			cin>>jugadores[i].d_jugadoress.CI;
			fflush(stdin);
			cout<<"Cuantas bases robadas hizo: ";
			cin>>jugadores[i].d_jugadoress.BR;
			fflush(stdin);
			jugadores[i].d_jugadoress.PDB=((jugadores[i].d_jugadoress.H)/(jugadores[i].d_jugadoress.VB*100));
			cout<<"Su promedio de bateo es: "<<jugadores[i].d_jugadoress.PDB;
			fflush(stdin);
			jugadores[i].promedio=jugadores[i].d_jugadoress.PDB;
			system("cls");
			}
		else if (toupper(eleccion) == 'P'){
			cout<<"Cuantas entradas lanzadas hizo: ";
			cin>>jugadores[i].d_jugadores.IP;
			fflush(stdin);
			cout<<"Cuantas bases por bola concedio: ";
			cin>>jugadores[i].d_jugadores.BB;
			fflush(stdin);
			cout<<"Cuantos ponchados hizo: ";
			cin>>jugadores[i].d_jugadores.K;
			fflush(stdin);
			cout<<"Cuantas carreras limpias permitio: ";
			cin>>jugadores[i].d_jugadores.CL;
			fflush(stdin);
			cout<<"Cuantos juegos gano: ";
			cin>>jugadores[i].d_jugadores.G;
			fflush(stdin);
			cout<<"Cuantos juegos perdio: ";
			cin>>jugadores[i].d_jugadores.P;
			fflush(stdin);
			jugadores[i].d_jugadores.EDP=((jugadores[i].d_jugadores.CL*9)/jugadores[i].d_jugadores.IP);
			cout<<"Efectividad de Pitcher: "<<jugadores[i].d_jugadores.EDP;
			jugadores[i].promedio=jugadores[i].d_jugadores.EDP;
			fflush(stdin);
			system("cls");
			}
		}
		for (int i=0;i<2;i++){
			for (int j=0;j<2;j++){
				if (jugadores[i].promedio>jugadores[j+1].promedio){
					aux1=jugadores[j+1].promedio;
					jugadores[j+1].promedio=jugadores[i].promedio;
					jugadores[i].promedio=aux1;
				}
			}
		}
		for (int i=0;i<2;i++){
			cout<<"Lista de mejores jugadores"<<endl;
			cout<<"Jugador "<<i+1<<endl;
			cout<<jugadores[i].nombre<<endl;
			cout<<"Con un promedio de: "<<jugadores[i].promedio<<endl;
		}
	getch();
	return 0;
	}