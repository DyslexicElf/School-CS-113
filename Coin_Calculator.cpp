// CS 113
//Lab Exercise 2 Part 2
//Avery Andrews

#include <iostream>
using namespace std;

int main() {

	cout << "Enter 2 integers." << endl;

	int x;
	int y;
	cin >> x;
	cin >> y;

	cout << "" << x << " + " << y << " = " << x + y << endl;
	
	cout << "" << x << " - " << y << " = " << x - y << endl;

	cout << "" << x << " * " << y << " = " << x * y << endl;

	cout << "" << x << " / " << y << " = " << x / y << endl;

	cout << "" << x << " % " << y << " = " << x % y << endl;

	int quotient = x / y;
	int remainder = x % y;

	cout << "" << quotient << " * " << y << " + " << remainder << " = " << quotient * y + remainder << endl;
	return 0;
}
