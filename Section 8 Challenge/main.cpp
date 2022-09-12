#include <iostream>
using namespace std;

int main() {
	int cents{};
	cout << "Enter an amount of cents: ";
	cin >> cents;
	int dollars = cents / 100;
	int quarters = (cents - 100 * dollars) / 25;
	int dimes = (cents - 100 * dollars - quarters * 25) / 10;
	int nickels = (cents - 100 * dollars - quarters * 25 - dimes * 10) / 5;
	int pennies = (cents - 100 * dollars - quarters * 25 - dimes * 10 - nickels * 5) / 1;

	cout << "You can provide this change as follows: " << endl;
	cout << "dollars   : " << dollars << endl;
	cout << "quarters  : " << quarters << endl;
	cout << "dimes     : " << dimes << endl;
	cout << "nickels   : " << nickels << endl;
	cout << "pennies   : " << pennies << endl;

	return 0;
}