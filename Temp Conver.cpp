//Temperature Converter
//Converts Fahrenheit to Celcius
//Avery Andrews

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float tempF, tempC;

	cout << fixed << setprecision(2);

	cout << "Enter a temperature in Fahrenheit: " << endl;
	cin >> tempF;

	tempC = (tempF - 32) * 5.0 / 9;

	cout << "The temperature in Celicus is " << tempC << endl;

	cout << "Enter a temperature in Celicus: " << endl;
	cin >> tempC;

	tempF = (tempC * 1.8) + 32;

	cout << " The temperature in Fahrenheit is " << tempF << endl;

	return 0;
}