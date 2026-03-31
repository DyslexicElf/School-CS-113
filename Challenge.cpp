//CS-113
//Challenge Problem
//Avery Andrews

#include <iostream>
using namespace std;

int main() {

	int q;
	int d;
	int n;
	int p;

	cout << "Enter number of quarters: " << endl;
	cin >> q;
	cout << "\nEnter the number of dimes: " << endl;
	cin >> d;
	cout << "\nEnter number of nickles: " << endl;
	cin >> n;
	cout << "\nEnter number of pennies: " << endl;
	cin >> p;

	double quarter = q * 25;
	double dime = d * 10;
	double nickel = n * 5;
	double pennie = p * 1;

	cout << "\nTotal coins worth " << quarter + dime + nickel + pennie << " cents." << endl;


	float userNum;
	int change;
	int quarters;
	int dimes;
	int nickels;
	int pennies;

	cout << "\nEnter the change \(in cents\): " << endl;
	cin >> userNum;
	
	change = userNum;
	quarters = change / 25; // calculate the number of quarters
	change = change % 25; // calculate remaining change needed
	dimes = change / 10; // calculate the number of dimes
	change = change % 10; // calculate remaining change needed
	nickels = change / 5; // calculate the number of nickels
	pennies = change % 5; // calculate pennies


	cout << quarters << "Quarter\(s\). " << dimes << " Dime\(s\). " << nickels << " Nickel\(s\). " << pennies << " Pennie\(s\)S." << endl; 

	return 0;
}