#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	
	//a
	if (num%2==0){
		cout<<"Es PAR";
	} else {
		cout<<"Es IMPAR";
	}
	
	//b
	if (num%5==0 && num%3==0){
		cout<<"Es VERDAD";
	} else {
		cout<<"Es FALSO";
	}
	return 0;
}

