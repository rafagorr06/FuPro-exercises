#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin>>a;
	cin>>b;
	cin>>c;
	
	int mayor=0;

	if (a > mayor) {
		mayor = a;
	}
	
	if (b > mayor){
		mayor = b;
	}
	
	if (c > mayor){
		mayor = c;
	}
	
	cout<<mayor;
	return 0;
}

