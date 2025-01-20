#include <iostream>
using namespace std;

int mcd (int a, int b){
	while (b != 0){
		mcd(b, a%b);
	}
	return a;
}


int main() {
	int a, b;
	cin>>a;
	cin>>b;
	
	mcd(a,b);
	return 0;
}

