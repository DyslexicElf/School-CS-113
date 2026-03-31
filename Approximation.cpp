//Lab Exercise 4
//Approximation
//Avery Andrews

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double x;
	cout << "Enter x: " << endl;
	cin >> x;

	for (int N = 1; N <= 100; N++) {
		double sum = 1.0;
		double factorial = 1.0;
		double power = 1.0;

		for (int i = 1; i < N; i++) {
			power *= x;
			factorial *= i;
			sum += power / factorial;
		}
		cout << "N = " << N << ", sum = " << fixed << setprecision(3) << sum << endl;
	}

	return 0;

}