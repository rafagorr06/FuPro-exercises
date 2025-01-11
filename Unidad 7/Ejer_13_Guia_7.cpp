#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int costo_inicial; cin>>costo_inicial;
	int cant_horas; 
	vector<float>operarios(3);
	
	for(int i=0;i<operarios.size();i++) { 
		cin>>cant_horas;
		if(cant_horas>40){
			operarios[i]=costo_inicial*40;
			int aux=0;
			aux=cant_horas-40;
			operarios[i] += aux*40*1.5;
		} else {
			operarios[i] = cant_horas * costo_inicial;
		}
		
		cout<<"Su sueldo es de: "<<operarios[i]<<endl;
	}
	
	int mayor = 0;
	for(int i=0;i<operarios.size();i++) { 
		if (operarios[i]>mayor){
			mayor = operarios[i];
		}
	}
	cout<<"El salario mayor es: "<<mayor<<endl;;
	
	int menor = 1000000000;
	for(int i=0;i<operarios.size();i++) { 
		if (operarios[i]<menor){
			menor = operarios[i];
		}
	}
	cout<<"El salario menor es: "<<menor<<endl;;
	
	float promedio = 0.0;
	for(int i=0;i<operarios.size();i++) { 
		promedio += operarios[i];
	}
	cout<<"El salario promedio es de: "<<promedio/operarios.size()<<endl;;
	
	return 0;
}

