//Lab Exercise Extra
//Roman Numerals
//Avery Andrews

#include <iostream>
#include <string>
using namespace std;




//Prototypes
int getValidYear();
string convertToRoman(int number);


//Functions
int getValidYear() {
	int year;
	cout << "Enter a year between 1000 and 3000: ";
	cin >> year;

	while (year < 1000 || year > 3000) {
		cout << "Invalid input. Enter a between 1000 and 3000:";
		cin >> year;
	}
	return year;
}

//Conversion to roman numerals
string convertToRoman(int number) {
	int values[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
	
	string numerals[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

	string roman = "";

	for (int i = 0; i < 13; i++) {
		while (number >= values[i]) {
			roman += numerals[i];
			number -= values[i];
		}
	}
	return roman;
}

int main() {

	int year = getValidYear();
	string roman = convertToRoman(year);

	cout << "The year " << year << " in Roman numerals is " << roman << endl;

	return 0;

}