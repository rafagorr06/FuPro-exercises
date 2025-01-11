#include <iostream>
using namespace std;

int main() {
	
	char mayus = 65;
	char minus = 97;
	
	cout<<"MENU: Seleccione una opcion: "<<endl;
	cout<<"Seleccione 1 para letras mayusc "<<endl;
	cout<<"Seleccione 2 para letras minusc"<<endl;
	int opcion; cin>>opcion;
	
	switch (opcion) {
	case 1:
		while (mayus!=91){
			cout<<mayus<<"  ";
			mayus++;
		}
		break;
		
	case 2: 
		while (minus!=123){
			cout<<minus<<"  ";
			minus++;
		}
		break;
	}
	return 0;
}

