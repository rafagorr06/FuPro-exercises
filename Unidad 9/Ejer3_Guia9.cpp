#include <iostream>
#include <vector>
using namespace std;

int buscar_pos(vector <string> lista , string palabra);
void inserta(vector <string> &lista , string palabra);

int main() {
	vector<string>lista(20);
	lista[0] = "AIRE";lista[1] = "ARROZ";lista[2] = "BARRIL";
	lista[3] = "CARBON";lista[4] = "DAMA";lista[5] = "ESFERA";
	lista[6] = "FAMILIA";lista[7] = "GOMA";lista[8] = "HIELO";
	lista[9] = "HOLOGRAMA";lista[10] = "LAPIZ";lista[11] = "MADERA";
	lista[12] = "NARANJA";lista[13] = "NOVELA";lista[14] = "OREJA";
	lista[15] = "ORO";lista[16] = "PAIS";lista[17] = "PERRO";
	lista[18] = "QUESO";lista[19] = "TIMON";
	for(int i=0;i<20;i++) { 
		cout<<lista[i]<<endl;
	}	
	
	string palabra;
	cout << "Ingresar una nueva palabra: ";
	cin >> palabra;
	
	inserta (lista, palabra);
	
	// Muestro el vector
	for (int i=0; i<lista.size(); i++){
		cout << "  " << lista[i] << endl;
	}
	return 0;
}

int buscar_pos(vector <string> lista , string palabra){
	for (int i=0; i < lista.size (); i++) {
		if (lista [i] > palabra) {
			return i;
		}
	}
	return -1; // Si sale del for, no hay que insertar
}

void inserta(vector <string> &lista , string palabra){
	int posicion = buscar_pos (lista,palabra);
	if (posicion == -1) {
		lista.push_back(palabra); 
	} else {
		lista.push_back("");
		for (int i=lista.size()-1; i>posicion; i-- ) {
			lista[i] = lista[i-1];
		}
		lista[posicion]=palabra;

	}
	
}
	
	
	
	
	
