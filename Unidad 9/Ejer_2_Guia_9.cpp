#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>v(20);
	for (int i=0; i<v.size(); i++) {
		v[i]= 100+rand()%51;
		cout << v[i] << "  ";
	}
	cout << endl << endl;
	
	int m , p;
	cout << "Ingrese el valor: ";
	cin >> m;
	cout << "Ingrese la posición: ";
	cin >> p;
	
	//Agrego un 0 como elemento extra
	v.push_back (0);
	
	//Corrimiento de datos
	for (int i=v.size()-1; i>p; i-- ) {
		v[i] = v[i-1];
	}
	
	v[p]=m;

	// Muestro el vector
	for (int i=0; i<v.size(); i++){
		cout << "  " << v[i];
	}
	
	return 0;
}

