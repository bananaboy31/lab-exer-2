#include <iostream>
using namespace std;

void max(int a, int b){
	cout << "\nThe largest number is ";
	if (a>b)
		cout << a;
	else
		cout << b;
}

int main (){
	int a, b;
	
	cout << "Please enter the first value: ";
	cin >> a;
	cout << "Please enter the second value: ";
	cin >> b;
	
	max(a,b);
	
	return 0;
}
