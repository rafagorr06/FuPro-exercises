#include <iostream>
#include <cmath>
using namespace std;
/**
Reescriba el ejercicio 7.12 (determinar e informar 
los 50 primeros números primos) 
utilizando una función auxiliar para determinar si 
un número es primo.
**/
bool es_primo(int nro){
	int divisor=2; /// arrancamos desde 2
	int tope = sqrt(nro); /// probamos divisores de 2 hasta tope
	do{
		if (nro%divisor==0) return false; /// encontré un divisor
		divisor++;
	} while(divisor<=tope);
	return true;
}
int main() {
	int nro = 4; /// 1,2 y 3 ya sabemos que son primos
	int conteo=0;  /// recuento de numeros primos;
	do{
		if(es_primo(nro)){
			cout<<nro<<endl;conteo++;
		}
		nro++;
	} while(conteo<50);
	return 0;
}

