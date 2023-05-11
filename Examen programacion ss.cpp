#include<iostream> 
#include<conio.h>  
#include<iomanip>
using namespace std;

void f1(int *arreglo, int tamanio); //Prototipo de la funcion f1 para orden
void f2(int *a , int tamanioArreglo); // Prototipo de la funcion f2 para mostrar el vector
void f3(int *aPtr,int *bPtr); // Prototipo de la funcion 3 para cambiar los enteros de posicion dentro del vector

int main(){
	int tamanioArreglo=4; // Se define el tamaño del vector
   int a[ tamanioArreglo ] = {54,2,46,7}; // Se declaran los valores del vector

   f1( a, tamanioArreglo ); //Se procede a llamar la funcion f1
   f2(a, tamanioArreglo); // Se procede a llamar la funcion f2 para mostrar el vector ordenado
   getch(); // Getch para que el programa no se cierre
   return 0; // Indica que el programa ha finalizado
}

void f1(int *arreglo, int tamanio) // indica el nombre de la funcion declarada
{ int minimo; // Se declara las variables a utilizar
  for(int i = 0; i < tamanio; i++ ){ // Se procede a inicializar el ciclo for que recorre el vector
    minimo = i; // Declaracion que el minimo es donde se encuentre la posicion i
    for( int j = i +1; j < tamanio; j++){ // Se declara el segundo ciclo con i + 1 para que revise la posicion de adelante (j=i+1)
        if( arreglo[j] < arreglo[minimo]) // Se comprueba con un if si j es menor que el minimo
            minimo = j;  // Si es menor el minimo se convierte en j
    }
     f3( &arreglo[i] , &arreglo[minimo] ); // se llama la funcion f3 que se encarga de cambiar de posicion los valores
  }
}

void f3( int *aPtr, int *bPtr){ // Funcion ya declara por sus valores
   int aux = *aPtr; // Hace el intercambio del numero auxiliar que ayuda a cambiar los otros valores
       *aPtr = *bPtr; // Intercambia i por j
       *bPtr = aux; // ahora j pasa a ser el auxiliar
}
 
void f2( int *a, int tamanioArreglo){ // Se declara la funcion f2 y sus variables
     for(int i = 0; i < tamanioArreglo; i++ ) // Se llama el ciclo for que va a recorrer la cadena o el vector
        cout<<setw(5)<<a[i]; // Mientras se ejectura el for se van mostrando los valos en pantalla de cada valor del vector
}