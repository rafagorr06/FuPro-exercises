#include <iostream>
#include <vector>
using namespace std;


void eliminar(vector<int>&arreglo, int pos){
	for(size_t i=pos;i<arreglo.size();i++) { 
		arreglo[i] = arreglo[i+1];
	}
	arreglo.resize(arreglo.size()-1);
}
	
bool buscar(vector<int>&arreglo, int &pos){
	for(size_t i=0;i<arreglo.size();i++){
		if(arreglo[i]==523){
			pos = i;
			eliminar(arreglo, pos);
		}
	}
	return false;
}

int main() {
	int N; cin>>N;
	vector<int>arreglo(N);
	
	int valor;
	for(int i=0;i<N;i++) { 
		cin>>valor;
		arreglo[i] = valor;
	}
	
	int pos;
	buscar(arreglo,pos);
	
	for(size_t i=0;i<arreglo.size();i++) { 
		cout<<arreglo[i]<<"  ";
	}
	return 0;
}

