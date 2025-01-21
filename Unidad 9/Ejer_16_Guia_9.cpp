#include <iostream>
using namespace std;

struct notas {
	string nombre, apellido;
	float p1, p2, r1, r2;
};

struct notasfinales {
	string nombre, apellido, condicionfinal;
	float notafinal;
};

notasfinales Calcular (notas a){
	notasfinales x;
	float mayp1, mayp2;
	
	if(a.p1 && a.r1 == -1 or a.p2 && a.r2 == -1){
		x.nombre = a.nombre;
		x.apellido = a.apellido;
		x.notafinal = -1;
		x.condicionfinal = "Libre";
		return x;
	} else {
	if (a.p1>a.r1){
		mayp1 = a.p1;
	} else { 
		mayp1 = a.r1;
	}
	if (a.p2>a.r2){
		mayp2 = a.p2;
	} else {
		mayp2 = a.r2;
	}
	
	int prom = (mayp1+mayp2)/2.00;
	x.nombre = a.nombre;
	x.apellido = a.apellido;
	x.notafinal = prom;
	
	if(x.notafinal<4.00){
		x.condicionfinal = "Libre";
	} else {
		if (x.notafinal>=4.00 and x.notafinal<=6.00){
			x.condicionfinal = "Regular";
		} else {
			x.condicionfinal = "Promocionado";
		}
	}
	
	}
	return x;
}
int main() {
	notas alumno1;
	cin>>alumno1.nombre;
	cin>>alumno1.apellido;
	cin>>alumno1.p1;
	cin>>alumno1.r1;
	cin>>alumno1.p2;
	cin>>alumno1.r2;
	
	Calcular(alumno1);
	
	return 0;
}

