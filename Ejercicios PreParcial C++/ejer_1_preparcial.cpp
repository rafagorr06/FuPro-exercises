#include <iostream>
#inclde <matrix>
using namespace std;

int main() {
	// 15 barrios, 9 candidatos, inicializados en 0
	matrix <int> elecciones (15,9,0)
	
	//A)
	int canthabilitados, int codcand, int votos;
	
	cout << "Ingrese la cant. de habitantes habilitados de la ciudad: " << endl;
	cin >> canthab;
	
	
	for (i=0 ; i<9 ; i++){
	cout << "Ingrese el nombre y codigo de candidato: " << endl;
	cin >> codcand;
	cin >> candidatos[codcand-1];
	}
	
	//B)
	int totalvotos =0;
	for (i=0 ; i<232 ; i++) {
		cout << "Ingrese el cod. de barrio: " << endl;
		int codbarrio;
		cin >> codbarrio;
		for (j=0 ; j<9 ; j++) {
			cout << "Ingrese los votos del cand. " << j+1 <<" : " << endl;
			cin >> votos
			candidatos[codbarrio-1] [j] += votos;
			totalvotos += votos;
		}
	}
	
	//C)
	cout << "El % de votantes fue del: " << 100/canthab*totalvotos << endl;
	
	//D)
	//Por cada candid. sumo los votos de los 15 barrios
	int candmayor=0;
	int mayor =0;
	for(int i=0;i<9;i++) { 
		int suma=0;
		for (j=0 ; j<9 ; j++) {
			suma += elecciones [j] [i];
		}
		if (suma > mayor) {
			mayor = suma; candmayor=i
		}
	}
	
	cout << candmayor, mayor << endl;
	
	//E)
	cout << "Ingrese cod. de barrio: " << endl;
	cin >> codbarrio;
	int codgana;
	int mayor=0;
	
	// Busco el ganador del barrio seleccionado 
	for(int i=0;i<9;i++) { 
		if (elecciones [codbarrio-1] [i] > mayor) {
			mayor = elecciones [codbarrio-1] [i];
			codganabarrio = i
		
		}
	}
	
	if (codganabarrio==candmay) {
		cout << candidatos[candmayor]<< " ganó en ese barrio " << codbarrio+1 << endl;
	} else {
		cout << candidatos[candmayor]<< "  no ganó en ese barrio " << codbarrio+1 << endl;
	}

	return 0;
}

