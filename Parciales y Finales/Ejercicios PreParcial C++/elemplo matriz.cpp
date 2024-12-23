#include <iostream>
#include <matrix>
#include <cstdlib>
using namespace std;
/**
Escriba una función que reciba una matriz de flotantes, 
y dos números de filas (f1 y f2), y reemplace todas las filas desde f1 hasta f2 
(incluyendo ambas) por una única fila conformada en cada columna 
por el promedio de los datos eliminados de esa columna
**/

matrix<float>ObtenerMatriz(matrix<float>m,int f1,int f2){
	/// suponemos que f1 no es primer fila 
	
	/// Paso 1, colocar todos los promedios en f1
	for(size_t col = 0;col<m.size(1);col++){
		float suma = 0;
		for(size_t fila = f1;fila<=f2;fila++){
			suma+=m[fila][col];
		}
		m[f1][col]=suma/(f2-f1);	
	}        hy7 f ykvyyfyfityff y gobu gcpi
		
		
		
		
	
	matrix<float>m2(1,m.size(1));
	for(size_t i = 0;i<=f1;i++){
		if (i>0){
			/// le agrego una fila a la matriz nueva
			m2.resize(m2.size(0)+1,m2.size(1));
		}
		for(size_t j=0;j<m.size(1);j++) { 
			m2[i][j] = m[i][j];
		}
	}
	
	for(size_t i = f2+1;i<m.size(0);i++){
		m2.resize(m2.size(0)+1,m2.size(1)); /// agrego fila 
		for(size_t j=0;j<m.size(1);j++) {
			m2[m2.size(0)-1][j] = m[i][j];
		}
	}
	return m2;
}


int main() {
	
	matrix<float>m(8,8,0);
	
	for(size_t i=0;i<m.size(0);i++) { 
		for(size_t j=0;j<m.size(1);j++) { 
			m[i][j] = 100.00 + rand()% 600;
			cout<<m[i][j]<<"   ";
		}
		cout<<endl;
	}
	cout<<endl<<endl<<endl;
	matrix<float>m2=ObtenerMatriz(m,3,6);
	for(size_t i =0;i<m2.size(0);i++) { 
		for(size_t j=0;j<m2.size(1);j++) { 
			cout<<m2[i][j]<<"   ";
		}
		cout<<endl;
	}
	return 0;
}

