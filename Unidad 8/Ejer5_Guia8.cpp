#include <iostream>
using namespace std;
/**
Desarrolle una función llamada Intercambia(...) 
que reciba dos variables enteras
por referencia e intercambie sus valores. 
Escriba dos sobrecargas de la función
que permitan realizar el mismo procedimiento con dos datos 
de tipo real, y dos de tipo caracter.
**/
void intercambia(int &a,int &b){
	int aux=a;a=b;b=aux;
}
void intercambia(float &a,float &b){
	float aux=a;a=b;b=aux;
}
void intercambia(char &a,char &b){  
	char aux=a;a=b;b=aux;
}
int main() {
	int v1 = 17;int v2=62;
	intercambia(v1,v2);
	cout<<v1<<"    "<<v2<<endl<<endl;
	
	float f1=18.99;float f2 = 43.88;
	intercambia(f1,f2);
	cout<<f1<<"    "<<f2<<endl<<endl;
	
	char c1= 'M';char c2 = 'X';
	intercambia(c1,c2);
	cout<<c1<<"    "<<c2<<endl<<endl;
	
	return 0;
}

