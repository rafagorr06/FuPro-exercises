#include <iostream>
using namespace std;

int main() {
	int y=100;
	int z = --y;
	cout << z << "  " << y;
	
	int y=100;
	int z = y--;
	cout << z << "  " << y;
	
	int x=50;
	cout << x++ << endl;
	cout << x << endl;
	
	int x=50;
	cout << ++x << endl;
	cout << x << endl;
	
	return 0;
}

