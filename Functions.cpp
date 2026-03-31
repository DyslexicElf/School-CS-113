//Functions Learning

#include <iostream>
#include <iomanip>
using namespace	std;

float avg(int a, int b, int c)
{
	float av = (a + b + c) / 3.0;

	return av;

}

int findMin(int a, int b, int c)
{
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}

int power(int base, int exponent)
{
	int result = 1;
	for (int i = 0; i < exponent; i++) {
		result *= base;
	}
	return result;
}

double powerExtended(double base, double exponent)
{
	double result = 1;

	if (exponent > 0) {
		for (int i = 0; i < exponent; i++) {
			result *= base;
		}
		
	}
	else if (exponent < 0) {
		for (int i = 0; i < -exponent; i++) {
			result *= base;
		}
		result = 1 / result;
	}
	return result;
}

void greet() {
	cout << "Hello There!" << endl;
}

int main() {
int n1, n2, n3;

	greet();

	cout << "Enter three integers: ";
	cin >> n1 >> n2 >> n3;

	double average = avg(n1, n2, n3);

	cout << fixed << setprecision(2);
	cout << "The average of " << n1 << ", " << n2 << ", and " << n3 << " is: " << average << endl;
	
	int smallest = min({ n1, n2, n3 });

	cout << "The smallest number is: " << smallest << endl;

	cout << "Power: " << power(3, 4) << endl;

	cout << "Power: " << powerExtended(2, -3) << endl;

	return 0;
}

