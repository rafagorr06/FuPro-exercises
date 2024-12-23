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
c) los nombres de los dos archivos con m�s l�neas de c�digo; 

d) las cantidades totales de l�neas y de funciones sumando todos los archivos. 

Importante: Resuelva implementando una funci�n para cada uno de 
los �tems c) y d) que calcule lo que se requiere informar desde el 
programa principal (main). 
**/

struct archivo{
	string nombre;
	int lineas,funciones;
};

pair<archivo,archivo>ObtenerDosMayores(vector<archivo>lista){
	archivo may1 = lista[0];archivo may2 = lista[0];
	for(int i=1;i<lista.size();i++) { 
		if (lista[i].lineas > may1.lineas){
			may2 = may1;may1 =lista[i];}
		else{
			if (lista[i].lineas > may2.lineas){
				may2 =lista[i];
			}
		}
	}
	pair<archivo,archivo>resultado;
	resultado.first = may1;resultado.second=may2;
	return resultado;
}
	
pair<int,int>ObtenerResumen(vector<archivo>lista){
	int totlineas = 0;int totfunc = 0;
	for(int i=0;i<lista.size();i++) { 
		totfunc += lista[i].funciones;totlineas+=lista[i].lineas;
	}
	pair<int,int>resultado;
	resultado.first=totfunc:resultado.second=totlineas;
	return resultado;
}

int main() {
	int N;
	cout<<"Ingrese cantidad de archivos ";cin>>N;
	vector<archivo>lista;
	for(int i=0;i<N;i++) { 
		archivo a;
		cout<<"Nombre archivo ";cin>>a.nombre;
		cout<<"Lineas ";cin>>a.lineas;
		cout<<"Funciones ";cin>>a.funciones;
		lista.push_back(a);	
		
		/// Informar el promedio de lineas por funcion
		float PromLnFunc = a.lineas/a.funciones;
		cout<<PromLnFunc<<"  lineas por funcion "<<endl;
	}
	
	
	return 0;
}

