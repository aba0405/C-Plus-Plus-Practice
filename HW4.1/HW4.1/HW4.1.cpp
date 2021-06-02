#include <iostream>
using namespace std;

int main() {

	int posInt;
	int count;

	cout << "Please enter a positive integer:" << endl;
	cin >> posInt;

	while (count <= posInt)
	{
		cout << count*2 << endl;
		count++;
	}
}