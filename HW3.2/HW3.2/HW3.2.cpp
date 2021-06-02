#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	int gradYear;
	int currYear;

	cout << "Please enter your name:" << endl;
	cin >> name;

	cout << "Please enter your graduation year:" << endl;
	cin >> gradYear;

	cout << "Please enter current year:" << endl;
	cin >> currYear;

	if (gradYear == currYear) {
		cout << name << " You status is Graduated" << endl;
	}
	else if (gradYear == currYear + 4) {
		cout << name << " Your current status is Freshman" << endl;
	}
	else if (gradYear == currYear + 3) {
		cout << name << ", Your current status is Sophomore" << endl;
	}
	else if (gradYear == currYear + 2) {
		cout << name << ", Your current status is Junior" << endl;
	}
	else if (gradYear == currYear + 1) {
		cout << name << ", Your current status is Senior" << endl;
	}
	else if (gradYear == currYear - 1) {
		cout << name << ", Your not in college yet" << endl;
	}

	return 0;
}