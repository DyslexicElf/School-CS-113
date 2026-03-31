//Lab exercise 3ish challenge
//Largest to smallest
//Avery Andrews

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int nums[5];
	int min_val, max_val;

	cout << "Enter five integers: " << endl;

	for (int i = 0; i < 5; ++i) {
		cin >> nums[i];
	}

	max_val = nums[0];
	min_val = nums[0];

	for (int i = 1; i < 5; ++i) {
		if (nums[i] > max_val) {
			max_val = nums[i];
		}

		if (nums[i] < min_val) {
			min_val = nums[i];
		}
		
	}

	cout << "The largest integer is: " << max_val << endl;
	cout << "The smallest integer is: " << min_val << endl;


	return 0;
}