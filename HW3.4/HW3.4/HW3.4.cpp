#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;
int main() {

    double realNum;
    int roundingMethod;
    int roundedNum;

    // Store user input
    cout << "Please enter a Real number:" << endl;
    cin >> realNum;

    // Gives user options for rounding methods
    cout << "Choose your rounding method:" << endl;
    cout << "1. Floor round" << endl;
    cout << "2. Ceiling round" << endl;
    cout << "3. Round to the nearest whole number" << endl;

    cin >> roundingMethod;

    // Switch based on user inputs (1, 2, or 3)
    switch (roundingMethod) {
    case FLOOR_ROUND:
        roundedNum = floor(realNum);
        cout << roundedNum << endl;
        break;
    case CEILING_ROUND:
        roundedNum = ceil(realNum);
        cout << roundedNum << endl;
        break;
    case ROUND:
        roundedNum = round(realNum);
        cout << roundedNum << endl;
        break;
        // If the user enters any inputs besides 1, 2, or 3
    default:
        cout << "Invalid input. Please choose your rounding method again (1, 2 or 3)" << endl;
        break;
    }

    return 0;
}