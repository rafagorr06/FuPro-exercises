#include <iostream>
using namespace std;

int main() {
	int f_nac;
	cin>> f_nac;
	
	int f_vot;
	cin>> f_vot;
	
	int anoedad = f_nac%10000;
	int anovot = f_vot%10000;
	
	if (anovot-anoedad>=18){
		cout<<"Tiene 18, puede votar";
	} else {
		cout<<"No tiene 18, no puede votar";
	}
	return 0;
}

