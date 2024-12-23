#include <iostream>
#include <vector>
using namespace std;

/// El código fuente de un proyecto de software muy grande está dividido en
/// muchos archivos. Se desea analizar la longitud de cada uno y del proyecto
/// completo. a) Escriba un programa que permita cargar por cada uno de los
/// N (dato) archivos 3 valores: nombre, cantidad de líneas de código, cantidad
/// de funciones que define; y guarde toda esta información en un único vector.
struct Archivo {
	string nombre;
	int cant_lineas, cant_funcs;
};

pair<Archivo,Archivo> dosMayores(const vector<Archivo> &v); // para c)
pair<int,int> totales(const vector<Archivo> &v); // para d)

int main() {
	int n;
	cin >> n;
	vector<Archivo> v(n);
	for (Archivo &a : v) {
		cin.ignore();
		getline(cin,a.nombre);
		cin >> a.cant_lineas;
		cin >> a.cant_funcs;
	}
	
	/// b) Luego debe informar por cada archivo el promedio de líneas por función;
	for (Archivo a : v) {
		cout << a.nombre << ": " << (1.0*a.cant_lineas)/a.cant_funcs << endl;
	}
	
	/// c) los nombres de los dos archivos con más líneas de código;
	pair<Archivo,Archivo> p = dosMayores(v);
	cout << p.first.nombre << endl;
	cout << p.second.nombre << endl;
	
	/// d) las cantidades totales de líneas y de funciones sumando todos los archivos.
	pair<int,int> tot = totales(v);
	cout << tot.first << endl;
	cout << tot.second << endl;
	
	return 0;
}

/// Importante: Resuelva implementando una función para cada uno de los ítems
/// c) y d) que calcule lo que se requiere informar desde el programa principal.


/// c) los nombres de los dos archivos con más líneas de código;
pair<Archivo,Archivo> dosMayores(const vector<Archivo> &v) {
	Archivo may = { "", -1, 0 } , seg = { "", -1, 0 };
	for (Archivo a : v) {
		if (a.cant_lineas>may.cant_lineas) {
			seg = may;
			may = a;
		} else {
			if (a.cant_lineas>seg.cant_lineas) {
				seg = a;
			}
		}
	}
	return { may, seg };
}

/// y d) las cantidades totales de líneas y de funciones sumando todos los archivos.
pair<int,int> totales(const vector<Archivo> &v) {
	int tot_lineas = 0, tot_funcs = 0;
	for (Archivo a : v) {
		tot_lineas += a.cant_lineas;
		tot_funcs += a.cant_funcs;
	}
	pair<int,int> p;
	p.first = tot_lineas;
	p.second = tot_funcs;
	return p;
}



