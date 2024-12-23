#include <iostream>
using namespace std;

int getedad(int fechaactual,int fechanac){
	return (fechaactual-fechanac)/10000;
}
int getedad(int anioact,int mesact,int diaact,int anionac,int mesnac,int dianac){
	int f1=anioact * 10000 + mesact * 100 + diaact;
	int f2=anionac * 10000 + mesnac * 100 + dianac;
	///return (f1-f2)/10000;
	return getedad(f1,f2);
}

int main() {
	int actual = 20240517;
	int nac = 19760203;
	
	int edad = getedad(actual,nac);
	cout<<"La edad es "<<edad<<endl<<endl;
	
	int aa = 2024,ma=5,da=17;  /// fecha actual
	int an = 1992,mn=3,dn=7;  /// Fecha nacimiento
	edad = getedad(aa,ma,da,an,mn,dn);
	cout<<"La edad es "<<edad<<endl<<endl;
	return 0;
}

