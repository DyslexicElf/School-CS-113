//Lab exercise 3
//Multiples
//Avery Andrews


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num1, num2;

	cout << "Enter two integers: ";
	cin >> num1 >> num2;

	

	if (num1 % num2 == 0)
		cout << num1 << " is a multiple of " << num2 << endl;
	else
		cout << num1 << " is not a multiple of " << num2 << endl;


	return 0;
}