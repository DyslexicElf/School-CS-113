//What type of angle?
//Lab Exercise 3
//Avery Andrews

#include <iostream>
#include <limits>
using namespace std;

int main() {

	int angle;

		
	cout << "Enter the size of angle: " << endl;
		cin >> angle;

		angle = angle % 360;

	if (angle <90) {
		cout << "It is Acute!" << endl;
	}
	else if (angle == 90) {
		cout << "Its is Right!" << endl;
	}
	else if (angle < 180) {
		cout << "Its is Obtuse!" << endl;
	}
	else if (angle == 180) {
		cout << "It is Straight!" << endl;
	}
	else if (angle < 360) {
		cout << "It is Reflex!" << endl;
	}
	else if (angle == 360) {
		cout << "It is Full!" << endl;
	}
	

	return 0;
}