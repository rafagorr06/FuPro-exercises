#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	
	float x = 4.5, y = 12.3;
	int z = 10, u = 8;
	char letra = 'm';
	
	if (x<y) {
		cout<<"Verdadero"<<endl;
	} else {
		cout <<"Falso"<<endl;
	}
	
	if ((x <= y) || (letra == 'j')) {
		cout<<"Verdadero"<<endl;
	} else {
		cout <<"Falso"<<endl;
	}
	
	if (letra <= 'G') {
		cout<<"Verdadero"<<endl;
	} else {
		cout <<"Falso"<<endl;
	}
	
	if (abs(x-y) > 7.0) {
		cout<<"Verdadero"<<endl;
	} else {
		cout <<"Falso"<<endl;
	}
	
	if (z && u+2 < z) {
		cout<<"Verdadero"<<endl;
	} else {
		cout <<"Falso"<<endl;
	}
	
	if ((z>x)&&(letra<'m')||(letra=='h')) {
		cout<<"Verdadero"<<endl;
	} else {
		cout <<"Falso"<<endl;
	}
	
	if ('2' <= letra) {
		cout<<"Verdadero"<<endl;
	} else {
		cout <<"Falso"<<endl;
	}
	
	if (('q' < 's') || false) {
		cout<<"Verdadero"<<endl;
	} else {
		cout <<"Falso"<<endl;
	}
	
	if (sin(y-x) <= 1) {
		cout<<"Verdadero"<<endl;
	} else {
		cout <<"Falso"<<endl;
	}
	
	if (toupper(letra) == 'M') {
		cout<<"Verdadero"<<endl;
	} else {
		cout <<"Falso"<<endl;
	}
	
	return 0;
}

