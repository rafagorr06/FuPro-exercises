#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool es_primo (int n) {
	int d=2;
	while (d<=sqrt(n) && n%d != 0) {
		d++;
	}
	
	return d>sqrt(n);
}

int main(int argc, char *argv[]) {
	int c=0; 
	int n=2;
	do {
		if (es_primo(n)) {
			cout << setw(5) << n;
			c++;
			
			if (c%10 == 0) cout << endl;
		}
		n++;
	} while (c!=1000);
	
	
	return 0;
}

