#include <iostream>
#include <vector>
using namespace std;

//a
struct paciente {
	string nombre, diagnos;
	int dni, numhab;
};

int main() {
	
	//b
	int N; cin>>N;
	vector<paciente>hospital(N);
	
	for(int i=0;i<N;i++) { 
		cin>>hospital[i].nombre;
		cin>>hospital[i].dni;
		cin>>hospital[i].numhab;
		cin>>hospital[i].diagnos;
	}
	
	//c
	for(int i=0;i<N;i++) { 
		if(hospital[i].nombre == "Cosme Fulanito"){
			cout<<"Habitacion: "<<hospital[i].numhab<<endl;
		}
	}
	
	//d
	int contador = 0;
	for(int i=0;i<N;i++) { 
		if(hospital[i].diagnos == "Apendicitis"){
			contador++;
		}
	}
	cout<<contador<<endl;
	
	//e
	cout<<hospital[100].nombre;
	cout<<hospital[100].dni;
	cout<<hospital[100].numhab;
	cout<<hospital[100].diagnos;
	
	return 0;
}

