#include <iostream>
using namespace std;

int main() {
	
	cout<<"Ingrese un entero: ";
	int entero; cin>> entero;
	
	if(entero%2!=0){
		entero--;
	}
	
	cout<<"MENU: "<<endl;
	cout<<"Esriba 1 para forma creciente"<<endl;
	cout<<"Esriba 2 para forma decreciente"<<endl;
	cout<<"Seleccione una opcion: ";
	int opcion; cin>> opcion;
	int numero = 0;
	switch (opcion){
		
	case 1: 
		while (numero!=entero){
			numero = numero+2;
			cout<<numero<<"  ";
		}
	break;
	
	case 2: 
		while(entero!=0){
			cout<<entero<<"  ";
			entero=entero-2;
		}
	break; 
	}
	
	
	
	return 0;
}

