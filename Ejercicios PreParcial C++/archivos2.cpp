#include <iostream>
#include <vector>
using namespace std;
/**
El c�digo fuente de un proyecto de software muy grande est� dividido 
en muchos archivos. Se desea analizar la longitud de cada uno y del proyecto 
completo. 
a) Escriba un programa que permita cargar por cada uno de los N (dato) 
archivos 3 valores: nombre, cantidad de l�neas de c�digo, cantidad de funciones 
que define; y guarde toda esta informaci�n en un �nico vector. 
b) Luego debe informar por cada archivo el promedio de l�neas por funci�n; 
c) los nombres de los dos archivos con m�s l�neas de c�digo; y 
d) las cantidades totales de l�neas y de funciones sumando todos los archivos. 
Importante: Resuelva implementando una funci�n para cada uno de 
los �tems c) y d) que calcule lo que se requiere informar desde el 
programa principal (main). 
**/

struct archivo{
	string nombre;
	int lineas,funciones;
};

int main() {
	int N;
	cout<<"Ingrese cantidad de archivos ";cin>>N;
	vector<archivo>lista(N);
	for(int i=0;i<N;i++) { 
		cout<<"Nombre archivo ";cin>>lista[i].nombre;
		cout<<"Lineas ";cin>>lista[i].lineas;
		cout<<"Funciones ";cin>>lista[i].funciones;
	}
	
	
	return 0;
}

