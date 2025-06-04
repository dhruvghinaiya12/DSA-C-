#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter any number: ";
    cin >> number;

    int lastDigit = number % 10;
    int firstDigit = number;

    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit;
    cout << "The sum of the first and the last digit: " << sum << endl;

    return 0;
}
