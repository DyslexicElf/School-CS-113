//Lab Exercise Challenge
//Checkbook
//Avery Andrews

#include <iostream>
#include <iomanip>
using namespace std;

//Definitions
void withdraw(double& checking, double& savings) {
	int account;
	double amount;

	cout << "Withdraw from (1=Checking, 2=Savings): ";
	cin >> account;
	cout << "Amount: ";
	cin >> amount;

	if (amount < 0) {
		cout << "Invalid amount.\n";
		return;
	}

	if (account == 1) {
		if (amount > checking)
			cout << "Insufficient funds.\n";
		else
			checking -= amount;
	}
	else if (account == 2) {
		if (amount > savings)
			cout << "Insufficient funds\n";
		else
			savings -= amount;
	}
	else {
		cout << "Invalid account.\n";
	}
}

void deposit(double& checking, double& savings) {
	int account;
	double amount;

	cout << "Deposite into (1=Checking, 2=Savings): ";
	cin >> account;
	cout << "Amount: ";
	cin >> amount;

	if (amount < 0) {
		cout << "Invalid amount.\n";
		return;
	}

	if (account == 1)
		checking += amount;
	else if (account == 2)
		savings += amount;
	else
		cout << "Invalid account.\n";
}

void transfer(double& checking, double& savings) {
	int choice;
	double amount;

	cout << "1. Checking to Savings\n";
	cout << "2. Savings to Checking\n";
	cout << "Choice: ";
	cin >> choice;

	cout << "Amoutn: ";
	cin >> amount;

	if (amount < 0) {
		cout << "Invalid amount.\n";
		return;
	}

	if (choice == 1) {
		if (amount > checking)
			cout << "Insufficient funds.\n";
		else {
			checking -= amount;
			savings -= amount;
		}
	}
	else if (choice == 2) {
		if (amount > savings)
			cout << "Insufficient funds.\n";
		else {
			savings -= amount;
			checking -= amount;
		
		}
	}
	else {
		cout << "Invalid choice.\n";
	}
}

void display(double checking, double savings) {
	cout << "Checking: $" << checking << endl;
	cout << "Savings: $" << savings << endl;
}


int main() {

	double checking = 100.0;
	double savings = 100.0;
	int choice;
	char again;

	cout << fixed << setprecision(2);

	do {
		cout << "\n==== Menu ====\n";
		cout << "1. Withdraw\n";
		cout << "2. Deposit\n";
		cout << "3. Transfer\n";
		cout << "4. Display Balances\n";
		cout << "5. Exit\n";
		cout << "Enter choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			withdraw(checking, savings);
			break;
		case 2:
			deposit(checking, savings);
			break;
		case 3:
			transfer(checking, savings);
			break;
		case 4:
			display(checking, savings);
			break;
		case 5:
			break;
		default:
			cout << "Invalid choice.\n";
		}

		cout << "\nDo another transaction? (y/n): ";
		cin >> again;
	} while (again == 'y' || again == 'Y');

	cout << "\nFinal balances:\n";
	display(checking, savings);

	return 0;

}
