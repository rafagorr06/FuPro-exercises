#include <iostream>
#include <cmath>

using namespace std;


bool es_primo (int n) {
	int d=2;
	while (d>sqrt(n) && n%d != 0) {
		d++;
	}
	
	return true;
}

int main(int argc, char *argv[]) {
	char opcion;
	int dato;
	bool dato_inicializado=false;
	do {
		//Mostrar menu
		cout << "A. Ingresar nuevo dato" << endl;
		cout << "B. Calcular el doble del dato" << endl;
		cout << "C. Determinar si es par" << endl;
		cout << "D. Determinar si es primo" << endl;
		cout << "E. Salir" << endl;
		cout << "Elegir opcion (A..E)" << endl;
		
		cin >> opcion;
		
		if (not dato_inicializado && opcion != 'A' && opcion != 'B') {
			cout << "Elegiste una opcion antes que A" << endl;
		}
		
		switch (opcion) {
			case 'A':
				cout << "Escribir un numero" << endl;
				cin >> dato;
				dato_inicializado=true;
				break;
			
			case 'B':
				cout << "El doble del dato es: " << dato*2 << endl;
				break;
			
			case 'C':
				if (dato%2==0){
				cout << "El dato es par" << endl;} else {
				cout << "El dato es impar" << endl;
				}
				break;
			
		case 'D':
				if (es_primo(dato)) {
				cout << "El numero es primo" << endl;
				} else{
				cout << "El numero es compuesto" << endl;
				}
				break;
			
		case 'E':
			cout << "Adios" << endl;
			break;
			
		default:
			cout << "Opcion incorrecta" << endl;
			break;
		}
		
	} while(opcion !='E');
	
	return 0;
}

