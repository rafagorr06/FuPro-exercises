#include <iostream>
#include <cmath>
using namespace std;

/// Sector de cabeceras o prototipos
int facto(int nro);
void intercambia(char &a,char &b);
float hipot(int cat1,int cat2);

pair<int,int>division_con_resto(int dividendo,int divisor);

int main() {
	int nro;
	///cout<<"Ingrese un numero : ";cin>>nro;
	///  Parámetro actual -> Los de llamado
	///int valor = facto(nro);
	///cout<<"El factorial de "<<nro<<" es "<<valor<<endl;
	
	char c1 = 'A';char c2='B';
	intercambia(c1,c2);
	cout<<"Valor de c1 : "<<c1<<"     valor c2 : "<<c2<<endl;
	
	
	cout<<endl<<endl;
	pair<int,int>p=division_con_resto(113,8);
	cout<<"Parte entera : "<<p.first<<endl;
	cout<<"Resto división : "<<p.second<<endl;
	
	return 0;
}
pair<int,int>division_con_resto(int dividendo,int divisor){
	pair<int,int>aux;
	aux.first = dividendo / divisor;
	aux.second = dividendo%divisor;
	return aux;
}


/// sección de implementación de funciones 
float hipot(int cat1,int cat2){
	return sqrt(pow(cat1,2) + pow(cat2,2));
}

void intercambia(char &a,char &b){  /// & parámetro por referencia
	char aux=a;a=b;b=aux;
}

  /// Parámetro Formal -> parámetros de diseño
int facto(int nro){
	if(nro<=1) return 1;
	int i = 1; /// comienzo a multiplicar por 1
	int resultado = i; /// el valor inicial es 1
	do{
		resultado *= i; /// equivale a resultado = resultado * i
		i++;
	} while(i<=nro);
	return resultado;
}
