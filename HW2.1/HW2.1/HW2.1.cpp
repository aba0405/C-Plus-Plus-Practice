#include <iostream>
using namespace std;

int main() {
	int quarters;
	int dimes;
	int nickles;
	int pennies;
	int total;
	int dollars;
	int cents; 

	cout << "Please enter number of coins: " << endl;

	cout << "# of quarters: " << endl;
	cin >> quarters;
	quarters *= 25;

	cout << "# of dimes : " << endl;
	cin >> dimes;
	dimes *= 10;

	cout << "# of nickels: " << endl;
	cin >> nickles;
	nickles *= 5;

	cout << "# of pennies:" << endl;
	cin >> pennies;

	total = quarters + dimes + nickles + pennies;

	dollars = total / 100;
	cents = total % 100;

	cout << "The Total is " << dollars <<" dollars and " << cents << " cents" <<endl;

	return 0;
}