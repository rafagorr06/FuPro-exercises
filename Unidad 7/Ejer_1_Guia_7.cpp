#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	
	//a
	int raiz1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	int raiz2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	//b 
	int x;
	cin>>x;
	float ecu1 = log(2*x-1)+((pow(-2.74,2*x)+sqrt(pow(x,a))-3*a*x,5)/2*x-1);
	
	int z;
	cin>>z;
	float ecu2 = (pow(2.74,a)/a-x)+((pow(2.74,a+z)*sin(a-x)+pow(2.74,pow(x,2)))/2);
	return 0;
}





