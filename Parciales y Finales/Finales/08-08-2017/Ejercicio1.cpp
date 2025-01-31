
//Ejercicio 1 (25pts) Escriba un programa en C++ que simule un sistema de control de acceso por contraseña de
//la siguiente manera: a) En una primer etapa debe permitir cargar los datos de los usuarios válidos (pares de
//datos: nombre y contraseña). No se conoce la cantidad de usuarios válidos y los datos terminan con el usuario
//“ZZZ”. En esta carga inicial, debe verificar mediante un función validar_contraseña que la contraseña no sea
//"1234", "asdf", "pass" ni la cadena vacía; mostrando un mensaje de error y solicitando el reingreso de la misma
//estos casos. (nota: proponga usted el prototipo de la función e impleméntela). b) Luego, simular el verdadero
//intento de acceso al sistema. El programa debe mostrar el mensaje "Por favor, identifíquese:" y solicitar nombre
//y contraseña. Si se ingresa un par nombre+contraseña existente (que coincida con los cargados en el apartado a)
//se debe mostrar el mensaje "Bienvenido al sistema sr X" (reemplazando X por el nombre del usuario); sino,
//luego de 5 intentos fallidos debe mostrar el mensaje "Fuera bicho!"

#include <iostream>
#include <vector>
using namespace std;

struct Usuario {
	string nombre, contrasena;
};

bool validar_contrasena (string contra){
	if (contra == "1234" || contra == "asdf" || contra == "pass" || contra == " "){
		cout << "Error, volver a ingresar la contrasena"<<endl;
		return false;
	}
	return true;
}

int main() {
	vector<Usuario>usuarios;
	Usuario a;
	cin>> a.nombre;
	while (a.nombre != "ZZZ"){
		cin>> a.contrasena;
		bool estatus = validar_contrasena(a.contrasena);
		while (estatus == false){
			cin>> a.contrasena;
			validar_contrasena(a.contrasena);
		}
		usuarios.push_back(a);
		cin>>a.nombre;
	}
	
	cout<<"Por favor, identifiquese: "<<endl;
	Usuario b;
	int intentos = 0;
	while (intentos < 5){
	cin>>b.nombre;
	cin>>b.contrasena;
	for(size_t i=0;i<usuarios.size();i++) { 
		if (usuarios[i].nombre == b.nombre && usuarios[i].contrasena == b.contrasena){
			cout << "Bienvenido al sistema señor "<< usuarios[i].nombre << endl;
		} else {
			intentos++;
			}
		}
	}
	if (intentos == 5) {cout<<"Fuera bicho!"<<endl;}
	
	
	
	return 0;
}

