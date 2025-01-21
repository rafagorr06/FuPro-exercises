#include <iostream>
#include <vector>
using namespace std;

struct ficha_alumno{
	string nombre, apellido, genero, direccion, materia, condicion;
	int materias;
};


int main() {
	ficha_alumno carrera[32];
	
	carrera[5].materias = 8;
	carrera[10].materias = 7;
	carrera[11].materias = 10;
	
	

	return 0;
}
