#include <iostream>
using namespace std;
/**
Escriba una funci�n que determine el mayor de 3 valores 
enteros positivos.
Modifique la funci�n para que, utilizando par�metros 
por defecto, sirva tambi�n
para determinar el mayor de 2 par�metros.
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

