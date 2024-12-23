#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> notas; //declaro un vector vacio
	int suma=0;
	int nota;
	
	cout << "Ingrese nota: "; cin >> nota;
	while (nota != 0) {
		notas.push_back(nota); //agrego al final
		suma+=nota;
		cout << "Ingrese nota: "; cin >> nota;
	}
	
	float promedio = suma / notas.size();
	
	int cantsupera = 0;
	for (int i=0; i<30; i++) {
		if (notas[i] > promedio) {
			cantsupera++; //incremento el conteo 
		}
	}
	
	cout << cantsupera << " Notas superan la cantidad del promedio son : " << promedio << endl;
	return 0;
}

