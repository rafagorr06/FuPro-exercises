#include <iostream>
using namespace std;
/**
Escriba una función que determine el mayor de 3 valores 
enteros positivos.
Modifique la función para que, utilizando parámetros 
por defecto, sirva también
para determinar el mayor de 2 parámetros.
**/
int get_mayor(int a,int b,int c = 100){
	int mayor;
	if (a > b && a > c)mayor=a;
	if (b > a && b > c)mayor=b;
	if (c > a && c > b)mayor=c;
	return mayor;
}

int main() {
	int valor = get_mayor(25,81);
	cout<<"El mayor es "<<valor<<endl;
	return 0;
}

