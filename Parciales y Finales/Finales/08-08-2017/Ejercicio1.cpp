
//Ejercicio 1 (25pts) Escriba un programa en C++ que simule un sistema de control de acceso por contrase�a de
//la siguiente manera: a) En una primer etapa debe permitir cargar los datos de los usuarios v�lidos (pares de
//datos: nombre y contrase�a). No se conoce la cantidad de usuarios v�lidos y los datos terminan con el usuario
//�ZZZ�. En esta carga inicial, debe verificar mediante un funci�n validar_contrase�a que la contrase�a no sea
//"1234", "asdf", "pass" ni la cadena vac�a; mostrando un mensaje de error y solicitando el reingreso de la misma
//estos casos. (nota: proponga usted el prototipo de la funci�n e implem�ntela). b) Luego, simular el verdadero
//intento de acceso al sistema. El programa debe mostrar el mensaje "Por favor, identif�quese:" y solicitar nombre
//y contrase�a. Si se ingresa un par nombre+contrase�a existente (que coincida con los cargados en el apartado a)
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
			cout << "Bienvenido al sistema se�or "<< usuarios[i].nombre << endl;
		} else {
			intentos++;
			}
		}
	}
	if (intentos == 5) {cout<<"Fuera bicho!"<<endl;}
	
	
	
	return 0;
}

