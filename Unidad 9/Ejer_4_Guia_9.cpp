#include <iostream>
#include <vector>
using namespace std;

int main() {
	//Declaro 2 vectores vacíos
	vector<string>aprobados;
	vector<string>noaprobados;
	
	string nombre; int calificacion;
	
	cout << "Ingrese sucalificación: " << endl;
		cin >> calificacion;
	
	while (calificacion != 0) {
		cout << "Ingrese el nombre del alumno: " << endl;
		cin >> nombre;
		if (calificacion >= 6) {
			aprobados.push_back(nombre);
		} else {
			noaprobados.push_back(nombre);
		}
		cout << "Ingrese su calificación: " ;
		cin >> calificacion;
	}
	
	if (aprobados.size() > 0) {
		cout << "Lista de aprobados" << endl;
		for (int i=0; i<aprobados.size(); i++){
			cout << aprobados [i] << endl; 
		}
	}
	
	if (noaprobados.size() > 0) {
		cout << "Lista de no aprobados" << endl;
		for (int i=0; i<noaprobados.size(); i++){
			cout << noaprobados [i] << endl; 
		}
	}
		
	return 0;
}

