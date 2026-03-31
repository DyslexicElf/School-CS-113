//Switch statement

#include <iostream>
using namespace std;

int main()
{
	cout << "Grade Output\n";

	char grade;

	cout << "Enter a letter grade: ";
	cin >> grade;

	if (grade == 'A' || grade == 'a')
	{
		cout << "Excellent!" << endl;
	}
	else if (grade == 'B' || grade == 'b')
	{
		cout << "Good job!" << endl;
	}
	else if (grade == 'C' || grade == 'c')
	{
		cout << "Nice!" << endl;
	}
	else if (grade == 'D' || grade == 'd')
	{
		cout << "Doo better!" << endl;
	}
	else if (grade == 'F' || grade == 'f')
	{
		cout << "Retake the class!" << endl;
	}
	else
	{
		cout << "Invalid Input" << endl;
	}
	return 0;
}