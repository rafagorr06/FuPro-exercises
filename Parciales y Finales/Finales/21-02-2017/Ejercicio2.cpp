
//Ejercicio 2 (30 pts) Un struct definido como struct Evento { string tipo; int jugador; }; representa un evento
//ocurrido en un partido de tenis. tipo puede ser “ace”, “error no forzado”, “tiro ganador”, “doble falta”, y
//”quiebre”. jugador puede ser 1 o 2. a) Escriba una función llamada resumen_partido que reciba un
//arreglo/vector de structs de tipo Evento y un número de jugador, y retorne la cantidad de eventos de cada tipo
//para ese jugador. b) Escriba un programa cliente que permita ingresar todos los eventos de un partido durante el
//mismo (sin conocer previamente la cantidad de eventos), y luego muestre en pantalla el resumen de cada
//jugador.

#include <iostream>
#include <vector>
using namespace std;

struct Evento {
	string tipo;
	int jugador;
};

vector<int> resumen_partido (vector<Evento>partido, int numjugador){
	vector<int>eventosjugador(5,0);
	for(size_t i=0;i<partido.size();i++) { 
		if(partido[i].jugador == numjugador){
			if(partido[i].tipo == "Ace") {eventosjugador[0]++;}
			if(partido[i].tipo == "Error no forzado") {eventos.jugador[1]++;}
			if(partido[i].tipo == "Tiro ganador") {eventos.jugador[2]++;}
			if(partido[i].tipo == "Doble falta") {eventos.jugador[3]++;}
			if(partido[i].tipo == "Quiebre") {eventos.jugador[4]++;}
		}
	}
	
	return eventosjugador;
}
	
int main() {
	
	vector<Evento>partido;
	Evento j;
	
	cin>>j.jugador;
	while(j.jugador != -1){
		cin>>j.tipo;
		partido.push_back(j);
		cin>>j.jugador;
	}
	
	int numjug; cin>>numjug;
	resumen_partido(partido, 1);
	resumen_partido(partido, 2);
	
	return 0;
}

