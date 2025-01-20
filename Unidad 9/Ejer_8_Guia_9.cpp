#include <iostream>
#include <matrix>
using namespace std;

int main() {
	
	matrix<int>empresa(4,25,0);
	int codsuc, codart, cantvend;
	
	cin>>codsuc;
	while (codsuc!=0) {
		cin>>codart;
		cin>>cantvend;
		empresa[codsuc][codart] += cantvend;
		cin>>codsuc;
	}
	
	//mostrar resultados
	//a
	for(int i=0;i<4;i++) { 
		for(int j=0;j<25;j++) { 
			cout<<empresa[i][j]<<endl;
		}
	}
	
	//b
	int suma = 0;
	for(int j=0;j<25;j++) { 
		suma += empresa[3][j];
	}
	cout<<suma<<endl;
	
	//c
	cout<<empresa[1][6]<<endl;
	
	//d
	int cantmay, sucmay;
	for(int i=0;i<4;i++) { 
		if(empresa[i][8]>cantmay){
			cantmayor = empresa[i][8];
			sucmayor = i;
		}
	}
	cout<<sucmayor<<endl;
	return 0;
}

