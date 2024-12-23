#include <iostream>
#include <vector>
using namespace std;

struct Alumno {
	string nombre, condicion;
	int asist, p1, p2 ,r1, r2;
	
};

void ArreglarNotas (vector<Alumno>&alumnos){
	for(size_t i=0;i<alumnos.size();i++) { 
		if (alumnos[i].p1 < alumnos[i].r1) {alumnos[i].p1=alumnos[i].r1;}
		if (alumnos[i].p2 < alumnos[i].r2) {alumnos[i].p2=alumnos[i].r2;}
	}
}


void Contador (vector<Alumnos>a, int& regulares, int& promocionados){
	if (a[i].p1 >= 50 and a[i].p2 >= 50 and a[i].asist >= 60 ){a.condicion[i]="Regular";}
	if (a[i].p1 >= 80 and a[i].p2 >= 80 and a[i].asist >= 80 ){a.condicion[i]="Promocionado";}
	
	return 0;
}


int main() {
	int N;
	cin >> N;
	vector<Alumno>alumnos;
	int regulares=0;
	int promocionados=0;
	
	for(size_t i=0;i<N;i++) { 
		Alumno a;
		cin>>a.nombre;
		cin>>a.asist;
		cin>>a.p1;
		cin>>a.p2;
		cin>>a.r1;
		cin>>a.r2;
		alumnos.push_back(a);
	}
	ArreglarNotas(alumnos);
	return 0;
}

