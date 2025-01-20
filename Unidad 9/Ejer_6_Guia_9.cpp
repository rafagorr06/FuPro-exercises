#include <iostream>
#include <vector>
using namespace std;

int bmenor (vector<int>meses, int &menor){
	for(size_t i=0;i<meses.size();i++) { 
		if (meses[i]<menor){
			menor = i;
		}
	}
	return menor;
}

int main() {
	int monto, dia, mes, menor=999999;
	vector<int>meses(12);
	
	cout<<"Ingrese el monto: ";
	cin>>monto;
	
	while(monto!=0){
		cout<<" Del mes: ";
		cin>>mes;
		meses[mes] += monto;
		cout<<"Ingrese el monto: ";
		cin>>monto;
	}
	
	for(size_t i=0;i<meses.size();i++) { 
		cout<<"El monto recaudado en el mes "<<i<<" es de "<<meses[i]<<endl;
	}
	
	cout<<"El mes de menor aporte fue: "<<bmenor(meses,menor);
	return 0;
}

