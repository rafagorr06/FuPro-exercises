#include <iostream>
#include <vector>
using namespace std;

/// Escriba una funci�n buscar que reciba un vector de strings v, un string s,
/// y una posici�n p. La funci�n debe buscar el valor s en el vector v, solo
/// desde la posici�n p en adelante, y retornar la primera posici�n donde lo
/// encuentre, o -1 en caso de no encontrarlo.
int buscar(const vector<string> &v, string s, int p) {
	for (size_t i=p; i<v.size(); ++i) {
		if (v[i]==s) {
			return i;
		}
	}
	return -1;
}

/// b) Utilizando la funci�n buscar, escriba una funci�n reemplazar que reciba
/// un vector de strings, y dos strings s1 y s2. La funci�n debe reemplazar
/// todas las ocurrencias de s1 en el vector por s2; y retornar la cantidad de
/// reemplazos realizados.
int reemplazar(vector<string> &v, string s1, string s2) {
	int p = buscar(v,s1,0), c = 0;
	while(p!=-1) {
		v[p] = s2; ++c;
		p = buscar(v,s1,p+1);
	}
	return c;
}

/// prog cliente de prueba (el enunciado no lo pide)
int main() {
	vector<string> v = { "a", "b", "x", "c", "x", "x", "d", "e" };
	reemplazar(v,"x","y");
	for(string s : v)
		cout << s << ' ';
}
