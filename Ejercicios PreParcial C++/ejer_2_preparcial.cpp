#include <iostream>
using namespace std;

struct frecuencia {
	int nro, veces;
};


int GetPosicion(vector<frecuencia>f,int nrobuscar) {
	for(int i=0;i<f.size();i++) { 
		if (f[i].nro==nrobuscar) {
			return i;
		}
	}
	return -1
}

vector<frecuencia>GetFrecuencias(vector<int>v)
	vector<frecuencia>aux;
	for(int i=0;i<v.size();i++) { 
		int posicion = GetPosicion(aux,v[i])
		if (posicion==-1) {
			frecuencia frec;
			frec.nro= v[i];frec.veces=1;
			aux.push_back(frec);
	} else {
		aux [posicion].veces++;
	}
	return aux:
}


int main() {
	vector <frecuencia>f;
	int N;
	cout << "Ingrese la cant. de elementos: "<< endl,
	cin >> N;
	vector<int>v(N)
	for(int i=0;i<9;i++) { 
		v[i]=1+rand()%(N/2)
		cout << v[i] << endl;
	}
	
	vector<frencuencia>aux = GetFrecencias(v);
	for(int i=0;i<aux.size();i++) { 
		cout << aux[i].nro << " aparece " << aux[i].veces << " veces "<< endl;
	}
	return 0;
}

