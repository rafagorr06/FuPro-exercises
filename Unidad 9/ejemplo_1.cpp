#include <iostream>
#include <vector>

using namespace std;


vector<int>GetPares(vector<int>v) {
	vector<int>pares; //declaro un vector vacío
	for (int i=0 ; i < v.size() ; i++) {
		if (v[i] % 2 == 0) {pares.push_back(v[i]);}
	}
	return pares;
}

int main() {
	vector<int>v(20);
	for (int i=0 ; i<20 ; i++) {
		v[i] = 100 + rand()%500;
		cout << v[i];
	}
	cout<<endl<<endl;
	
	
	vector<int>aux = GetPares(v);
	
	for (int i=0 ; i<aux.size() ; i++) {
		cout << aux[i]<< "  ";
	}
	return 0;
}

