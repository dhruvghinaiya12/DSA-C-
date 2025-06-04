#include <iostream>
using namespace std;

int main() {
    int number, count = 0;

    cout << "Enter any number: ";
    cin >> number;

    int temp = number;
    if (temp == 0) {
        count = 1;
    } else {
        while (temp != 0) {
            temp /= 10;
            count++;
        }
    }

    cout << "Total number of digits: " << count << endl;
    return 0;
}
