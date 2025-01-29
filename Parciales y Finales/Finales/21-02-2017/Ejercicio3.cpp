
//Ejercicio 3 (25 pts) Se pretende analizar el rendimiento acad�mico de 200 egresados de una carrera cuyo plan
//contiene 35 materias. Escriba un programa que permita a) ingresar 200x35 ternas de datos compuestas por
//n�mero de alumno (1 a 200), n�mero de materia (1 a 35) y nota final (6 a 10) y muestre: b) el mejor promedio de
//la carrera; c) la materia m�s dif�cil (la que tenga menor promedio de nota), y d) la nota que obtuvo el alumno del
//mejor promedio para esa materia m�s dif�cil.

#include <iostream>
#include <matrix>
using namespace std;

int main() {
	matrix<int>egresados(200,35,0);
	
	//a
	int notafinal;
	for(int i=0;i<200;i++) { 
		for(int j=0;j<35;j++) { 
			cin>>notafinal;
			egresados[i][j] = notafinal;
		}
	}
	
	//b
	float mejorpromcarrera = 0;
	int mejoralumno = 0;
	for(int i=0;i<200;i++) { 
		int sumador = 0;
		for(int j=0;j<35;j++) { 
			sumador += egresados[i][j];
		}
		float prom = sumador/35.00;
		if(prom > mejorpromcarrera){
			mejorpromcarrera = prom;
			mejoralumno = i;
		}
	}
	cout << mejorpromcarrera << endl;
	
	//c
	float materiapromdificil = 10;
	int materiadificil = 0;
	for(int j=0;j<35;j++) { 
		int contador = 0;
		for(int i=0;i<200;i++) { 
			contador += egresados[i][j];
		}
		float promedio = contador/200.00;
		if(promedio < materiapromdificil){
			materiapromdificil = contador/200;
			materiadificil = j;
		}
	}
	cout << materiadificil << endl;
	
	//d
	cout << egresados[mejoralumno][materiadificil] <<endl;
	
	
	return 0;
}

