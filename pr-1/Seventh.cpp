// find the minimum number of denominations required to make a given amount of money.

#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int count = 0;

    if (amount >= 2000) {
        count += amount / 2000;
        amount %= 2000;
    }
    if (amount >= 500) {
        count += amount / 500;
        amount %= 500;
    }
    if (amount >= 200) {
        count += amount / 200;
        amount %= 200;
    }
    if (amount >= 100) {
        count += amount / 100;
        amount %= 100;
    }
    if (amount >= 50) {
        count += amount / 50;
        amount %= 50;
    }
    if (amount >= 20) {
        count += amount / 20;
        amount %= 20;
    }
    if (amount >= 10) {
        count += amount / 10;
        amount %= 10;
    }
    if (amount >= 5) {
        count += amount / 5;
        amount %= 5;
    }
    if (amount >= 2) {
        count += amount / 2;
        amount %= 2;
    }
    if (amount >= 1) {
        count += amount;
        amount = 0;
    }

    cout << "Minimum number of denominations required: " << count << endl;

    return 0;
}
