#include <iostream>
#include <vector>
using namespace std;
/**
El código fuente de un proyecto de software muy grande está dividido 
en muchos archivos. Se desea analizar la longitud de cada uno y del proyecto 
completo. 
a) Escriba un programa que permita cargar por cada uno de los N (dato) 
archivos 3 valores: nombre, cantidad de líneas de código, cantidad de funciones 
que define; y guarde toda esta información en un único vector. 
b) Luego debe informar por cada archivo el promedio de líneas por función; 
c) los nombres de los dos archivos con más líneas de código; y 
d) las cantidades totales de líneas y de funciones sumando todos los archivos. 
Importante: Resuelva implementando una función para cada uno de 
los ítems c) y d) que calcule lo que se requiere informar desde el 
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

