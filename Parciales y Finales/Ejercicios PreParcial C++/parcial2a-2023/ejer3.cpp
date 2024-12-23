#include <iostream>
#include <matrix>
using namespace std;

/// Una materia tiene 4 evaluaciones codificadas: 1 (parcial 1), 2 (recup.
/// parcial 1),3 (parcial 2),4 (recup. parcial 2). El Profesor responsable de
/// la materia -en  la que hay muchos docentes- quiere saber quién corrigió
/// cada parcial o recuperatorio de su materia.
int main() {
	/// a) Escriba un programa que permita ingresar la cantidad de alumnos de la
	/// materia (N), y luego ternas de datos:  nro de alumno (1 a N), nro de
	/// evaluación (1 a 4), y nombre del docente que lo corrigió. Los datos
	/// finalizan con el nro de alumno -1 (porque no todos los alumnos rindieron
	/// las 4 instancias). Organice estos datos en una matriz de N filas x 4
	/// columnas, donde cada casillero contenga el nombre del docente que corrigió
	/// un parcial/recuperatorio, o la cadena "No rindió" si el alumno no se
	/// presentó a esa evaluación.
	int n;
	cin >> n;
	matrix<string> m(n,4, "no rindio");
	
	int alum;
	cin >> alum;
	while (alum!=-1) {
		int eval;
		cin >> eval;
		string doc;
		cin.ignore();
		getline(cin,doc);
		m[alum-1][eval-1] = doc;
		cin >> alum;
	}
	

	/// b) El programa debe luego informar cuántos alumnos rindieron cada evaluación
	for (int eval=0; eval<4; ++eval) {
		int c = 0;
		for (int alum=0; alum<n; ++alum) {
			if (m[alum][eval]!="no rindio")
				++c;
		}
		cout << c << endl;
	}
	
	/// c) mostrar la lista de alumnos que no rindieron ninguna de las (4) instancias
	cout << "nros de alumnos que no rindieron nada: " << endl;
	for (int alum=0; alum<n; ++alum) {
		int c = 0;
		for (int eval=0; eval<4; ++eval) {
			if (m[alum][eval]!="no rindio")
				++c;
		}
		if (c==0) cout << alum+1 << endl;
	}
	
	/// d) permitir al usuario ingresar el nombre de un docente y mostrar cuántos
	/// parciales/recuperatorios corrigió ese docente.
	string doc;
	getline(cin,doc);
	
	int c = 0;
	for (size_t i=0; i<m.size(0); ++i) {
		for (size_t j=0; j<m.size(1); ++j) {
			if (m[i][j]==doc)
				++c;
		}
	}
	cout << c;
	
	return 0;
}

