#include <iostream>
using namespace std;

int main() {

	int priceFirstItem;
	int priceSecondItem;
	bool haveClubCard;
	double taxRate;
	int basePrice;
	double calculateDiscount;
	double totalPrice;

	cout << "Enter price of first item: " << endl;
	cin >> priceFirstItem;

	cout << "Enter price of second item: " << endl;
	cin >> priceSecondItem;

	basePrice = priceFirstItem + priceSecondItem;

	cout << "Does customer have a club card? (Y/N): " << endl;
	cin >> haveClubCard;

	if (haveClubCard == true) {
		cout << priceFirstItem + priceSecondItem * 10 / 100 << endl;
	}
	else
		cout << basePrice;

	cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: " << endl;
	cin >> taxRate;
	cout<< priceFirstItem + priceSecondItem * taxRate / 100 << endl;


	cout << "Base price: " << basePrice << endl;

	
	calculateDiscount = priceFirstItem + priceSecondItem * 10 / 100;
	cout << "Price after discounts: " << calculateDiscount << endl;


	totalPrice = basePrice + calculateDiscount + taxRate;
	cout << "Total price: " << totalPrice << endl;


	return 0;
}