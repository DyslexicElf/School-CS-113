//Lab exercise 3ish
//Statistican
//Avery Andrews

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num1, num2, num3, num4, num5;
	int posCount = 0, nonPosCount = 0, totalCount = 5;
	int posSum = 0, nonPosSum = 0, totalSum = 0;

	cout << "Enter 5 integers: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	int numbers[5] = { num1, num2, num3, num4, num5 };

	for (int i = 0; i < 5; i++)
	{
		if (numbers[i] > 0)
		{
			posCount++;
			posSum += numbers[i];
		}
		else
		{
			nonPosCount++;
			nonPosSum += numbers[i];
		}
		totalSum += numbers[i];
	}

	cout << "Sum of positive integers: " << posSum << endl;
	cout << "Number of positive integers: " << posCount << endl;
	cout << "Average of positive integers: " << (posCount > 0 ? static_cast<double>(posSum) / posCount : 0) << endl;
	cout << "Sum of non-positive integers: " << nonPosSum << endl;
	cout << "Number of non-positive integers: " << nonPosCount << endl;
	cout << "Average of non-positive integers: " << (nonPosCount > 0 ? static_cast<double>(nonPosSum) / nonPosCount : 0) << endl;
	cout << "Sum of all integers: " << totalSum << endl;
	cout << "Number of all integers: " << totalCount << endl;
	cout << "Average of all integers: " << static_cast<double>(totalSum) / totalCount << endl;

   



	return 0;
}