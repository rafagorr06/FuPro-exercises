
//Ejercicio 1 (25 pts) En una carrera de ciclismo por etapas, el ganador es el competidor que acumula menor
//cantidad de tiempo sumando sus tiempos de todas las etapas. Escriba un programa que permita ingresar la
//cantidad de competidores de una carrera de tres etapas y a continuación, por cada competidor, ingresar primero
//nombre y apellido, y luego los tres tiempos (uno por cada etapa). Cada tiempo se ingresa mediante dos enteros,
//que corresponden a minutos y segundos. El programa debe mostrar el nombre del ganador y su tiempo total en
//minutos y segundos. Advertencia: 40m 40s + 50m 50s no es 90m 90s, sino 91m 30s

#include <iostream>
#include <string>

using namespace std;

int main() {
	int cantidadCompetidores;
	cout << "Ingrese la cantidad de competidores: ";
	cin >> cantidadCompetidores;
	
	string ganador;
	int mejorMinutos;
	int mejorSegundos;
	
	for (int i = 0; i < cantidadCompetidores; ++i) {
		cin.ignore();
		cout << "Ingrese el nombre y apellido del competidor: ";
		string nombre;
		getline(cin, nombre);
		
		int totalMinutos = 0, totalSegundos = 0;
		
		for (int etapa = 1; etapa <= 3; ++etapa) {
			int minutos, segundos;
			cout << "Etapa " << etapa << " - Minutos: ";
			cin >> minutos;
			cout << "Etapa " << etapa << " - Segundos: ";
			cin >> segundos;
			
			totalMinutos += minutos;
			totalSegundos += segundos;
		}
		
		totalMinutos += totalSegundos / 60;
		totalSegundos %= 60;
		
		if (totalMinutos < mejorMinutos || (totalMinutos == mejorMinutos && totalSegundos < mejorSegundos)) {
			mejorMinutos = totalMinutos;
			mejorSegundos = totalSegundos;
			ganador = nombre;
		}
	}
	
	cout << "El ganador es " << ganador << " con un tiempo total de " << mejorMinutos << " minutos y " << mejorSegundos << " segundos." << endl;
	
	return 0;
}
