#include <iostream>
#include <matrix>
using namespace std;

int main() {
	int N;
	cout << "Ingrese cantidad de alumnos: "; cin>>N;
	matrix<int>m(N,4,0);
	
	//Primero se completan todos los DNI
	int nro, dni, materia, nota;
	for (int i=0;i<N;i++) {
		cout << "Ingrese nro de alumno 1 a " << N << " : "; cin>>nro;
		cout << "Ingrese dni del alumno "; cin>>dni;
		m[nro-1][0] = dni;
	}
	// Ingresar las ternas con las notas (terminan en nota=0)
	for (int i=0;i<N*3;i++) {
		cout << "Ingrese nota del alumno ";
		cin>> nota;
		while (nota !=0) {
			cout << "Ingrese nro del alumno ";
			cin>> nro;
			cout << "Ingrese la materia: ";
			cin>> materia;
			m[nro-1][materia] = nota;
			cout << "Ingrese nota del alumno ";
			cin>> nota;
		}
	}
	
	//Encontrar los dos mayores 
	int mayor1=0, int mayor2=0;
	int codalu1=0, int codalu2=0;
	
	for (int i=0;i<N,i++) {
		int suma = 0;
		for (int j=1;j<4,j++) {
			suma=m[i][j];
		}
		//Algoritmo 2 mayores
		if (suma>mayor1) {
			mayor2 = mayor1; codalu2=codalu1;
			mayor1=suma;codalu1=i;
		} else {
			if (suma>mayor2) {
				mayor2=suma;codalu2=i;
			}
		}
		cout << "El 1er alumno con mayor nota es: " << m[codalu1] [0] << " con " <<mayor1 << endl;
		cout << "El 2do alumno con mayor nota es: " << m[codalu2] [0] << " con " <<mayor2 << endl;
	}
	
	
	
	return 0;
}

