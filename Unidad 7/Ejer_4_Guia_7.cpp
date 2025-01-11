#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	float x = 4.5, y = 12.3;
	int z = 10, u = 8;
	char letra = 'm';
	
	
	int a = ++u;
	int b = letra + 2;
	int c = (x-y)/2+abs(u-y);
	int d = 3 + u % 3;
	int e = u++;
	int f = 2*--u+x/3;
	int g = letra += 1;
	int h = pow( z,3);
	int x1 = (x+1) / 2;
	return 0;
}

