#include <iostream>
#include <matrix>
using namespace std;

int main() {
	
	matrix<int>lluvias(5,12,-1);
	
	int mm;
	for(int i=0;i<5;i++) { 
		for(int j=0;j<12;j++) { 
			cin>>mm;
			lluvias[i][j] = mm;
		}
	}
	
	for(int i=0;i<5;i++) { 
		for(int j=0;j<12;j++) { 
			cout<<lluvias[i][j]<<endl;
		}
	}
	
	//a
	for(int i=0;i<5;i++) { 
		int contador, suma, prom;
		for(int j=0;j<12;j++) { 
			if(lluvias[i][j]!=-1){
				contador++;
				suma += lluvias[i][j];
			}
		}
		prom = suma/contador;
		for(int j=0;j<12;j++) { 
			if(lluvias[i][j]==-1){
				lluvias[i][j] = prom;
			}
		}
	}
	
	//b
	lluvias.resize(1+1);
	
	return 0;
}

